#include <bits/stdc++.h>

using namespace std;

const int MAX = 100;

int main() {
    int n;
    vector<int> x(MAX), y(MAX);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i]; 
    
    double ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = max(ans, sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])));
        }
    }
    cout << ans << endl;
}