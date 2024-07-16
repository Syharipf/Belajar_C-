#include <iostream>

using namespace std;

int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;

}

int main(){
    int a,b,c;

    cout << "Masukan 3 bilagan bulat: ";
    cin >> a >> b >> c;

    int hasil = findMax(a,b,c);

    cout << "Bilangan terbesar adalah: " << hasil;

    return 0;
}