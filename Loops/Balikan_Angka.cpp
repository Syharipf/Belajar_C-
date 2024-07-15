#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Masukan bilangan bulat:";
    cin >> x;

    cout << "Angka terbail: ";
    while(x > 0) {
        int total = x % 10;
        x /= 10;
        cout << total;
    }

    return 0;
}