#include "bits/stdc++.h"
using namespace std;

int main()
{
    int x = 1;
    for (int i = 0; i < 7; i++){
        if(i < 4){
            for (int j = 1; j <= x; j++){
                cout << "#";
            }
        }else{
            for (int j = 1; j <= 8-x; j++){
                cout << "#";
            }            
        }
        x++;
        cout << endl;
    }
}
