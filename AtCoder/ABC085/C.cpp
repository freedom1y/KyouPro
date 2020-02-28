#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, z;
    cin >> n >> a;
    
    for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n - x; y++) {
            z = n - (x + y);

            if (a == x*10000 + y*5000 + z*1000 && z >= 0) {
                cout << x << " " << y  << " " << z << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}