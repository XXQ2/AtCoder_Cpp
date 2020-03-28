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
    int k, n;
    cin >> k >> n;

    int m = 0, index = 0, fi, pre = 0;
    vector<int> v;
    forn(i, n){
        int a; cin >> a;
        if(i == 0) {
            fi = a;
            pre = a;
            v.push_back(0);
        }else{
            int to = abs(pre - a);
            // cout << "a:" << a << ", fi:" << fi << ", pre:" << pre << ", to:" << to << endl;
            v.push_back(to);
            pre = a;

            if(m < to){
                // cout << "  update m.  to:" << to << ", index:" << i << endl;
                index = i;
                m = to;
            }
        }
    }
    // v.push_back(abs(k - pre) + fi);
    if(index != 1) v.push_back(abs(k - pre) + fi);
    int ans = 0;

    // cout << "v:[";
    // forn(i, v.size()) cout << v[i] << ", ";
    // cout << "]" << endl;
    
    if(index == 1){
        forn(i, index - 1) ans += v[i];
        // forn(i, index - 1) cout << "forn:" << v[i] << endl;
        fore(i, index, v.size() - 1) ans += v[i];
        // fore(i, index, v.size() - 1) cout << "fore:" << v[i] << endl;
    }else{
        forn(i, index) ans += v[i];
        // forn(i, index) cout << "forn:" << v[i] << endl;
        fore(i, index + 1, v.size() - 1) ans += v[i];
        // fore(i, index + 1, v.size() - 1) cout << "fore:" << v[i] << endl;
    }
    cout << ans << endl;
}