# Mapについて

## パターン１
### N個の文字列があり、その中から文字列とその文字列の出現回数を出力する。
```cpp
int main() {
  vector<string> a = {"abc", "ghi", "abc", "def", "ghi"};
  map<string, int> mp;
  for(int i = 0; i < a.size(); i++){
    mp[a.at(i)]++; // 追加時に辞書順ソート + 出現回数をインクリメント
  }
  for(auto p : mp){ // at()での参照はできないのでこのような書き方となる。
    cout << "p.first: " << p.first << ", p.second: " << p.second << endl;
  }
}
```
### 出力
```cpp
p.first: abc, p.second: 2
p.first: def, p.second: 1
p.first: ghi, p.second: 2
```


## パターン2
### 要素の追加と同時に、何回目の追加であるか出力する
```cpp
int main() {
  vector<string> a = {"abc", "ghi", "abc", "def", "ghi"};
  map<string, int> mp;
  for(int i = 0; i < a.size(); i++){
    cout << a.at(i) << " : " << ++mp[a.at(i)] << endl;
  }
}
```
### 出力
```cpp
abc : 1
ghi : 1
abc : 2
def : 1
ghi : 2
```

## パターン3
### 逆に引くこともできる
```cpp
int main() {
  vector<string> a = {"abc", "ghi", "abc", "def", "ghi"};
  map<string, int> mp;
  for(int i = 0; i < a.size(); i++){
    cout << a.at(i) << " : " << --mp[a.at(i)] << endl;
  }
}
```
### 出力
```cpp
abc : -1
ghi : -1
abc : -2
def : -1
ghi : -2
```