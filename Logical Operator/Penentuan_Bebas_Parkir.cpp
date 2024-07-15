#include <iostream>

using namespace std;

int main(){
    char kartu, hari;

    cout << "Memiliki Kartu Parkir Gratis: ";
    cin >> kartu;

    cout << "Hari Bebas Parkir? ";
    cin >> hari;

    if (kartu == 'y' || hari == 'y') {
        cout << "Bebas biaya parkir";
    }else {
        cout << "Tidak bebas biaya parkir";
    }

    return 0;
}