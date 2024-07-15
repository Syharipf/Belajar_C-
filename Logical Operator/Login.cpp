#include <iostream>

int main(){
    using namespace std;

    string username;
    int    password;

    cout << "Masukan username: ";
    cin >> username;
    cout << "Masukan password: ";
    cin >> password;

    if (username == "admin" && password == 1234) {
          cout << "Login berhasil ";
    }else {
          cout << "Login gagal ";
    }

    return 0;
}