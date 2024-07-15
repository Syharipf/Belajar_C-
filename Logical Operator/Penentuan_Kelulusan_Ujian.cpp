#include <iostream>

using namespace std;

int main(){
    int n1, n2;

    cout << "Masukan nilai matematika: ";
    cin >> n1;

    cout << "Masukan nilai bahasa inggris: ";
    cin >> n2;

    if (n1 > 70 && n2 > 70) {
        cout << "Lulus ujian";
    }else {
        cout << "Tidak lulus ujian";
    }

    return 0;
}