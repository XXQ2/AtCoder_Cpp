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
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    forn(i, m) cin >> b[i];
    vector<vector<int>> a(n, vector<int>(m));
    forn(i, n){
        forn(k, m){
            cin >> a[i][k];
        }
    }
    int ans = 0;
    forn(i, n){
        int t = 0;
        forn(k, m){
            t += a[i][k] * b[k];
        }
        t += c;
        if(t > 0) ans++;
    }
    cout << ans << endl;
}