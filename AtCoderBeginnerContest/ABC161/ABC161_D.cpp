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
 
int main() {
    int k;
    cin >> k;
    vector<ll> v;
    for1(i, 9) v.push_back(i);
    while(true){
        if(k <= v.size()){
            cout << v[k-1] << endl;
            return 0;
        }
        k -= v.size();
        vector<ll> d;
        swap(v, d);
        forn(i, d.size()){
            fore(j, -1, 1){
                int t = d[i]%10 + j;
                if(t >= 0 && t <= 9){
                    ll m = d[i]*10 + t;
                    v.push_back(m);
                }
            }
        }
    }
}