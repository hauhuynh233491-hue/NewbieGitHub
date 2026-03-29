#include <iostream>

using namespace std;

bool canBangChanLe(int number) {
    int soChuSoChan = 0;
    int soChuSoLe = 0;

    while (number > 0) {
        int chuSo = number % 10;

        if (chuSo % 2 == 0) {
            soChuSoChan++;
        } else {
            soChuSoLe++;
        }

        number /= 10;
    }

    return soChuSoChan == soChuSoLe;
}

int main() {
    int n;
    cin >> n;

    int batDau = 1;
    for (int i = 1; i < n; i++) {
        batDau *= 10;
    }

    int ketThuc = batDau * 10 - 1;
    int soDaInTrenDong = 0;

    for (int number = batDau; number <= ketThuc; number++) {
        if (canBangChanLe(number)) {
            if (soDaInTrenDong > 0) {
                cout << ' ';
            }

            cout << number;
            soDaInTrenDong++;

            if (soDaInTrenDong == 10) {
                cout << '\n';
                soDaInTrenDong = 0;
            }
        }
    }

    if (soDaInTrenDong != 0) {
        cout << '\n';
    }

    return 0;
}
