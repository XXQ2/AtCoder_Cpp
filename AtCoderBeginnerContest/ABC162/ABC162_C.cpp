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

int gcd(int a, int b){
    if(a % b == 0) return b;
    else return gcd(b, a%b);
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int k;
    cin >> k;
    ll ans = 0;
    for1(i, k){
        for1(j, k){
            for1(l, k){
                int s = gcd(i, j);
                int t = gcd(s, l);
                ans += t;
            }
        }
    }
    cout << ans << endl;
}