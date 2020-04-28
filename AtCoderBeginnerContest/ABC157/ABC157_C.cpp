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
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vp(m, pair<int, int>(0, 0));
    forn(i, m) cin >> vp[i].first >> vp[i].second;
    forn(i, 1000){
        int keta = 1;
        int l = i / 10;
        vector<int> d(1, i%10);
        while(l){
            keta++;
            d.push_back(l % 10);
            l /= 10;
        }
        reverse(all(d));
        if(keta != n) continue;
        bool ans = true;
        forn(i, m){
            if(d[vp[i].first - 1] != vp[i].second) ans = false;
        }
        if(ans){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}