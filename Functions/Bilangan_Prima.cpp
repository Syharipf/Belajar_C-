#include <iostream>

using namespace std;

void prima(int x) {
    for (int i = 2; i <= x; i++) {
        bool isPrima = true;
        for (int j = 2; j * j <= i && isPrima; j++) {
            if (i % j == 0) {
                isPrima = false;
            }
        }
        if (isPrima) {
            return true;
        }
    }
}

int main() {
    int x;

    cout << "Masukkan bilangan bulat: ";
    cin >> x;

    cout << "Bilangan pria dari " << x << " adalah ";
    prima(x);

    return 0;
}
