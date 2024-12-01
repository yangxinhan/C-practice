#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d;
    string m;
    for (int i = 0; i < n; i++) {
        cin >> d >> m;
        if (m == "Mar" && d >= 21 || m == "Apr" && d <= 20) {
            cout << "Aries";
        }else if(m == "Apr" && d >= 21 || m == "May" && d <= 20){
            cout << "Taurus";
        }else if(m == "May" && d >= 21 || m == "Jun" && d <= 21){
            cout << "Gemini";
        }else if(m == "Jun" && d >= 22 || m == "Jul" && d <= 22){
            cout << "Cancer";
        }else if(m == "Jul" && d >= 23 || m == "Aug" && d <= 22){
            cout << "Leo";
        }else if(m == "Aug" && d >= 23 || m == "Sep" && d <= 21){
            cout << "Virgo";
        }else if(m == "Sep" && d >= 22 || m == "Oct" && d <= 22){
            cout << "Libra";
        }else if(m == "Oct" && d >= 23 || m == "Nov" && d <= 22){
            cout << "Scorpio";
        }else if(m == "Nov" && d >= 23 || m == "Dec" && d <= 21){
            cout << "Sagittarius";
        }else if(m == "Dec" && d >= 22 || m == "Jan" && d <= 20){
            cout << "Capricorn";
        }else if(m == "Jan" && d >= 21 || m == "Feb" && d <= 19){
            cout << "Aquarius";
        }else if(m == "Feb" && d >= 20 || m == "Mar" && d <= 20){
            cout << "Pisces";
        }
        cout << endl;
    }
    return 0;
}