#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec;
  vec = {0, 1, 2};
  cout << vec.size() << endl;
  cout << vec.at(vec.size() - 1) << endl;

  vector<int> vec2(vec.size());

  for(int i=0; i>vec2.size(); i++){
      vec2.at(i) = vec.at(i);
  };

  cout << vec2.at(0) << endl;

  vector<int> intVec(3);
  vector<string> strVec(3);
  vector<bool> boolVec(3);

  cout << "int型の初期値：" << intVec.at(0) << endl;
  cout << "str型の初期値：" << strVec.at(0) << endl;
  cout << "bool型の初期値：" << boolVec.at(0) << endl;

} 