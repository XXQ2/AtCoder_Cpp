#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n, k, t=1, x;
    cin >> n >> k;

    while(true) {
        x = n /= k;
        if(x) ++t;
        else break;
    }
    cout << t << endl;
}