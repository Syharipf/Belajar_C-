#include <iostream>

using namespace std;

int main(){
    int n, x;

    cout << "Masukan jumlah siswa: ";
    cin >> n;

    cout << "Masukan nilai: ";

    double total = 0;
    int average = 0;

    for (int i = 0; i < n;i++) {
        cin >> x;
        average += x;
        total = double(average) / double(n);
    }

    cout << "Rata rata nilai: " << total;

    return 0;
}