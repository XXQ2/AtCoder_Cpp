#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll x; cin >> x;

    int y500 = 0;
    int y5 = 0;
    y500 = x / 500;
    x %= 500;
    y5 = x / 5;

    cout << y500*1000 + y5*5 << endl;

}