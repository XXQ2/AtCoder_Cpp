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
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b && a > c && b > c) cout << 1 << endl << 2 << endl << 3 << endl;
    else if(a > b && a > c && c > b) cout << 1 << endl << 3 << endl << 2 << endl;
    else if(b > c && a > c) cout << 2 << endl << 1 << endl << 3 << endl;
    else if(b > c && c > a) cout << 3 << endl << 1 << endl << 2 << endl;
    else if(a > b) cout << 2 << endl << 3 << endl << 1 << endl;
    else cout << 3 << endl << 2 << endl << 1 << endl;
}