#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(){
    int H, N, A, a;
    cin >> H >> N;

    rep(i, N){
        cin >> a;
        A+=a;
    }
    if(H <= A) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}