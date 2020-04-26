#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n >> m;

    vector<int> ac(n), pena(n);
    rep(i, m) {
        ll p;
        string s;
        cin >> p >> s;
        /* 問題番号pは[1<=p<=N]なのでindex参照のため0始まりにする */
        --p;
        if(ac[p]) continue; // p番目の問題がすでにACされていたら次の処理へ
        if(s == "AC") {
            // "AC"だった場合、p番目の配列に1を代入する
            // これにより1度ACした問題は無視されるようになる
            ac[p] = 1;
        }else{
            pena[p]++; // "WA"だった場合ペナルティを加算
        }
    }
    int AC = 0, PENA = 0;
    rep(i, n) {
        AC += ac[i];
        if(ac[i]) PENA += pena[i];
    }

    printf("%d %d\n", AC, PENA);
    return 0;
}