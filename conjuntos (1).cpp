#include <iostream>
#include <vector>

using namespace std;
#include "mylib.cpp"


int main() {
    vector<string> v1, v2;
    string datos;
    char R;
    char opcion;
    char op;

    cout << "Bienvenido al programa, ¿quieres llenar tus conjuntos? (s/n): ";
    cin >> R;

    if (R == 's' || R == 'S') {
        cout << "* Pon los valores y escribe 'fin' al terminar *\n";
        cout << "Ingresa los valores del conjunto 1:\n";
        while (true) {
            cin >> datos;
            if (datos == "fin") {
                break;
            }
            v1.push_back(datos);
        }

        cout << "Ingresa los valores para el conjunto 2:\n";
        while (true) {
            cin >> datos;
            if (datos == "fin") {
                break;
            }
            v2.push_back(datos);
        }

        do {
            cout << "¿Qué quieres hacer ahora?\n";
            cout << "1. Editar el conjunto 1\n";
            cout << "2. Editar el conjunto 2\n";
            cout << "3. Vaciar el conjunto 1\n";
            cout << "4. Vaciar el conjunto 2\n";
            cout << "5. Unión de los conjuntos\n";
            cout << "6. Intersección de conjuntos\n";
            cout << "7. Diferencia de conjuntos\n";
            cout << "8. Complemento de los conjuntos\n";
            cout << "Elija una opción: ";
            cin >> opcion;

            switch (opcion) {
                case '1': {
                    editarconjunto(v1);
                    break;
                }
                case '2': {
                    editarconjunto(v2);
                    break;
                }
                case '3': {
                    v1.clear();
                    cout << "***** Su conjunto ha sido vaciado *****" << endl;
                    break;
                }
                case '4': {
                    v2.clear();
                    cout << "***** Su conjunto ha sido vaciado *****" << endl;
                    break;
                }
                case '5': {
                    unirconjuntos(v1, v2);
                    break;
                }
                case '6': {
                    interseccion(v1, v2);
                    break;
                }
                case '7': {
                    diferencia(v1, v2);
                    break;
                }
                case '8': {
                    cout << "¿Sobre cuál conjunto desea calcular el complemento? (1 o 2): ";
                    cin >> opcion;

                    if (opcion == '1') {
                        complemento(v1, 1);
                    } else if (opcion == '2') {
                        complemento(v2, 2);
                    } else {
                        cout << "Opción inválida." << endl;
                    }
                    break;
                }
                default: {
                    cout << "Opción inválida. Por favor, elija una opción del menú." << endl;
                    break;
                }
            }

            cout << "¿Quieres seguir? (s/n): ";
            cin >> op;
        } while (op == 's' || op == 'S');
    } else {
        cout << "Entonces, ¿para qué corres el programa? ??" << endl;
    }

    return 0;
}


