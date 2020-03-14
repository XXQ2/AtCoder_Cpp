#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;

    vector<int> x(n);
    rep(i, n) cin >> x[i];
    sort(x.begin(), x.end());

    int l = 0, r = x.size()-1, mid = (l+r) / 2;
    vector<int> data;
    while(l <= mid){
        int t = (x[l] + x[r]) / 2;
        cout << "l:" << x[l] << ", r:" << x[r] << ", t:" << t << endl;
        data.push_back(t);
        ++l;
        --r;
    }

    ll a = round(accumulate(data.begin(), data.end(), 0) / data.size());

    ll ans;
    for(int i : x) {
        ll s = pow((i - a), 2);
        cout << "p:" << i-a << ", s:" << s << endl;
        ans += s;
        cout << "ans:" << ans << endl;
    }
    cout << ans << endl;

}