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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    forn(i, n) cin >> v[i];
    sort(all(v));
    auto it = lower_bound(all(v), x);
    int i = it - v.begin();
    int mx = max(abs(x - v[i]), abs(x - v[i-1]));
    ++mx;
    bool w = true;
    do{
        w = false;
        int a = v[0]%--mx;
        forn(i, n){
            int t = v[i]%mx;
            if(a != t) w = true;
        }

    }while(w);
    cout << mx << endl;

}