#include <bits/stdc++.h>
using namespace std;

int main() {
  	string S;
    cin >> S;
    int ans , A, B, C, D;
  	A = S[0] - '0';
  	B = S[1] - '0';
  	C = S[2] - '0';
  	D = S[3] - '0';
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                ans = A;
                ans = (i ? ans + B : ans - B);
                ans = (j ? ans + C : ans - C);
                ans = (k ? ans + D : ans - D);

                if (ans == 7) {
                    cout << A << (i ? "+" : "-");
                    cout << B << (j ? "+" : "-");
                    cout << C << (k ? "+" : "-");
                    cout << D << "=7" << endl;
                  return 0;
                }
            }
        }
    }
}