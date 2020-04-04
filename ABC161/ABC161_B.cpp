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

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ld n, m;
    cin >> n >> m;
    vector<ld> a(n);
    forn(i, n) cin >> a[i];
    ld all = accumulate(all(a), 0);
    ld cnt = 0;
    forn(i, n) if(a[i]*(4*m)/all >= 1) cnt++;
    cout << (cnt >= m? "Yes" : "No") << endl;
}