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

int f(int x){
    if(x%2==0) return x/2;
    else return (3*x)+1;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int s;
    cin >> s;
    vector<int> v(1000000);
    int c = 0, cnt = 0;
    while(true){
        cnt++;
        if(c==0){
            c = s;
            v[c]++;
        }else{
            c = f(c);
            v[c]++;
        }
        if(v[c] == 2){
            cout << cnt << endl;
            return 0;
        }
    }
}