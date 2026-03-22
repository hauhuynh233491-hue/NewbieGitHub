#include <bits/stdc++.h>

using namespace std;

void thaydoi(int *x){ //"Tôi là một cái phễu chuyên hứng ĐỊA CHỈ{*x}"
    cout << "Địa chỉ của x là:" << &x << endl;
    *(x) += 10; // nhận địa chỉ của &x nên mở cửa ra lấy giá trị 10 của địa chỉ x trong main
    cout << "Giá trị của x là:" << *x << endl;
}

int main(){
    int x = 10;
    cout << "Địa chỉ của x là:" << &x << endl;
    thaydoi(&x); // phểu nhận địa chỉ thì phải cho địa chỉ, cho tham số = lỗi
    cout << " giá trị sau thay đổi" << x << endl;
    return 0;
}