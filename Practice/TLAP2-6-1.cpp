#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < i; j++) cout << ' ';
        for(int j = 1; j <= 4-i; j++){
            cout << "##";
        }
        cout << endl;
    }
}