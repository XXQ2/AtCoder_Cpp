#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p.at(i);

    int min = numeric_limits<int>::max();
    int count = 0;

    rep (i, n) {
        if(p.at(i) <= min) {
            count++;
            min = p.at(i);
        }
    }
    cout << count << endl;
}