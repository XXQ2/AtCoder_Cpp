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

ld f(vector<int> x){
    ld ret = (double)(x[0] + x[1]) / 2;
    fore(i, 2, x.size()-1){
        ret = (double)(ret + x[i]) / 2;
    }
    return ret;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    forn(i, n) cin >> v[i];
    sort(all(v));
    ld ans = f(v);
    cout << ans << endl;
}