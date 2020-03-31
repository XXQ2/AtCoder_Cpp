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
 * https://atcoder.jp/contests/abc160/tasks/abc160_c
 * C - Traveling Salesman around Lake
 * 
 * 1周Kメートルの円形の湖があり、その周りに N 軒の家があります。
 * i 番目の家は、湖の北端から時計回りに Ai メートルの位置にあります。
 * 家の間の移動は、湖の周りに沿ってのみ行えます。
 * いずれかの家から出発して N 軒すべての家を訪ねるための最短移動距離を求めてください。
 * 
 * ○解法
 * k 引く「一番長い移動距離」が最短移動距離となる。
 * 
 * S      A1        A2         A3  K
 * |------o---------o----------o---|
 *             ⬇︎
 *        A1        A2         A3  K     k+A1
 *        o---------o----------o---|------o
 *        |~~~~L1~~~|~~~~L2~~~~|~~~~L3~~~~|
 * 
 * 例えば k を 20, L1~L3までをそれぞれ 5, 10, 5だとすると
 * 20 - 10 で最短移動距離は10 となる。
 * 
**/
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int k, n; cin >> k >> n;
    vector<int> v(n);
    forn(i, n) cin >> v[i];
    v.push_back(k + v[0]);
    int l = 0;
    forn(i, v.size()) l = max(l, v[i+1] - v[i]);
    
    cout << k - l << endl;
}