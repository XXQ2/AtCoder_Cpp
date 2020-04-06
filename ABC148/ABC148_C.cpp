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

ll gcd(ll a, ll b){
   if (a%b == 0) return b;
   else return gcd(b, a%b) ;
}

ll lcm(ll a, ll b){
   return a * b / gcd(a, b);
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a, b);
    ll l = lcm(a, b);
    cout << g << endl;
    cout << l << endl;
}