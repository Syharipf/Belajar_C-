#include <iostream>

using namespace std;

int main(){
    int belanja,VIP;

    cout << "Masukan total belanja: ";
    cin >> belanja;

    cout << "Anggota VIP? ";
    cin >> VIP;

    if (belanja > 100000 || VIP == 'y') {
        cout << "Mendapat diskon";
    }else {
        cout << "Tidak mendapat diskon";
    }

    return 0;
}