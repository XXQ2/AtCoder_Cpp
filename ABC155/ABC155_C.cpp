#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i, n) cin >> a.at(i);

    map<string, int> mp;
    int mx = 0;
    rep(i, n){
        mx = max(mx, ++mp[a.at(i)]);
    }

    for(auto p : mp){
        if(p.second == mx){
            cout << p.first << endl;
        }
    }
}