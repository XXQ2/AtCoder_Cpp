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
    string s;
    cin >> s;
    vector<string> t = {"dream", "dreamer", "erase", "eraser"};

    reverse(all(s));
    forn(i, t.size()) reverse(all(t[i]));
    
    bool isOK = true;
    while(isOK){
        isOK = false;
        forn(i, t.size()){
            if(s.size() < t[i].size()) continue;
            string ts = s.substr(0, t[i].size());
            if(ts == t[i]){
                isOK = true;
                s = s.substr(t[i].size());
            }
        }
    }
    if(s.size() == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

}