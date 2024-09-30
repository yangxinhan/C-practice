#include<iostream>
using namespace std;

int main() {
	int t, n;
  	cin >> t;
  	for(int i = 0; i < t; i++){
  		cin >> n;
  		for(int i = 1, x = 1; i <= n; i++, x += 2){
  			for(int j = 0; j< n - i; j++){
                cout << " ";
            }
			for(int j = 0; j < x; j++){
                cout << "*";
            }
			cout << '\n';
		}

		for(int i = n - 1, x = 2 * n -3; i >0 ; i--, x -= 2){
  			for(int j = 0; j < n - i; j++){
                cout << " ";
            }
			for(int j = 0; j < x; j++){
                cout << "*";
            } 
			cout << '\n';
		  }
		  cout << '\n';
    }

    return 0;
}