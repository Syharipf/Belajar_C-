#include <iostream>
#include <string>

using namespace std;

string reverse(string kata) {
    string reversed;
    for (int i = kata.length() - 1; i >= 0; --i) {
        reversed += kata[i];
    }
    return reversed;
}

int main() {
    string kata;

    cout << "Masukan kata/kalimat: ";
    getline(cin, kata);

    string hasil = reverse(kata);

    cout << "string pembalik: " << hasil << endl;

    return 0;
}
