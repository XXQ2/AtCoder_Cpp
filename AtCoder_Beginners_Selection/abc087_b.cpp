#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int c500, c100, c50, x;
    cin >> c500 >> c100 >> c50 >> x;

    int ans = 0;
    forn(i, c500 + 1){
        forn(j, c100 + 1){
            int y = x - (i*500 + j*100);
            if(y >= 0 && y/50 <= c50) ans++;
        }
    }
    cout << ans << endl;
}