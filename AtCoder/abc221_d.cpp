#include <iostream>
#include <vector>
#include <map>
#include <algorithm> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    map<int, int> event_deltas;
    for (int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;
        event_deltas[A]++;
        event_deltas[A + B]--;
    }

    vector<long long> days_with_k_players(N + 1, 0LL);
    long long current_active_players = 0;
    int last_event_day = 0;

    if (!event_deltas.empty()) {
        last_event_day = event_deltas.begin()->first;
    }


    for (auto const& [day, change] : event_deltas) {
        if (day > last_event_day) {
            if (current_active_players > 0 && current_active_players <= N) {
                days_with_k_players[static_cast<size_t>(current_active_players)] += (long long)(day - last_event_day);
            }
        }
        current_active_players += change;
        last_event_day = day;
    }
    
    for (int k = 1; k <= N; ++k) {
        cout << days_with_k_players[static_cast<size_t>(k)] << (k == N ? "" : " ");
    }
    cout << endl;

    return 0;
}
