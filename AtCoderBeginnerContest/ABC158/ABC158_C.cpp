#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b;
    cin >> a >> b;

    int ans = -1;
    for (int i=1; i < 1001; i++){
        int i8 = i * 0.08;
        int i10 = i * 0.1;
        if(i8 == a){
            if(i10 == b){
                ans = i;
                break;
            }
        }
    }
    cout << ans << endl;
}