#include <iostream>
#include "string"
using namespace std;

/// ejercicio 1
int ejercicio1(){
    char caracter;
    cout << "ingrese un caracter: ";
    cin >> caracter;
    //Utilizamos condicionales para solucionar el problema
    //Verificamos si es una vocal
    if (caracter == 'a'|| caracter   == 'e'||caracter  == 'i'||caracter  == 'o'||caracter  == 'u'||
            caracter == 'A'|| caracter   == 'E'||caracter  == 'I'||caracter  == 'O'||caracter  == 'U'){
        cout << caracter  << " Es una vocal" <<endl;
    }
    //Verificamos si es una consonante
    else if(caracter == 'b'|| caracter == 'c'||caracter  == 'd'||caracter  == 'f'||caracter  == 'g'||
            caracter == 'h'|| caracter == 'j'||caracter  == 'k'||caracter  == 'l'||caracter  == 'm'||
            caracter == 'n'||caracter  == 'p'||caracter  == 'q'||caracter  == 'r'||caracter == 's'||
            caracter == 't'||caracter == 'v' ||caracter  == 'w'||caracter  == 'x'||caracter  == 'y'||caracter =='z'||
            caracter == 'B'|| caracter == 'C'||caracter  == 'D'||caracter  == 'F'||caracter  == 'G'||
            caracter == 'H'|| caracter == 'J'||caracter  == 'K'||caracter  == 'L'||caracter  == 'M'||
            caracter == 'N'||caracter  == 'P'||caracter  == 'Q'||caracter  == 'R'||caracter == 'S'||
            caracter == 'T'||caracter  == 'V'||caracter  == 'W'||caracter  == 'X'||caracter  == 'Y'||caracter =='Z'){
        cout << caracter << " es una consonante" << endl;
    }
    //El valor ingresado no es una letra
    else {
        cout << caracter << " no es una letra" << endl;
    }
    return 0;
}

/// ejercicio 2
int ejercicio2(){
    //se le pide al usuario una cantidad de dinero que desea "desglosar"
    int cantidad_deseada;
    cout << "Ingrese la cantidad de dinero deseada: ";
    cin >> cantidad_deseada;

    //se realiza un arreglo con la cantidad de billetes en circulacion
    int denominaciones[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    //se crea otro arreglo vacio para ir determinando cuantos billetes se necesitan de cada uno que esta en circulacion
    int cantidad_billetes[10] = {0};

    //utilizamos el "for" para ir recorriendo el arreglo "denominaciones"
    for (int i = 0; i < 10; i = i+1) {
        //utilizamos el ciclo "while para determianr cuantos billetes o monedas se necesitan para cada denominación"
        while (cantidad_deseada >= denominaciones[i]) {
            cantidad_billetes[i]++;
            cantidad_deseada -= denominaciones[i];
        }
    }
    //retorno-impresion en pantalla
    cout << "Para la cantidad de " << cantidad_deseada << " se necesitan los siguientes billetes y monedas:" << endl;
    for (int i = 0; i < 10; i= i+1) {
        cout << denominaciones[i] << ": " << cantidad_billetes[i] << endl;
    }
    cout << "Faltante: " << cantidad_deseada << endl;

    return 0;
}

/// ejercicio 3
int ejercicio3() {
    //se le pide al usuario que ingrese la fecha
    int mes, dia;
    cout << "Ingrese un mes del año en numero: ";
    cin >> mes;
    cout << "Ingrese un día cualquiera de un mes en nu"
            "mero: ";
    cin >> dia;

    //se evaluan las condiciones en las cuales una fecha es valida
    if (mes < 1 || mes > 12) {
        cout << mes << " es un mes invalido";
    }
    else if (dia < 1 || dia > 31) {
        cout << dia << "/" << mes << " es una fecha invalida";
    }
    else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        cout << dia << "/" << mes << " es una fecha invalida";
    }
    else if (mes == 2 && dia == 29) {
        cout << dia << "/" << mes << " es valida en bisiesto";
    }
    else {
        cout << dia << "/" << mes << " es una fecha valida";
    }

    return 0;
}

int main()
{
    ejercicio3();
    return 0;
}
