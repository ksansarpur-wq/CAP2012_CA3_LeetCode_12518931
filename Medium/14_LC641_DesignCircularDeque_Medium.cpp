// LeetCode 641 - Design Circular Deque (Medium)
// Approach: Fixed-size array with front index and current size; rear is derived from these.
// Time: O(1) per operation, Space: O(k)
class MyCircularDeque {
private:
    vector<int> data;
    int capacity;
    int frontIndex;
    int count;
public:
    MyCircularDeque(int k) : data(k), capacity(k), frontIndex(0), count(0) {}
    bool insertFront(int value) {
        if (isFull()) return false;
        frontIndex = (frontIndex - 1 + capacity) % capacity;
        data[frontIndex] = value;
        ++count;
        return true;
    }
    bool insertLast(int value) {
        if (isFull()) return false;
        int rearIndex = (frontIndex + count) % capacity;
        data[rearIndex] = value;
        ++count;
        return true;
    }
    bool deleteFront() {
        if (isEmpty()) return false;
        frontIndex = (frontIndex + 1) % capacity;
        --count;
        return true;
    }
    bool deleteLast() {
        if (isEmpty()) return false;
        --count;
        return true;
    }
    int getFront() {
        return isEmpty() ? -1 : data[frontIndex];
    }
    int getRear() {
        return isEmpty() ? -1 : data[(frontIndex + count - 1) % capacity];
    }
    bool isEmpty() {
        return count == 0;
    }
    bool isFull() {
        return count == capacity;
    }
};
