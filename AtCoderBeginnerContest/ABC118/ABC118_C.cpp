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
    if(b==0) return a;
    return gcd(b, a%b);
}

int vgcd(vector<int> v){
    int ans = v[0];
    for1(i, v.size()-1){
        ans = gcd(ans, v[i]);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    forn(i, n) cin >> a[i];
    int ans = vgcd(a);
    cout << ans << endl;
}