#include <iostream>

using namespace std;

int main(){
    int x =10;
    int *pointer;
    pointer = &x;

    cout << "địa chỉ của x:" << &x<< endl;
    cout << "địa chỉ của pointer = &x:" << pointer<< endl;
    cout << "địa chỉ của pointer:" << &pointer << endl;

    cout << "giá trị của pointer khi trỏ vào x:" << *pointer << endl;
    //đến địa chỉ của x sau đó mở cửa phòng ra thấy anh lính số 10
   
    //có thể bắt anh lính số 10 thay bằng anh lính số 1
    *pointer = 1;
    cout << "giá trị sau khi bắt lính 10:" << x;
    return 0;
}