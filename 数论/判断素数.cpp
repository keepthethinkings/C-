#include <bits/stdc++.h>
using namespace std;
bool prime(long long n) {
    if(n<2) {
        return 0;
    }
    if(n==2) {
        return 1;
    }
    for(int i = 2;i<=sqrt(n);++i) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}

/*
 * 使用方法：
 * 调用prime(你要判断的数)
*/
