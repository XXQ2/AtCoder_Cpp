#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    ll q;
    cin >> s >> q;

    rep(i, q) {
        int t;
        cin >> t;

        if(t == 1){
            char tmp = s.at(0);
            s.at(0) = s.at(s.size()-1);
            s.at(s.size()-1) = tmp;
        }else{
            ll f;
            string c;
            cin >> f >> c;

            if(f == 1){
                s.insert(0, c);
            }else{
                s += c;
            }
        }
        cout << i << "times: " << s << endl;
    }
    cout << s << endl;
}