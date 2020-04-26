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
    string s;
    cin >> s;
    int y, m, d;
    y = stoi(s.substr(0, 4));
    m = stoi(s.substr(5, 2));
    d = stoi(s.substr(8));
    bool ans = false;
    if(y == 2019){
        if(m == 4){
            if(d > 30) ans = true;
        }else if(m > 4){
            ans = true;
        }
    }else if(y > 2019){
        ans = true;
    }
    cout << (ans ? "TBD" : "Heisei") << endl;
}