#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e3+1;

int main() {
    int n, m;
    long long p[MAX], pp[MAX*MAX], ans = 0, x = 0;
    cin >> n >> m;
    p[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    
    int count = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (m >= p[i] + p[j]) {
                pp[count++] = p[i] + p[j];
            }
        }
    }
    sort(pp, pp + count);

    for (int i = 0; i < count; i++) {
        if (pp[i] > m) break;
        x = pp[i] + pp[(upper_bound(pp, pp + count, m - pp[i]) - pp) - 1]; 
        ans = max(ans, x);
    }
    cout << ans << endl;
    return 0;
}