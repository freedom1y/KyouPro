#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6;

int main() {
    int L, n, minT = 0, maxT = 0;
    vector<int> v(MAX);
    cin >> L >> n;
    for (int i = 0; i < n; i++) cin >> v[i];
    
    for (int i = 0; i < n; i++) {
        minT = max(minT, min(v[i], L - v[i]));
        maxT = max(maxT, max(v[i], L - v[i]));
    }
    cout << minT << " " << maxT << endl;
    return 0;
}