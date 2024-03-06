#include <iostream>
using namespace std;

int ejercicio1(){
    char caracter;
    cout << "ingrese un caracter: " << endl;
    cin >> caracter;

    if (caracter == 'a'|| caracter   == 'e'||caracter  == 'i'||caracter  == 'o'||caracter  == 'u'){
        cout << caracter  << "Es una vocal" <<endl;
    }

    else {
        cout << caracter << "es una consonante" << endl;
    }
    return 0;
}
