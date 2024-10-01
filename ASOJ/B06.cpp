#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    if(n >74.06 && n <= 100){
        cout << 15;
    }else if(n > 68.77 && n <= 74.06){
        cout << 14;
    }else if(n > 63.48 && n <= 68.77){
        cout << 13;
    }else if(n > 58.19 && n <= 63.48){
        cout << 12;
    }else if(n > 52.90 && n <= 58.19){
        cout << 11;
    }else if(n > 47.61 && n <= 52.90){
        cout << 10;
    }else if(n > 42.32 && n <= 47.61){
        cout << 9;
    }else if(n > 37.03 && n <= 42.32){
        cout << 8;
    }else if(n > 31.74 && n <= 37.03){
        cout << 7;
    }else if(n > 26.45 && n <= 31.74){
        cout << 6;
    }else if(n > 21.16 && n <= 26.45){
        cout << 5;
    }else if(n > 15.87 && n <= 21.16){
        cout << 4;
    }else if(n > 10.58 && n <= 15.87){
        cout << 3;
    }else if(n > 5.29 && n <= 10.58){
        cout << 2;
    }else if(n > 0 && n <= 5.29){
        cout << 1;
    }else{
        cout << 0;
    }

    return 0;
}