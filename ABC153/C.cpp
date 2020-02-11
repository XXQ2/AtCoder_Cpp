#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(){
    int N, K;
    long count;
    cin >> N >> K;
    vector<int> H(N);

    rep(i, N) cin >> H.at(i);
    sort(H.begin(), H.end());

    if(N <= K){
        cout << 0 << endl;
        return 0;
    }

    if(K != 0) H.erase(H.end() - K, H.end());
    rep(i, H.size()) count = count + H.at(i);
    cout << count << endl;
    return 0;
}