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
    int n, q;
    cin>>n>>q;
    string s;
    vector<int> vs(n);
    cin>>s;
    int c = 0;
    forn(i, n-1){
        // i番目の時点で何個"AC"が出てくるのかを保持しておく
        if(s[i] == 'A' && s[i+1] == 'C') c++;
        vs[i] = c;
    }
    forn(i, q){
        int l, r;
        cin>>l>>r;
        // r-1-1(*1)個目までに出てくる"AC"の数からl-1個目までに出てくる"AC"の数を引く
        // *1: Aで区切られることを想定して-1する（その後"C"が続くとしても"A"の時点でインクリメントしているため）
        int cnt = vs[r-2] - vs[l-1];
        // lに関してはrのように-2ができない(範囲外参照)ので最後に確認する
        if(s[l-1]=='A'&&s[l]=='C') cnt += 1;
        cout << cnt << endl;
    }
}