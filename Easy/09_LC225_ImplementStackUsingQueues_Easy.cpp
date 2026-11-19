// LeetCode 225 - Implement Stack using Queues (Easy)
// Approach: Keep one queue in stack order. After push, rotate older elements behind the new one.
// Time: push O(n), pop/top O(1), Space: O(n)
class MyStack {
private:
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        int size = (int)q.size();
        for (int i = 0; i < size - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }
    int pop() {
        int value = q.front();
        q.pop();
        return value;
    }
    int top() {
        return q.front();
    }
    bool empty() {
        return q.empty();
    }
};
