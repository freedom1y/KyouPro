#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <=  3-i; j++) cout << ' ';
        cout << '#';
        for(int j = 1; j < i; j++) cout << ' ';
        for(int j = 0; j < 2; j++){
            if(i == 1) cout << ' ';
            else cout << '#';
        }
        for(int j = 1; j < i; j++) cout << ' ';
        cout << '#' << endl;
    }
    for(int i = 1; i <= 2; i++){
        cout << '#';
        cout << ' ';
        cout << '#';
        for(int j = 0; j < 2; j++) cout << ' ';
        cout << '#';
        cout << ' ';
        cout << '#' << endl;
    }
    for(int i = 0; i < 3; i++){
        cout << '#';
        for(int j = 1; j < 3-i; j++) cout << ' ';
        cout << '#';
        for(int j = 1; j <= 2*i; j++) cout << ' ';
        cout << '#';
        for(int j = 1; j < 3-i; j++) cout << ' ';
        cout << '#' << endl;
    }
}