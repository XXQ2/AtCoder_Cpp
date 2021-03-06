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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> vx(n), vy(m);
    int maxx = -10000, miny = 10000;
    forn(i, n){
        int l;cin >> l;
        maxx = max(maxx, l);
    }
    forn(i, m){
        int l;cin >> l;
        miny = min(miny, l);
    }
    int ans = miny - maxx;
    if(ans >= 1 && x < miny && maxx < y) cout << "No War" << endl;
    else cout << "War" << endl;
}