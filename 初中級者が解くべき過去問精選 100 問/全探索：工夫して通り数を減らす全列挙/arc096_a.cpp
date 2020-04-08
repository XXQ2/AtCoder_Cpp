#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    vector<ll> v(4);
    v[0] = a * x + b * y;

    int amariY = 0;
    if(x < y) amariY = y - x;
    v[1] = c * x * 2 + b * amariY;

    int amariX = 0;
    if(y < x) amariX = x - y;
    v[2] = a * amariX + c * y * 2;

    int t = max(x, y);
    v[3] = c * t * 2;

    cout << *min_element(all(v)) << endl;
}