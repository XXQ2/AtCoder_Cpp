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

/** 最大公約数 **/
int gcd(int a, int b){
    if(a % b == 0) return b;
    else return gcd(b, a%b);
}

/** 最大公倍数 **/
ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}

ll f(ll x, int c, int d){
    ll ret = x;
    ret -= x/c;
    ret -= x/d;
    ret += x/lcm(c, d);
    return ret;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = f(b, c, d) - f(a-1, c, d);
    cout << ans << endl;
}