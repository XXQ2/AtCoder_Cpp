#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    set<int> set{a, b, c};

    if(set.size() == 2) cout << "Yes" << endl;
    else cout << "No" << endl;
}