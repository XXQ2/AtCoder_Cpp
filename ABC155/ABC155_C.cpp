#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i, n) cin >> a.at(i);

    set<string> s;
    rep(i, n) s.insert(a.at(i));
    vector<string> vec(s.begin(), s.end());

    int size = vec.size();
    vector<pair<int, string>> pairs(size);
    rep(i, size) {
        int cnt = count(a.begin(), a.end(), vec.at(i));
        pairs.at(i) = make_pair(cnt, vec.at(i));
    }

    sort(pairs.begin(), pairs.end());

    int max = pairs.at(size-1).first;
    set<string> result;
    for(int i = size -1; i >= 0; i--) {
        if(pairs.at(i).first == max) result.insert(pairs.at(i).second);
        else break;
    }
    for (auto x : result) {
        cout << x << endl;
    }
    return 0;
}