#include <iostream>

using namespace std;

int kali(int a,int b) {
    int sum = a * b;
    return sum;
}

int main(){
    int a, b;

    cout << "Masukan 2 bilangan bulat: ";
    cin >> a >> b;

    int hasil = kali(a,b);

    cout << "Hasil penjumlahan " << a << " * " << b << " adalah " << hasil;

    return 0;
}