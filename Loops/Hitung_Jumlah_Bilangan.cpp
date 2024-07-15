#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Masukan bilangan bulat: ";
    cin >> x;

    int genap = 0;
    int ganjil = 0;
    
    for (int i = 0; i < x; i++) {
        if (i % 2 == 0) {
            genap += i;
        }else if (i % 2 != 0)
        {
            ganjil += i;
        }
        
    }

    cout << "Jumlah bilangan genap: " << genap << endl;
    cout << "Jumlah bilangan ganjil: " << ganjil;

    return 0;
}