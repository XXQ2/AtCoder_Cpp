数え上げについて

nCr
||
n * (n - r -1) / 2
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
 * 順列 nPr : n個から順序を意識してk個取り出す場合の数
 * 
 * 1. nPr = n! / (n - k)!
 * 
 * 
 * 組み合わせ nCr : n個から順序を意識しないでk個取り出す場合の数
 * 
 * 1. nCr = n! / r! * (n - r)!
 * 
 * 2. nCr = nPr / r!
 * 
**/
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // 関数を作成してみる
    // 調べてみるとなかなか難しそう（動的計画法などいくつかの実装パターンがあるっぽい）
}