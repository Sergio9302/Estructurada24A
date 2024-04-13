/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    int vocales = 0, cons = 0;

    cout << "Ingrese una palabra: " << endl;
    getline(cin, cadena);

    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u' || cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U') {
            vocales++;
        } else {
            cons++;
        }
    }

    cout << "Existen " << vocales << " vocales y " << cons << " consonantes" << endl;
    cout << "Frase original: " << cadena << endl;

    for (int i = 0; i < cadena.length(); i++) {
        cadena[i] = toupper(cadena[i]);
    }
    cout << "Mayúscula: " << cadena << endl;
    for (int i = 0; i < cadena.length(); i++) {
        cadena[i] = tolower(cadena[i]);
    }
    cout << "Minúscula: " << cadena << endl;

    bool esPalindromo = true;
    int j = cadena.length() - 1;
    for (int i = 0; i < cadena.length() / 2; i++) {
        if (cadena[i] != cadena[j]) {
            esPalindromo = false;
            break;
        }
        j--;
    }

    if (esPalindromo) {
        cout << "La palabra '" << cadena << "' es un palíndromo" << endl;
    } else {
        cout << "La palabra '" << cadena << "' NO es un palíndromo" << endl;
    }

    cin.get();
    return 0;
}
