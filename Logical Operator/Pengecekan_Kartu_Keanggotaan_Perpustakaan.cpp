#include <iostream>

using namespace std;

int main(){
    char kartu, aktif;

    cout << "Memiliki kartu anggota? ";
    cin >> kartu;

    cout << "Apakah aktif? ";
    cin >> aktif;

    if (kartu == 'y' && aktif == 'y') {
        cout << "Dapat meminjam buku";
    }else {
        cout << "Tidak dapat meminjam buku";
    }

    return 0;
}