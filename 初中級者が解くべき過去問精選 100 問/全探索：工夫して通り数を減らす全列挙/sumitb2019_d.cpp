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
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    forn(i, 1000){
        string t;
        int x = i;
        forn(j, 3){
            t += '0' + x%10;
            x /= 10;
        }
        int ti = 0;
        forn(k, n){
            if(s[k] == t[ti]) {
                if(++ti == 3) break;
            }
        }
        if(ti == 3) ans++;
            
    }
    cout << ans << endl;
}