#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1e5+10;
const ll INF = 1e9+1;
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}


int main() {
    int N; cin >> N;
    int h[MAX];
    for (int i = 0; i < N; ++i) cin >> h[i];

    ll dp[MAX];
    for (int i = 0; i < MAX; ++i) dp[i] = INF;
    dp[0] = 0;

    for (int i = 0; i < N; ++i) {
        chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }

    cout << dp[N - 1] << endl;
}
