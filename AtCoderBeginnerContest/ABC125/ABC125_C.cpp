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
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    forn(i, n) cin >> a[i];
    vector<int> l(n), r(n);
    forn(i, n-1) l[i+1] = gcd(l[i], a[i]);
    ford1(i, n-1) r[i-1] = gcd(r[i], a[i]);
    int ans = 1;
    forn(i, n) ans = max(ans, gcd(l[i], r[i]));
    cout << ans << endl;
}