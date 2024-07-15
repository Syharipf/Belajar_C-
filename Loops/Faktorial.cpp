#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Masukan bilangan bulat: ";
    cin >> x;

    int sum = 1;
    for (int i = 1; i <= x ;i++) {
        sum *= i;
    }

    cout << "Hasil faktorial dari " << x << " adalah " << sum;

    return 0;
}