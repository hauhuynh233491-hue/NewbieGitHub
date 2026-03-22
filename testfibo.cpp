#include <bits/stdc++.h>

using namespace std;

long long fibo( long n ){
    if(n == 0 || n == 1) return n;
    return fibo(n - 1) + fibo(n - 2);

}

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(fibo(i) <= n){
            cout << fibo(i) << " ";
        }
            
    }
    return 0;
}