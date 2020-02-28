#include <bits/stdc++.h>

using namespace std;

const int MAX = 100;

int main() {
    int n, a, b, c;
    vector<int> vec(MAX);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = lower_bound(vec.begin(), vec.end(), vec[i] + vec[j]) - vec.begin();

            ans = max(ans, vec[i] + vec[j] + vec[k - 1]);
        }
    }
    cout << ans << endl;
}