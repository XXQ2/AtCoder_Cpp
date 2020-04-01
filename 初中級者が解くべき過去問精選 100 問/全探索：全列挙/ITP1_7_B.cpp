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
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B&lang=ja
 * 
 * How many ways?
 * 
 * 1 から n までの数の中から、重複無しで３つの数を選びそれらの合計が x となる組み合わせの数を求めるプログラムを作成して下さい。
**/
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while(true){
        int n = 0, x = 0, ans = 0;
        cin >> n >> x;
        if(n == 0 && x == 0) break;
        for1(i, n-2){
            fore(j, i+1, n-1){
                int diff = x - i - j;
                if(diff >= j + 1 && diff <= n)　ans++;
            }
        }
        cout << ans << endl;
    }
}