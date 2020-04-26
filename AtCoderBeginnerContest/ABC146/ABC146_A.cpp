#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;
using ld = long double;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    if(s == "SUN") cout << 7 << endl;
    if(s == "MON") cout << 6 << endl;
    if(s == "TUE") cout << 5 << endl;
    if(s == "WED") cout << 4 << endl;
    if(s == "THU") cout << 3 << endl;
    if(s == "FRI") cout << 2 << endl;
    if(s == "SAT") cout << 1 << endl;
}