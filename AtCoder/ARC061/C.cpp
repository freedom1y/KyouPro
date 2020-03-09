#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string S;
ll ans = 0;
int n;

void dfs(int i, ll sum, ll k) {
    if (i == n) {
        ans += sum + k;
        return;
    }

    int s = S[i] - '0';
    dfs(i + 1, sum + k, s);
    dfs(i + 1, sum, 10 * k + s);
}

int main() {
    cin >> S;
    n = S.size();
    dfs(1, 0, S[0] - '0');
    cout << ans << endl;
}