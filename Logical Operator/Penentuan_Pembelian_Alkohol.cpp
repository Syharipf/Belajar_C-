#include <iostream>

using namespace std;

int main(){
    int usia;
    char IzinKhusus;

    cout << "Masukan usia: ";
    cin >> usia;

    cout << "Apakah memiliki izin khusus? ";
    cin >> IzinKhusus;

    if (usia > 21 || IzinKhusus == 'y') {
        cout << "Dapat membeli alkohol";
    }else {
        cout << "Tidak dapat membeli alkohol";
    }

    return 0;
}