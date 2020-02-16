#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i < a.size(); i++){
        cin >> a.at(i);
    }
    
    for (int i=0; i < a.size(); i++){
        if(a.at(i) % 2 == 0){
            if(a.at(i) % 3 != 0 && a.at(i) % 5 != 0){
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }
    
    cout << "APPROVED" << endl;
}