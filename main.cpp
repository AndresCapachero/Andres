#include <iostream>
#include "string"
#include <cmath>
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

/// ejercicio 5
int ejercicio5(){
    int tamano;

    //solicitamos al usuario que ingrese el tamaño del patron
    cout << "ingrese un numero entero impar para imprimir la imagen: ";
    cin >> tamano;

    //verificamos que el numero ingresado sea impar
    while(tamano%2 == 0){
        cout << "el numero ingresado no es un numero impar \n";
        cout << "ingrese nuevamente un numero impar: ";
        cin >> tamano;
    }
    // Calcular la mitad del tamaño para determinar el número de filas de la parte superior e inferior del patrón
    int mitad = tamano / 2 + 1;

    // Imprimir la parte superior del patrón
    for (int i = 1; i <= mitad; i++) {
        // Imprimir espacios en blanco necesarios antes de cada asterisco
        for (int j = 1; j <= mitad - i; j++) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Imprimir la parte inferior del patrón
    for (int i = mitad - 1; i >= 1; i--) {
        // Imprimir espacios en blanco antes de cada asterisco
        for (int j = 1; j <= mitad - i; j++) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

/// ejercicio 7
int ejercicio7(){
    //declaramos las variables que vamos a utilizar
    int A = 1;
    int B = 1;
    int suma = 0;
    int numero;
    //pedimos que ingrese un numero cualquiera
    cout << "ingrese un numero: ";
    cin >> numero;
    //utilizamos un bucle sencillo para realizar la serie de Fibonacci
    while (B < numero){
        int C = A + B;
        A = B;
        B = C;

        //verificamos en cada iteracion si C es un numero par
        if (C % 2 == 0){
            //se suman todos los numero pares verificados
            suma += C;
        }
    }
    cout << "el resultado de la suma es : "<<suma<<"\n";
    return 0;
}

/// ejercicio 9
int ejercicio9() {
    //declaramos y pedimos variables
    int Numero;
    int suma = 0;
    cout << "Ingrese un numero entero: ";
    cin >> Numero;

    while (Numero > 0) {
        int indice = Numero % 10; //utilizamos modulo para sacar el ultimo digito del numero ingresado
        suma += pow(indice, indice); // lo utilizamos para realizar la potencia
        Numero /= 10; // eliminamos el ultimo digito del numero ingresado
    }
    cout << "El resultado de la suma de los digitos elevados a si mismo es: " << suma<< "\n";
    return 0;
}


int main()
{
    ejercicio9();
    return 0;
}
