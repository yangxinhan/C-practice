#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ll long long

int N_global;
int L_target_global;
vector<int> gene_lengths_global;
vector<map<ll, ll>> memo;

ll count_ways(int current_L, ll counts_mask) {
    if (current_L == L_target_global) {
        return 1;
    }

    if (memo[current_L].count(counts_mask)) {
        return memo[current_L][counts_mask];
    }

    ll total_ways = 0;

    for (int i = 0; i < N_global; ++i) {
        int gene_len = gene_lengths_global[i];
        
        ll remaining_count_for_gene_i = (counts_mask >> (i * 4)) & 0xF;

        if (remaining_count_for_gene_i > 0 && current_L + gene_len <= L_target_global) {
            ll next_counts_mask = counts_mask - (1LL << (i * 4));
            total_ways += count_ways(current_L + gene_len, next_counts_mask);
        }
    }

    return memo[current_L][counts_mask] = total_ways;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N_global >> L_target_global;

    gene_lengths_global.resize(N_global);
    memo.resize(L_target_global + 1);

    ll initial_counts_mask = 0;
    for (int i = 0; i < N_global; ++i) {
        int len, count;
        cin >> len >> count;
        gene_lengths_global[i] = len;
        initial_counts_mask |= ((ll)count << (i * 4));
    }

    ll result = count_ways(0, initial_counts_mask);
    cout << result << endl;

    return 0;
}
