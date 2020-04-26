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
    int k, n; cin >> k >> n;
    vector<int> v(n);
    forn(i, n) cin >> v[i];
    v.push_back(k + v[0]);
    int l = 0;
    forn(i, v.size()) l = max(l, v[i+1] - v[i]);
    
    cout << k - l << endl;
}