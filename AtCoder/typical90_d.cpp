#include <iostream>
#include <vector>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    
    vector<vector<int> > A(H, vector<int>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> A[i][j];
        }
    }

    vector<int> row_sum(H, 0);
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            row_sum[i] += A[i][j];
        }
    }

    vector<int> col_sum(W, 0);
    for(int j = 0; j < W; j++){
        for(int i = 0; i < H; i++){
            col_sum[j] += A[i][j];
        }
    }

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << row_sum[i] + col_sum[j] - A[i][j];
            if(j < W-1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}