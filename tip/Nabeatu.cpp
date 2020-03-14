#include <bits/stdc++.h>
#define rep(i, n) for(int i = 1; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, x;
    cin >> n;

    rep(i, n+1) {
        x = i;
        if(x % 3 == 0){
            cout << " " << i;
            continue;
        }

        while(x){
            if(x % 10 == 3) {
                cout << " " << i;
                break;
            }
            x /= 10;
        }
    }
    cout << endl;
}