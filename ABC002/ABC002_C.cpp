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
    vector<pair<ld, ld>> P(3);
    forn(i, 3) cin >> P[i].first >> P[i].second;
    ld diffX = (P[0].first >= 0 ? 0 - P[0].first : abs(P[0].first));
    ld diffY = (P[0].second >= 0 ? 0 - P[0].second : abs(P[0].second));

    forn(i, 3){
        P[i].first = abs(P[i].first + diffX);
        P[i].second = abs(P[i].second + diffY);
    }
    ld ans = abs(P[1].first*P[2].second - P[1].second*P[2].first) / 2.0;
    cout << setprecision(5) << ans << endl;
}