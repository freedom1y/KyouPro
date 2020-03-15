#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1e5 + 10;
const int mod = 1e9 + 7;

int main() {
    int N, M; cin >> N >> M;
    vector<int> v(MAX, 1);
    for (int i = 0; i < M; ++i) {
        int a; cin >> a;
        v[a] = 0;
    }
    vector<ll> dp(MAX);
    dp[0] = 1;
    for (int i = 0; i < N; ++i) {
        if (v[i]) {
            if (v[i + 1]) (dp[i + 1] += dp[i]) %= mod;
            if (v[i + 2]) (dp[i + 2] += dp[i]) %= mod;
        }
    }

    cout << dp[N] << endl;
    return 0;
}