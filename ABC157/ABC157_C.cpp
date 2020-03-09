#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> strVec;
    string reg = "...";
    if(n == 1){
        int i = 0;
        strVec = vector<string>(10);
        rep(i, 10) strVec.at(i) = i;
    }else if(n == 2) {
        int i = 10;
        strVec = vector<string>(90);
        rep(i, 100) strVec.at(i) = i;
    }else if(n == 3) {
        int i = 100;
        strVec = vector<string>(900);
        rep(i, 1000) {
            cout << i;
            strVec.at(i) = i;
        }
    }
    cout << endl;

    int s, c;
    rep(i, m) {
        cin >> s >> c;
        reg.at(s - 1) = '0' + c;
    }
    cout << reg << endl;

    regex regex(reg);
    smatch sm;
    for (auto it = strVec.begin(); it != strVec.end(); ++it){
        if (regex_match(*it, sm, regex)){
            cout << sm[0] << "\n";
            return 0;
        }
    }
    cout << "-1\n"; 
}