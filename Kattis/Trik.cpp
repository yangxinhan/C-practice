#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 1, b = 0, c = 0;
    string moves;
    cin >> moves;
    for (int i = 0; i < moves.length(); i++) {
        if (moves[i] == 'A') {
            if(a == 0 && b == 0){
                a = 0;
                b = 0;
            } else if(a == 0 && b == 1){
                a = 1;
                b = 0;
            } else if(a == 1 && b == 0){
                a = 0;
                b = 1;
            }
        } else if (moves[i] == 'B') {
            if(b == 0 && c == 0){
                b = 0;
                c = 0;
            } else if(b == 0 && c == 1){
                b = 1;
                c = 0;
            } else if(b == 1 && c == 0){
                b = 0;
                c = 1;
            }
        } else if (moves[i] == 'C') {
            if(a == 0 && c == 0){
                a = 0;
                c = 0;
            } else if(a == 0 && c == 1){
                a = 1;
                c = 0;
            } else if(a == 1 && c == 0){
                a = 0;
                c = 1;
            }
        }
    }
    if(a == 1){
        cout << 1 << endl;
    } else if(b == 1){
        cout << 2 << endl;
    } else if(c == 1){
        cout << 3 << endl;
    }
    return 0;
}