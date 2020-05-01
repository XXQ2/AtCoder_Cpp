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

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> b(n-1);
    forn(i, n-1) cin >> b[i];
    vector<int> a(n);
    a[0] = b[0];
    for1(i, n-2){
        a[i] = min(b[i-1], b[i]);
    }
    a[n-1] = b[n-2];
    int ans = 0;
    forn(i, n) ans += a[i];
    cout << ans << endl;
}