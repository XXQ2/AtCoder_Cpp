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
    int a = 0, m = 0;
    int k = n % 10;
    while(n){
        int l = n % 10;
        if(k == l){
            a++;
        }else{
            m = max(m, a);
            a = 1;
        }
        k = l;
        n /= 10;
    }
    m = max(m, a);
    if(m >= 3) cout << "Yes" << endl;
    else cout << "No" << endl;
}