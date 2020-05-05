#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, A, B;
    cin >> X;
    for (int a = -1000; a < 1000; a++){
        for (int b = -1000; b < 1000; b++){
            if(pow(a, 5) - pow(b, 5) == X){
                A = a, B = b;
                break;
            }
        }
    }
    cout << A << " " << B << endl; 
}