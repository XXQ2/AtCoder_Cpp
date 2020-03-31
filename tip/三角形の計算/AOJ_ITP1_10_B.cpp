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
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/all/ITP1_10_B
 * 三角形の２辺 a, b とその間の角 C から、その三角形の面積 S、周の長さ L, a を底辺としたときの高さ h を求める
 * 
 * (入力)
 * a の長さ, b の長さ, Cの大きさ（度）（整数）が空白区切りで与えられます。
 * 
**/
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ld a, b, C;
    cin >> a >> b >> C;

    // 高さ
    ld radian = C * PI / 180.0;
    ld H = b * sin(radian);
    // 面積
    ld S = a * H / 2;
    // 周の長さ
    // ＝ａ＋ｂ＋√（ａの2乗＋ｂの2乗－2×ａ×ｂ×cosＣ）
    ld c = sqrtl(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(radian));
    ld L = a + b + c;

    cout << setprecision(10) << S << endl;
    cout << setprecision(10) << L << endl;
    cout << setprecision(10) << H << endl;
}