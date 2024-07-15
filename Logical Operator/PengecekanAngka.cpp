#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Masukan bilangan bulat: ";
    cin >> x;

    if (x%2 == 0) {
        if (x > 0) {
            cout << x << " adalah bilangan genap positif";
        }else {
              cout << x << " adalah bilangan genap negatif";
        }
    }else {
         if (x > 0) {
            cout << x << " adalah bilangan ganjil positif";
        }else {
              cout << x << " adalah bilangan ganjil negatif";
        }
    }

    return 0;
}