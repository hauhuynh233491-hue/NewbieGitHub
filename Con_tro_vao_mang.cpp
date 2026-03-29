#include <bits/stdc++.h>

using namespace std;

int main(){
    int array[]= {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        cout << array[i] << "địa chỉ của mãng là:" << &(array[i]) << endl;
        cout << *(array + i) << "địa chỉ của mảng là:" << array + i << endl;
        // array + 0 <=> (&array[0])
    }
    return 0;
}