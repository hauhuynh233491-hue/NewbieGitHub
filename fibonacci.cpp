#include <bits/stdc++.h>

using namespace std;

bool check(long long n){
    if(n == 0 || n == 1) return true;
    long long f1 = 1;
    long long f2 = 0;
    for(int i =2; i <= 92 ; i++){
        long long fn = f1 + f2;
        if(n== fn) return true;
        f2 = f1;
        f1 = fn;
    }
    return false;
}

int main (){
    long long n ; cin >> n;
    cout << check(n);
    return 0;    
}
