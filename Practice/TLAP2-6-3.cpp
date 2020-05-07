#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j < i; j++) cout << ' ';
        for(int j = 1; j <= i; j++) cout << '#';
        for(int j = 1; j <= 12-4*(i-1); j++) cout << ' ';
        for(int j = 1; j <= i; j++) cout << '#';
        cout << endl;
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++) cout << ' ';
        for(int j = 0; j < 8; j++) cout << '#';
        cout << endl;
    }
    for(int i = 1; i <= 3; i++){
        for(int j = 3; j > i; j--) cout << ' ';
        for(int j = 3; j >= i; j--) cout << '#';
        for(int j = 1; j <= 4*i; j++) cout << ' ';
        for(int j = 3; j >= i; j--) cout << '#';
        cout << endl;
    }
}