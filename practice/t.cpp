#include <iostream>
using namespace std;

int main(){
   	int n,m,x,y;
    
   	float a=0,b=0;
	cin >> n >> m >> x >> y;
	b = (n - m*x)/(y-x);
	a = m - b;
	if (a < 0 || b < 0) cout << "-1 -1";
	else if (a >= 0 || b >= 0) cout << a << " " << b;
 	return 0;
}