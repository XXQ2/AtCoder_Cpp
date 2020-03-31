#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for1(i, n){
        int sum = 0, num = i;
        while(num != 0){
            sum += num % 10;
            num /= 10;
        }
        if(sum >= a && sum <= b) ans += i;
    }
    cout << ans << endl;
}