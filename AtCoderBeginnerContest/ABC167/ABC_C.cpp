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
    int n, m, x;
    cin >> n >> m >> x;
    pair<int, vector<int>> p;
    vector<int> tmp(m);
    forn(i, n){
        int c; cin >> c;
        vector<int> v(m);
        forn(i, m){
            int t; cin >> t;
            v[i] = t;
            tmp[i] += t;
        }
    }
    forn(i, m){
        if(tmp[i] < x){
            cout << "-1" << endl;
            return 0;
        }
    }
    
}