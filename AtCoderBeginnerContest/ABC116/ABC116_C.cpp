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

void m(vector<int>& h, int& cnt){
    int mn = *min_element(all(h));
    forn(i, h.size()){
        int t = max(0, h[i]-mn);
        h[i] = t;
    }
    cnt += mn;
}

void f(vector<int> h, int& cnt){
    m(h, cnt);
    vector<int> v;
    forn(i, h.size()){
        if(h[i]) v.push_back(h[i]);
        else{
            if(v.size()) f(v, cnt);
            v = {};
        }
    }
    if(v.size()) f(v, cnt);
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> h(n);
    int mn = 100;
    forn(i, n) cin >> h[i];
    int cnt = 0;
    f(h, cnt);
    cout << cnt << endl;
}