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

/** 最大公約数 **/
int gcd(int a, int b){
    if(a % b == 0) return b;
    else return gcd(b, a%b);
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, k;
    cin >> a >> b >> k;
    int cnt = 0;
    vector<int> ans;
    ford1(i, max(a, b)){
        if(a % i == 0 && b % i == 0) ans.push_back(i);
    }
    cout << ans[k-1] << endl;
}