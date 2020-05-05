#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5;

int main(){
    int N, M, a, b;
    cin >> N >> M;
    vector<int> h(MAX), flag(MAX, 0);
    for(int i = 0; i < N; i++) cin >> h[i];
    for (int i = 0; i < M; i++){
        cin >> a >> b;
        if(h[a-1] > h[b-1]) flag[b-1] = 1;
        else if(h[a-1] < h[b-1]) flag[a-1] = 1;
        else{
            flag[a-1] = 1;
            flag[b-1] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < N; i++){
        if(flag[i] == 0) count++;
    }
    cout << count << endl;
}