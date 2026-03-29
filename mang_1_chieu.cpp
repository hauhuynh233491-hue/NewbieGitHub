#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int array[n];
    for(int &x : array ){
        cin >> x ;
    }
    for( int y :  array){
        cout << y << " ";
    }
    return 0;
}