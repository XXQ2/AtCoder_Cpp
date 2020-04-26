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
    int n, k, r, s, p;
    string t;
    cin >> n >> k >> r >> s >> p >> t;
    vector<string> history;
    string a;
    ll ans = 0;
    forn(i, n){
        if(history.size() >= k){
            string w = history[history.size()-k];
            if(w == "r") a = "sp";
            else if(w == "s") a = "rp";
            else a = "rs";
        }else{
            a = "rsp";
        }

        if(t[i] == 'r'){
            if (a.find("p") != string::npos){
                ans += p;
                history.push_back("p");
            }else history.push_back("r");
        }else if(t[i] == 's'){
            if (a.find("r") != string::npos){
                ans += r;
                history.push_back("r");
            }else history.push_back("s");
        }else if(t[i] == 'p'){
            if (a.find("s") != string::npos){
                ans += s;
                history.push_back("s");
            }else history.push_back("p");
        }
    }
    cout << ans << endl;
}