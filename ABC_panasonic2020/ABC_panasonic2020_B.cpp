#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll h, w;
    cin >> h >> w;

    ll ans = 0;
    if(h == 1 || w == 1){
        cout << 1 << endl;
        return 0;
    }else if(h%2 == 0){
        if(w%2 == 0){
            ans = (h*w) / 2;
        }else{
            ans = (h*(w-1) / 2) + ((h+1)/2);
        }
    }else{
        if(w%2 == 0){
            ans = ((h-1)*w / 2) + ((w+1)/2);
        }else{
            ans = ((h-1)*(w-1) / 2) + ((w+1)/2) + ((h+1)/2) - 1;
        }
    }
    cout << ans << endl;
}