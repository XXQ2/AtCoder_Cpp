#include <bits/stdc++.h>
#define forn(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define for1(i, n) for (long long i = 1; i <= (long long)(n); ++i)
#define fore(i, l, r) for (long long i = (long long)(l); i <= (long long)(r); ++i)
#define fordn(i, n) for (long long i = (long long)(n) - 1; i >= 0; --i)
#define ford1(i, n) for (long long i = (long long)(n); i >= 1; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;
using ld = long double;

int keta(int c){
    int ans = 0;
    while(c){
        ans++;
        c /= 10;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll a, b, x;
    cin >> a >> b >> x;
    ll l = 0, r = 1000000001;
    while((r - l) > 1){
        ll m = (r + l) / 2;
        ll o = a * m + b * keta(m);
        if(x >= o) l = m;
        else r = m;
    }
    cout << l << endl;
}