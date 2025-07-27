#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K;
    cin >> N >> M >> K;

    set<string> a;

    for (int i = 0; i < N; ++i) {
        string b;
        cin >> b;
        a.insert(b);
    }

    cout << a.size() << endl;

    return 0;
}
