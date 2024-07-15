#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Masukan bilangan bulat: ";
    cin >> x;

    int total = 0;
    while (x > 0) {
        x /= 10;
        total++;
    }
    cout << "Jumlah digit: " << total;

    return 0;
}