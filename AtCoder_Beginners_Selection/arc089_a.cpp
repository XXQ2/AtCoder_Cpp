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
    int n; cin >> n;
    int currentT = 0, currentX = 0, currentY = 0;
    bool isOK = true;
    forn(i, n){
        int t, x, y;
        cin >> t >> x >> y;
        int diffT = t - currentT;
        int diffX = abs(x - currentX);
        int diffY = abs(y - currentY);
        int a = diffT - diffX - diffY;
        // cout << diffT << " " << diffX << " " << diffY << " " << a << endl;
        if(a < 0 || a % 2 != 0) isOK = false;
        currentT = t; currentX = x; currentY = y;
    }
    cout << (isOK ? "Yes" : "No") << endl;
}