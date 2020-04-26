#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(){
    long n, k;
    cin >> n >> k;
    vector<long> h(n);
    rep(i, n) cin >> h.at(i);

    if(n <= k){
        cout << 0 << endl;
        return 0;
    }

    sort(h.begin(), h.end());

    long r=0;
    rep(i, (n-k)) r += h.at(i);

    cout << r << endl;
}