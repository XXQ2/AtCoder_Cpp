#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;

/**
 * https://atcoder.jp/contests/abc106/tasks/abc106_b
 * 
 * 105
 * 
 * 105 という数は, 非常に特殊な性質を持つ - 奇数なのに, 約数が 8 個もある.
 * さて, 1 以上 N 以下の奇数のうち, 正の約数を ちょうど 8 個持つようなものの個数を求めよ.
**/
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, ans = 0;
    cin >> n;

    // 105以下に約数を8個持つ整数はないため105からスタート.
    for(int i = 105; i <= n; i += 2){
        int cnt = 0;
        for1(j, i) if(i % j == 0) cnt++;
        if(cnt == 8) ans++;
    }

    cout << ans << endl;
}