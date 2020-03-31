#include <bits/stdc++.h>
using namespace std;

/**
 * AtCoder ABC159 C問題
 * 正の整数 L が与えられます。 縦、横、高さの長さ (それぞれ、整数でなくてもかまいません) の合計が L の直方体としてありうる体積の最大値を求めてください。
 * **/
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    double L;
    cin >> L;
    cout << setprecision(10) << (L/3.0)*(L/3.0)*(L/3.0) << endl;
}
