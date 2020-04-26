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
    int m;
    cin >> m;
    string vv = "";

    if(m < 100) cout << "00" << endl;
    else if(m < 1000) cout << "0" << m / 100 << endl;
    else if(m <= 5000) cout << m / 100 << endl;
    else if(m <= 30000) cout << (m / 1000) + 50 << endl;
    else if(m <= 70000) cout << ((m / 1000) - 30) / 5 + 80 << endl;
    else cout << "89" << endl;
}