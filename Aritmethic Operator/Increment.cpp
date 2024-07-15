#include <iostream>

using namespace std;

int main(){

    int x;

    cout << "Masukan bilangan bulat: ";
    cin >> x ;

    int sum = x++;

    cout << "Hasil dari " << sum << "++ " << " adalah " << x;

    return 0;

} 