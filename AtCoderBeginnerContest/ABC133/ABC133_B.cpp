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

bool is_int32( double x ){
  return static_cast<std::int32_t>(x)==x;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, d;
    cin >> n >> d;
    vector<vector<int>> vv(n, vector<int> (d));
    forn(i, n){
        forn(j, d){
            cin >> vv[i][j];
        }
    }
    int cnt = 0;
    forn(i, n){
        fore(j, i+1, n-1){
            double t = 0.0;
            forn(k, d){
                double tmp = (double)vv[i][k] - vv[j][k];
                t += (double)tmp*tmp;
            }
            double a = sqrt(t);
            if(is_int32(a)) cnt++;
        }
    }
    cout << cnt << endl;
}