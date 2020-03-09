#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    vector<int> data(9);
    rep(i, 9) cin >> data.at(i);

    int n, b;
    cin >> n;
    set<int> set;

    rep(i, n) {
        cin >> b;
        auto iter = find( data.begin(), data.end(), b);
        size_t index = distance( data.begin(), iter );

        if(index == data.size()) continue;

        set.insert(index);
    }
    bool isBingo = false;

    if(set.count(0) != 0 && set.count(1) != 0 && set.count(2) != 0){
        isBingo = true;
    }else if(set.count(0) != 0 && set.count(4) != 0 && set.count(8) != 0){
        isBingo = true;
    }else if(set.count(0) != 0 && set.count(3) != 0 && set.count(6) != 0){
        isBingo = true;
    }else if(set.count(1) != 0 && set.count(4) != 0 && set.count(7) != 0){
        isBingo = true;
    }else if(set.count(2) != 0 && set.count(4) != 0 && set.count(6) != 0){
        isBingo = true;
    }else if(set.count(2) != 0 && set.count(5) != 0 && set.count(8) != 0){
        isBingo = true;
    }else if(set.count(3) != 0 && set.count(4) != 0 && set.count(5) != 0){
        isBingo = true;
    }else if(set.count(6) != 0 && set.count(7) != 0 && set.count(8) != 0){
        isBingo = true;
    }

    if(isBingo) cout << "Yes" << endl;
    else cout << "No" << endl;
}