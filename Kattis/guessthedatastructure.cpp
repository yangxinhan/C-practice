#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n) {
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;

        bool can_be_stack = true;
        bool can_be_queue = true;
        bool can_be_priority_queue = true;

        for (int i = 0; i < n; ++i) {
            int type, val;
            cin >> type >> val;

            if (type == 1) {
                if (can_be_stack) s.push(val);
                if (can_be_queue) q.push(val);
                if (can_be_priority_queue) pq.push(val);
            } else {
                if (can_be_stack) {
                    if (s.empty() || s.top() != val) {
                        can_be_stack = false;
                    } else {
                        s.pop();
                    }
                }

                if (can_be_queue) {
                    if (q.empty() || q.front() != val) {
                        can_be_queue = false;
                    } else {
                        q.pop();
                    }
                }

                if (can_be_priority_queue) {
                    if (pq.empty() || pq.top() != val) {
                        can_be_priority_queue = false;
                    } else {
                        pq.pop();
                    }
                }
            }
        }

        int possible_structures = 0;
        if (can_be_stack) possible_structures++;
        if (can_be_queue) possible_structures++;
        if (can_be_priority_queue) possible_structures++;

        if (possible_structures == 0) {
            cout << "impossible\n";
        } else if (possible_structures > 1) {
            cout << "not sure\n";
        } else {
            if (can_be_stack) {
                cout << "stack\n";
            } else if (can_be_queue) {
                cout << "queue\n";
            } else {
                cout << "priority queue\n";
            }
        }
    }

    return 0;
}
