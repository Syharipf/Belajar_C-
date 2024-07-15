#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Masukkan bilangan bulat: ";
    cin >> x;

    cout << "Bilangan prima " << x << " adalah: ";
    for (int i = 2; i <= x; i++) {
        bool prima = true;
        for (int j = 2; j * j <= i && prima; j++) {
            if (i % j == 0) {
                prima = false;
            }
        }
        if (prima) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
