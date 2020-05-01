#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;
using ld = long double;

int n;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    vector<int> x(n), y(n);
    forn(i, n) cin >> x[i] >> y[i];
    auto dist = [&](int i, int j){
        double dx = x[i] - x[j];
        double dy = y[i] - y[j];
        return sqrt(dx*dx + dy*dy);
    };
    vector<int> p(n);
    forn(i, n) p[i] = i;
    double len = 0;
    int cnt = 0;
    do {
        forn(i, n-1){
            len += dist(p[i], p[i+1]);
        }
        cnt++;
    } while(next_permutation(all(p)));
    double ans = len / cnt;
    cout << setprecision(10) << ans << endl;
}