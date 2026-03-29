#include <bits/stdc++.h>

using namespace std;

bool laSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool coInSo = false;

        for (int i = 2; i * i <= n; i++) {
            if (laSoNguyenTo(i)) {
                if (coInSo) {
                    cout << ' ';
                }

                cout << i * i;
                coInSo = true;
            }
        }

        cout << '\n';
    }

    return 0;
}
