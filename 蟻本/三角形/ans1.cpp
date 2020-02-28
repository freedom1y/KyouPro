#include <bits/stdc++.h>

using namespace std;

const int MAX = 100;

int main() {
    int n, a, b, c;
    vector<int> vec(MAX);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> vec[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                a = vec[i];
                b = vec[j];
                c = vec[k];
                if (c >= a + b) continue;
                ans = max(ans, a + b + c);
            }
        }
    }
    cout << ans << endl;
}