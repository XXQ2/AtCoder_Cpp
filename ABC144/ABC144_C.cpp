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

bool IsPrime(int num){
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    // double sqrtNum = sqrt(num);
    for (int i = 3; i < num; i += 2){
        if (num % i == 0){
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    if(IsPrime(n)){
        cout << n - 1 << endl;
        return 0;
    }
    ll m = n, a = 0;
    fore(i, 2, n-1){
        if(IsPrime(i)){
            ll l=1, r=1001001001001;
            while(r - l > 1){
                ll mid = l + ((r - l)/2);
                if(i * mid <= n) l = mid;
                else r = mid;
            }
            a = i-1 + l-1;
            if(m > a) m = a;
            else break;
        }
    }
    cout << a << endl;
}