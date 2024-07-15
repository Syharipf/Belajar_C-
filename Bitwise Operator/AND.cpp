#include <iostream>

using namespace std;

int main(){
    int x,y;

    cout << "Masukan nilai x: ";
    cin >> x;
    cout << "Masukan nilai y; ";
    cin >> y;

    int hasil = x & y;

    cout << "Hasil dari operasi bitwise AND adalah: " << hasil;

    return 0;
}