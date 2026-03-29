#include <bits/stdc++.h>

using namespace std;

int main (){
    int n; cin >> n;
    srand (time (0));
    for(int i = 1; i <= n; i++){
    int temp = 1 + rand() % 6 ;
    cout << temp << " " ;
    }
}