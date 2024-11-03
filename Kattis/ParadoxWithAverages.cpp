#include <iostream>
using namespace std;

int main() {
    int t;
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        int cs , e, count = 0;
        float an = 0, bn = 0;
        cin >> cs >> e;
        int a[cs], b[e];
        for (int j = 0; j < cs; j++) {
            int x;
            cin >> x;
            a[j] = x;
        }
        for (int j = 0; j < e; j++) {
            int x;
            cin >> x;
            b[j] = x;
        }

        for (int j = 0; j < cs; j++) {
            an += a[j];
        }

        for (int j = 0; j < e; j++) {
            bn += b[j];
        } 
        an /= cs;
        bn /= e;
        for (int j = 0; j < cs; j++) {
            if (a[j] < an && a[j] > bn) {
                count++;
            }
        }
        cout << count << endl;
    }
    

    return 0;
}