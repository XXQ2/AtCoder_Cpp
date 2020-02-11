#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(){
    long H;
    cin >> H;
    long hp = H;
    long count = 1;
    vector<long> n;

    while(hp >= 1){
        hp /= 2;
        n.push_back(count);
        count = count *2;
    }
    int result;
    rep(i, n.size()) result += n.at(i);

    cout << result << endl;
    return 0;
}