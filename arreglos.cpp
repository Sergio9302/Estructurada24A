/*           PRESENTACION
NOMBRE:Sergio Alejandro Camarena Carbajal
FECHA:13 febrero de 2024
PROGRAMA: arreglos
CENTRO UNIVERSITARIO DE LOS ALTOS/UNIVERSIDAD DE GUADALAJARA INGENIERIA EN COMPUTACION/2DO SEMESTRE
PROFESOR:Sergio Franco Casillas
DESCRIPCION:realizar arreglos
*/








#include <iostream>
using namespace std;

int main() {
    bool ciclo = true;
    int ar[10];
    char op; // opci�n del men�
    int val; // valores de usuario
    int pos = 0;
    int suma = 0; // inicializa suma

    while (ciclo) {
        cout << "1. inserta valor" << endl;
        cout << "2. sumar valores" << endl;
        cout << "3. listar valores" << endl;
        cout << "4. editar arreglo" << endl;
        cout << "5. salir" << endl;
        cout << "elige una opci�n:";

        cin >> op;
        switch (op) {
            case '1': {//para escribir valor
                if (pos == 10) {
                    cout << "arreglo lleno, no se puede insertar m�s valores." << endl;
                }//cierre del if
				 else {
                    cout << "introduce un valor: ";
                    cin >> val; // pide valor al usuario
                    ar[pos] = val; // ingresa el valor al arreglo
                    pos++; // incrementa la posici�n
                    if (pos == 10) {
                        cout << "El arreglo est� lleno." << endl;
                    }//cierre del if
                }//cierre del else
                break;
            }//cierre del caso 1

            case '2': {//para sumar los valores del arreglo
                suma = 0; // reinicia suma
                for (int i = 0; i < pos; i++) {
                    suma += ar[i];
                }//cierre del for
                cout << "el total del arreglo es: " << suma << endl;
                break;
            }//cierre caso 2

            case '3': {//hacer lista de los valores
                for (int i = 0; i < pos; i++) {
                    cout << "[" << ar[i] << "]\n ";
                } //cierre del for
                cout << endl;
                break;
            }//cierre caso 3

            case '4': {//editar los valores del arreglo 
               
                cout << "Ingresa la posici�n del elemento a editar (0-" << pos - 1 << "): ";
                int indice;
                cin >> indice;
                if (indice >= 0 && indice < pos) {
                    cout << "Ingresa el nuevo valor: ";
                    cin >> val;
                    ar[indice] = val;
                    cout << "El elemento en la posici�n " << indice << " ha sido actualizado." << endl;
                } else {
                    cout << "Posici�n inv�lida." << endl;
                }
                break;
            }//cierre caso 4

            case '5': {
                ciclo = false; // sale del bucle
                break;
            }//cierre caso 5

            default: {
                cout << "Opci�n inv�lida. Por favor, selecciona una opci�n v�lida del men�." << endl;
                break;
            }//cierre default
        }//cierre del switch
    }//cierre del while 

    return 0;
}//cierre del main






