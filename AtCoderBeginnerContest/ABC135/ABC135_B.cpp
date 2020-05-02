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
    int n;
    cin >> n;
    vector<int> p(n);
    vector<pair<int, int>> vp;
    forn(i, n) cin >> p[i];
    forn(i, n){
        int pi = p[i];
        if(i+1 != pi){
            pair<int, int> p = make_pair(i+1, pi);
            vp.push_back(p);
        }
    }
    bool ans = false;
    if(vp.size() == 0) ans = true;
    else if(vp.size() == 2){
        if(vp[0].first == vp[1].second && vp[1].first == vp[0].second) ans = true;
    }
    cout << (ans ? "YES" : "NO") << endl;
}