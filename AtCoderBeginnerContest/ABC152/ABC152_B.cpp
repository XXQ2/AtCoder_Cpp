#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b;
    cin >> a >> b;

    if (a >= b) {
        rep(i, a) cout << b;
        cout << endl;
    }else{
        rep(i, b) cout << a;
        cout << endl;
    }
}