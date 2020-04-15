#include <iostream>
using namespace std;

/** 最大公約数 **/
int gcd(int a, int b){
    if(a % b == 0) return b;
    else return gcd(b, a%b);
}

/** 最大公倍数 **/
int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main(){
    int a = 9, b = 15;
    cout << a << "と" << b << "の最大公約数：" << gcd(a, b) << endl;
    cout << a << "と" << b << "の最大公倍数：" << lcm(a, b) << endl;
}