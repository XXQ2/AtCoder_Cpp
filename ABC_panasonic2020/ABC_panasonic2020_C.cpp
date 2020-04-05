#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
	ll a, b, c;
	cin>>a>>b>>c;
	if(c-a-b<=0){
		cout<<"No"<<endl;
		return 0;
	}
	if(4*a*b<(c-a-b)*(c-a-b)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}