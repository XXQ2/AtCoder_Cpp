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
    int a, b, c, d, e;
    vector<pair<int, int>> v;
    cin >> a >> b >> c >> d >> e;
    pair<int, int> pa = make_pair(a%10, a);
    v.push_back(pa);
    pair<int, int> pb = make_pair(b%10, b);
    v.push_back(pb);
    pair<int, int> pc = make_pair(c%10, c);
    v.push_back(pc);
    pair<int, int> pd = make_pair(d%10, d);
    v.push_back(pd);
    pair<int, int> pe = make_pair(e%10, e);
    v.push_back(pe);
    sort(all(v), greater<pair<int, int>>());
    int ans = 0, index = -1;
    forn(i, v.size()){
        if(v[i].first != 0) index = i;
    }
    forn(i, v.size()){
        if(i == index){
            ans += v[i].second;
        }
        else{
            if(v[i].first == 0) ans += v[i].second;
            else ans += v[i].second + (10 - v[i].first);
        }
    }
    cout << ans << endl;
}