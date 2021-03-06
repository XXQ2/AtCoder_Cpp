#include <bits/stdc++.h>
#define forn(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define for1(i, n) for (long long i = 1; i <= (long long)(n); ++i)
#define fore(i, l, r) for (long long i = (long long)(l); i <= (long long)(r); ++i)
#define fordn(i, n) for (long long i = (long long)(n) - 1; i >= 0; --i)
#define ford1(i, n) for (long long i = (long long)(n); i >= 1; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;
using ld = long double;

/**
 * https://atcoder.jp/contests/abc018/tasks/abc018_1
 * 
 * 豆まき
 * 
 * 太郎君と次郎君と三郎君の 3 人の人が豆まきで対戦をした。
 * 得点が高いほうが上の順位である。
 * それぞれの得点が与えられるので、それぞれの順位を答えよ。
 * 
 * ※A, B, C は互いにことなる。
**/
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    vector<int> t = {a, b, c};
    sort(all(t));
    forn(i, 3){
        int cnt = 0;
        forn(j, 3) if(v[i] <= t[j]) cnt++;
        cout << cnt << endl;
    }
}