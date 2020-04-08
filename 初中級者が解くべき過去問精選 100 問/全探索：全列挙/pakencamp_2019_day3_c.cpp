#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;

/**
 * https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_c
 * 
 * カラオケ
**/
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m));
    forn(i, n) forn(j, m) cin >> v[i][j];

    ll ans = 0;
    forn(k, m - 1){
        fore(l, k + 1, m - 1){
            ll point = 0;
            forn(i, n) point += max(v[i][k], v[i][l]);
            ans = max(ans, point);
        }
    }
    cout << ans << endl;
}