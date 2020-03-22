#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

/**
 * AtCoder
 * パナソニックプログラミングコンテスト2020 
 * C問題
 * 
 * √a + √b < √c ですか？
 * 
**/
int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll x = c-a-b;
  if (x < 0) {
    cout << "No" << endl;
    return 0;
  }
  if (4*a*b < x*x) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
