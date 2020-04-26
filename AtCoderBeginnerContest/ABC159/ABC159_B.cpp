#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;

bool isKaibun1(string str){
    bool rtn = true;
    string rs = str;
    reverse(all(rs));
    forn(i, str.size()-1/2){
        if(str[i] != rs[i]){
            rtn = false;
        }
    }
    return rtn;
}

bool isKaibun2(string str){
    bool rtn = true;
    string s = str.substr((str.size() + 3 - 1) / 2);
    string rs = s;
    reverse(all(rs));
    forn(i, s.size()/2){
        if(s[i] != rs[i]){
            rtn = false;
        }
    }
    return rtn;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;cin >> s;
    if(isKaibun1(s) && isKaibun2(s)) cout << "Yes" << endl;
    else cout << "No" << endl;

}