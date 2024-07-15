#include <iostream>

using namespace std;

int main(){

    int usia, tinggi;

    cout << "Masukan usia: ";
    cin >> usia;

    cout << "Masukan tinggi: ";
    cin >> tinggi;

    if (usia > 10 && tinggi > 120) {
        cout << "Boleh masuk wahana";
    }else {
        cout << "Tidak boleh masuk wahana";
    }

    return 0;
}