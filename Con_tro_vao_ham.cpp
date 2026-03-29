#include <bits/stdc++.h>

using namespace std;

void thaydoi(int &x){
    cout << "Địa chỉ của x là:" << &x << endl;
    x += 10;
    cout << "Giá trị của x là:" << x << endl;
}

int main(){
    int x = 10;
    cout << "Địa chỉ của x là:" << &x << endl;
    thaydoi(x); // truyền tham trị chứ không phải tham chiếu nghĩa là chuyền giá trị 10 từ x của main thành x của thaydoi bằng chứng là thay đổi địa chỉ cảu x
    cout << " giá trị sau thay đổi" << x << endl; // cách khắc phục thêm & vào int x, void thaydoi(int &x)
    return 0;
}