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
    int n;
    cin >> n;
    vector<int> h(n);
    forn(i, n) cin >> h[i];
    bool ans = true, canDown = true;
    forn(i, n-1){
        if(!ans) break;
        int k = h[i] - h[i+1];
        if(k == 1){
            if(canDown) h[i] -= 1;
            else ans = false;
        }
        else if(k == 0){
            if(canDown) h[i] -= 1;
        }
        else if(k > 1) ans = false;
        canDown = h[i] - h[i+1] < 0 ? true : false;
    }
    cout << (ans ? "Yes" : "No") << endl;
}