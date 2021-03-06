#include <iostream>
using namespace std;

/** 最大公約数 **/
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

/** 最大公倍数 **/
int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main(){
    int a = 9, b = 15;
    cout << a << "と" << b << "の最大公約数：" << gcd(a, b) << endl;
    cout << a << "と" << b << "の最大公倍数：" << lcm(a, b) << endl;

    // ３つ(複数)の場合、以下のように組み合わせると良い
    int c = 21;
    cout << gcd(gcd(a, b), c) << endl;
    cout << lcm(lcm(a, b), c) << endl;
}