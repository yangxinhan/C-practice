#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<vector<char> > grid(1000, vector<char>(1000, ' '));
    int curX = 500, curY = 500;
    int minX = 500, maxX = 500, minY = 500, maxY = 500;
    
    grid[curX][curY] = '*';
    
    string direction;
    while (cin >> direction) {
        if (direction == "up") {
            curX--;
        } else if (direction == "down") {
            curX++;
        } else if (direction == "l") {
            curY--;
        } else if (direction == "r") {
            curY++;
        }
        
        grid[curX][curY] = '*';
        

        minX = min(minX, curX);
        maxX = max(maxX, curX);
        minY = min(minY, curY);
        maxY = max(maxY, curY);
    }
    

    grid[500][500] = 'S';

    grid[curX][curY] = 'E';
    

    for (int i = minX-1; i <= maxX+1; i++) {
        for (int j = minY-1; j <= maxY+1; j++) {
            if (i == minX-1 || i == maxX+1 || j == minY-1 || j == maxY+1) {
                cout << '#';
            } else {
                cout << grid[i][j];
            }
        }
        cout << endl;
    }
    
    return 0;
}