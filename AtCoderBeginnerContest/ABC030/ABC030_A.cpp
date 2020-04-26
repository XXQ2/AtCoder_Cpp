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

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // ３チーム比較の時
    // int a, b, c, d, e, f;
    // cin >> a >> b >> c >> d >> e >> f;

    if((b * c) == (a * d)) cout << "DRAW" << endl;
    else if((b * c) > (a * d)) cout << "TAKAHASHI" << endl;
    else cout << "AOKI" << endl;

    // こんな書き方でもOK
    // int x = (b * c) - (a * d);
    // if(x == 0) cout << "DRAW" << endl;
    // else if(x > 0) cout << "TAKAHASHI" << endl;
    // else cout << "AOKI" << endl;

    // ３チーム比較の時はこんな感じ（たぶん）
    // ll A = b * c * e;
    // ll B = d * a * e;
    // ll C = f * a * c;
    // if(A == B && B == C) cout << "draw" << endl;
    // else if(A >= B && A >= C) cout << "A" << endl;
    // else if(A <= B && B >= C) cout << "B" << endl;
    // else if(A <= C && B <= C) cout << "C" << endl;
}