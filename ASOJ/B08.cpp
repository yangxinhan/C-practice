#include <iostream>
using namespace std;

int main(){
    int sh, sm, eh, em, h, m;
    cin >> sh >> sm >> eh >> em;
    cin >> h >> m;
    if(h *60 + m >= sh * 60 + sm && h * 60 + m <= eh * 60 + em){
        cout << "Learning";
    }else{
        cout << "Break";
    }
    return 0;
}