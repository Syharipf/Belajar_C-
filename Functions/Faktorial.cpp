#include <iostream>

using namespace std;

int faktorial(int x) {
   int sum = 1;
    for (int i = 1; i <= x ;i++) {
        sum *= i;
    }
    
    return sum;
}

int main(){
    int x;

    cout << "Masukan bilangan bulat: ";
    cin >> x;

    int hasil = faktorial(x);

    cout << "Hasil faktorial " << x << " adalah " << hasil;

    return 0;
}