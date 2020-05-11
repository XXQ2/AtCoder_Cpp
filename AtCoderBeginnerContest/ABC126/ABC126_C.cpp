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

int f(int x, int k){
    int cnt = 0;
    while(x < k){
        x *= 2;
        cnt++;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k;
    cin>>n>>k;
    ld ans = 0.0;
    for1(i, n){
        int g = f(i, k);
        ld m = (g ? (double)1/pow(2, g) : 1);
        ld l = (double)1 / n;
        ans += (long double)l * m;
    }
    cout << setprecision(10) << ans << endl;
}