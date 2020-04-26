#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n, a, b;
    cin >> n >> a >> b;

    if(n == 0 || a == 0 | (a == 0 && b == 0)){
        cout << 0 << endl;
        return 0;
    }

    ll ab = a + b;
    ll kiriage = (n + (ab - 1)) / ab;

    ll amari = (ab * kiriage) - n;

    ll ans = a * kiriage;

    if(b < amari) {
        ll j = amari - b;
        ans -= j;
    }
    cout << ans << endl;

}