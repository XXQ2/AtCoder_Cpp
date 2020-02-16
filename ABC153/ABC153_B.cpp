#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(){
    int h, n;
    cin >> h >> n;
    int a;
    rep(i, n){
        int ai;
        cin >> ai;
        a += ai;
    }

    if(h <= a) cout << "Yes" << endl;
    else cout << "No" << endl;
}