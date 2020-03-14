#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long double a, b, c;
    cin >> a >> b >> c;

    long double sqa, sqb, sqc;
    sqa = sqrtl(a);
    sqb = sqrtl(b);
    sqc = sqrtl(c);

    long double sqab = sqa + sqb;
    // cout << "sqa :" << sqa << endl;
    // cout << "sqb :" << sqb << endl;
    // cout << "sqc :" << sqc << endl;
    // cout << "sqab:" << sqab << endl;
    if(sqab < sqc) cout << "Yes" << endl;
    else cout << "No" << endl;
}