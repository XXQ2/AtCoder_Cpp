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
 * https://atcoder.jp/contests/abc122/tasks/abc122_b
 * 
 * ATCoder
 * 
 * 英大文字からなる文字列 S が与えられます。S の部分文字列 (注記を参照) であるような最も長い ACGT 文字列 の長さを求めてください。
 * ここで、ACGT 文字列とは A, C, G, T 以外の文字を含まない文字列です。
**/
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int ans = 0, crr = 0;
    forn(i, s.size()){
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'T' || s[i] == 'G') crr++;
        else crr = 0;
        ans = max(ans, crr);
    }
    cout << ans << endl;
}