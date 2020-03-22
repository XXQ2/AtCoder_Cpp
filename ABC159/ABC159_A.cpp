#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;

ll facctorialMethod(ll k){
    ll sum = 0;
    for1(i, k) sum += i;
    return sum;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n >> m;
    ll nn=0, mm=0;
    if(n <= 1) nn = 0;
    else nn = facctorialMethod(n-1);

    if(m <= 1) mm = 0;
    else mm = facctorialMethod(m - 1);
    
    cout << nn + mm << endl;

}