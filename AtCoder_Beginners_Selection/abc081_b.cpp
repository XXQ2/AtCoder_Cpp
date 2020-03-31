#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;

int solve(vector<int> a){
    bool isOK = true;
    forn(i, a.size()){
        if(a[i] % 2 != 0){
            isOK = false;
            break;
        }
        a[i] /= 2;
    }
    if(isOK) return 1 + solve(a);
    else return 0;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    forn(i, n) cin >> a[i];
    cout << solve(a) << endl;
}