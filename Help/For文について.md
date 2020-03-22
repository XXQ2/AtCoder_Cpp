# break
```cpp
for (int i=0; i < A.size(); i++){
    for (int n=0; n < B.size(); n++){
        if(/* 条件 */){
            break; // このbreakはBのforを抜けるがAのforまでは抜けられない
        }
    }
}
```

## 多重ループ抜けの例
```cpp
bool finished = false;

for (int i=0; i < A.size(); i++) {
    for (int n=0; n < B.size(); n++) {
        if (/* 条件 */) {
            finished = true;
            break;
            // finishをtrueにしてからbreakすることで、
            //   内側のループを抜けたすぐ後に外側のループも抜けることができる
        }
    }

    if (finished) {
        break;  // (＊＊)
    }
}
```