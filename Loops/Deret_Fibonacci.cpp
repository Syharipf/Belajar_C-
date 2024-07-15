#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Masukkan bilangan bulat: ";
    cin >> x;

    cout << "Deret Fibonacci " << x << " adalah ";
    
    int a = 0;
    int b = 1;
    
    for (int i = 0; i < x; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    
    return 0;
}
