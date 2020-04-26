#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    rep(i, n){
        if(a.at(i) % 2 == 1) continue;
        if(a.at(i) % 3 != 0 && a.at(i) % 5 != 0) {
            cout << "DENIED" << endl;
            return 0;
        }
    }
    cout << "APPROVED" << endl;
}