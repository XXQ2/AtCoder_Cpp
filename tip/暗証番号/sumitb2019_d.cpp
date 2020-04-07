#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;
using ld = long double;

/**
 * https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_d
 * 
 * Lucky PIN
 * 
 * AtCoder 社は、オフィスの入り口に 3 桁の暗証番号を設定することにしました。
 * AtCoder 社には N 桁のラッキーナンバー S があります。
 * 社長の高橋君は、S から N−3 桁を消して残りの 3 桁を左から読んだものを暗証番号として設定することにしました。
 * 
 * このとき、設定されうる暗証番号は何種類あるでしょうか？
 * 
 * ただし、ラッキーナンバーや暗証番号はいずれも 0 から始まっても良いものとします。
**/
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    forn(i, 1000){ // 000~999までのあり得る数字全て探索する
        string t;
        int x = i;
        forn(j, 3){
            // iが１の時tは"100", 10の時tは"010", 100の時tは"001"になる。
            t += '0' + x%10;
            x /= 10;
        }
        int ti = 0; // カーソル
        forn(k, n){
            if(s[k] == t[ti]) {
                // tiのインクリメント & ti(カーソル)が４文字目を見に行ったら終了。
                if(++ti == 3) break;
            }
        }
        if(ti == 3) ans++;
            
    }
    cout << ans << endl;
}

AtCoder 社は、オフィスの入り口に 3 桁の暗証番号を設定することにしました。

AtCoder 社には N 桁のラッキーナンバー S があります。
社長の高橋君は、S から N−3 桁を消して残りの 3 桁を左から読んだものを暗証番号として設定することにしました。

このとき、設定されうる暗証番号は何種類あるでしょうか？

ただし、ラッキーナンバーや暗証番号はいずれも 0 から始まっても良いものとします。