#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k, m;
    cin >> n >> k >> m;

    int sum = 0;
    rep(i, n-1) {
        int j;
        cin >> j;
        sum += j;
    }

    int x = (m * n) - sum;

    if(x > k) cout << -1 << endl;
    else cout << max(x, 0) << endl;
}