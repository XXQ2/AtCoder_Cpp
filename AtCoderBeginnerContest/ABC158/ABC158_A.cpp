#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    
    if (s.find("A") != std::string::npos) {
        if (s.find("B") != std::string::npos) cout << "Yes" << endl;
        else  cout << "No" << endl;

    }else if (s.find("B") != std::string::npos) {
        if (s.find("A") != std::string::npos) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}