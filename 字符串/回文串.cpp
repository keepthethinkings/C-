#include <bits/stdc++.h>
using namespace std;
bool huiwen(string a) {
    string b = " ";
    int k = 0;
    for(int i = a.length()-1;i>=0;--i) {
        b[k] = a[i];
        k+=1;
    }
    b[k+1] = '\0';
    if(prime(atoi(b.c_str()))==1) {
        return true;
    }
    return false;
}
