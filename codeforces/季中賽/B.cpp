#include <iostream>
#include <deque>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    deque<int> belt;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        belt.push_back(x);
    }
    
    int M;
    cin >> M;
    vector<stack<int> > burgers(M);
    
    int Q;
    cin >> Q;
    bool valid = true;
    
    while(Q--) {
        string op;
        cin >> op;
        
        if(op == "clockwise") {
            belt.push_front(belt.back());
            belt.pop_back();
        }
        else if(op == "counterclockwise") {
            belt.push_back(belt.front());
            belt.pop_front();
        }
        else if(op == "take") {
            int A;
            cin >> A;
            A--;

            if(!burgers[A].empty() && belt.front() > burgers[A].top()) {
                valid = false;
                break;
            }
            burgers[A].push(belt.front());
            belt.pop_front();
        }
        else if(op == "move") {
            int A, B;
            cin >> A >> B;
            A--; B--;

            if(!burgers[B].empty() && burgers[A].top() > burgers[B].top()) {
                valid = false;
                break;
            }
            int temp = burgers[A].top();
            burgers[A].pop();
            burgers[B].push(temp);
        }
    }
    
    if(!valid) {
        cout << "Oops!" << endl;
        return 0;
    }
    
    // 修改輸出部分
    for(int i = 0; i < M; i++) {
        if(burgers[i].empty()) {
            cout << "-1" << endl;
            continue;
        }
        
        vector<int> temp;
        while(!burgers[i].empty()) {
            temp.push_back(burgers[i].top());
            burgers[i].pop();
        }

        for(int j = temp.size() - 1; j >= 0; j--) {
            cout << temp[j];
            if(j > 0) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}
