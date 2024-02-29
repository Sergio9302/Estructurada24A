#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v1, v2;
    string datos;
    char R;
    char opcion;
    char op;
    cout << "bienvenido al programa, quieres llenar tus conjuntos? (s/n)";
    cin >> R;

    if (R == 's' || R == 'S') {
        cout << "*pon los valores y escribe un `fin` al terminar*\n";
        cout << "ingresa los valores del conjunto 1:  " << endl;
        while (true) {
            cin >> datos;
            if (datos == "fin") {
                break;
            }
            v1.push_back(datos);
        }

        cout << "ingresa los valores para el conjunto 2: " << endl;
        while (true) {
            cin >> datos;
            if (datos == "fin") {
                break;
            }
            v2.push_back(datos);
        }

        do {
            cout << "que quieres hacer ahora?" << endl;
            cout << "1. editar el conjunto 1:\n";
            cout << "2. editar el conjunto 2:\n";
            cout << "3. vaciar el conjunto 1:\n";
            cout << "4. vaciar el conjunto 2:\n";
            cout << "5. union de los conjuntos: \n";
            cout << "6. interseccion de conjuntos:\n";
            cout << "7. diferencia de conjuntos:\n";
            cout << "8. complemento de los conjuntos:\n";
            cin >> opcion;
            switch (opcion) {
                case '1': {
                    	int val;
	 cout << "Ingresa la posición del elemento a editar (0-" << v1.size() - 1 << "): ";
                int indice;
                cin >> indice;
                if (indice >= 0 && indice < v1.size()) {
                    cout << "Ingresa el nuevo valor: ";
                    cin >> val;
                    v1[indice] = val;
                    cout <<  "se ha sido actualizado." << endl;
                } else {
                    cout << "Posición inválida." << endl;
                }
                    break;
                }
                case '2': {
                    	int val;
	 cout << "Ingresa la posición del elemento a editar (0-" << v2.size() - 1 << "): ";
                int indice;
                cin >> indice;
                if (indice >= 0 && indice < v2.size()) {
                    cout << "Ingresa el nuevo valor: ";
                    cin >> val;
                    v2[indice] = val;
                    cout <<  "se ha sido actualizado." << endl;
                } else {
                    cout << "Posición inválida." << endl;
                }

                    break;
                }
                case '3': {
                    v1.clear();
                    cout << "*****su conjunto ah sido vaciado*****" << endl;
                    break;
                }
                case '4': {
                    v2.clear();
                    cout << "*****su conjunto ah sido vaciado*****" << endl;
                    break;
                }
                case '5': {
                    // Unión de los conjuntos
                    vector<string> unio;
                    for (int i = 0; i < v1.size(); ++i) {
                        unio.push_back(v1[i]);
                    }
                    for (int i = 0; i < v2.size(); ++i) {
                        bool vector = false;
                        for (int j = 0; j < unio.size(); ++j) {
                            if (v2[i] == unio[j]) {
                                vector = true;
                                break;
                            }
                        }
                        if (!vector) {
                            unio.push_back(v2[i]);
                        }
                    }
                    cout << "La unión de los conjuntos es: ";
                    for (int i = 0; i < unio.size(); ++i) {
                        cout << unio[i] << " ";
                    }
                    cout << endl;
                    break;
                }
                case '6': {
                    // Intersección de los conjuntos
                    vector<string> interseccion;
                    for (int i = 0; i < v1.size(); ++i) {
                        for (int j = 0; j < v2.size(); ++j) {
                            if (v1[i] == v2[j]) {
                                interseccion.push_back(v1[i]);
                                break;
                            }
                        }
                    }
                    cout << "La intersección de los conjuntos es: ";
                    for (int i = 0; i < interseccion.size(); ++i) {
                        cout << interseccion[i] << " ";
                    }
                    cout << endl;
                    break;
                }
                case '7': {
                    // Diferencia de los conjuntos (v1 - v2)
                    vector<string> diferencia;
                    for (int i = 0; i < v1.size(); ++i) {
                        bool vector = false;
                        for (int j = 0; j < v2.size(); ++j) {
                            if (v1[i] == v2[j]) {
                                vector = true;
                                break;
                            }
                        }
                        if (!vector) {
                            diferencia.push_back(v1[i]);
                        }
                    }
                    cout << "La diferencia de los conjuntos es: ";
                    for (int i = 0; i < diferencia.size(); ++i) {
                        cout << diferencia[i] << " ";
                    }
                    cout << endl;
                    break;
                }
                case '8': {
                    // Complemento de los conjuntos
                    char conjunto;
                    cout << "¿Sobre cuál conjunto desea calcular el complemento? (1 o 2): ";
                    cin >> conjunto;

                    if (conjunto == '1') {
                        vector<string> complementoV1;
                        for (int i = 0; i < v1.size(); ++i) {
                            bool vector = false;
                            for (int j = 0; j < v2.size(); ++j) {
                                if (v1[i] == v2[j]) {
                                    vector = true;
                                    break;
                                }
                            }
                            if (!vector) {
                                complementoV1.push_back(v1[i]);
                            }
                        }

                        cout << "El complemento del conjunto 1 es: ";
                        for (int i = 0; i < complementoV1.size(); ++i) {
                            cout << complementoV1[i] << " ";
                        }
                        cout << endl;
                    } else if (conjunto == '2') {
                        vector<string> complementoV2;
                        for (int i = 0; i < v2.size(); ++i) {
                            bool vector = false;
                            for (int j = 0; j < v1.size(); ++j) {
                                if (v2[i] == v1[j]) {
                                    vector = true;
                                    break;
                                }
                            }
                            if (!vector) {
                                complementoV2.push_back(v2[i]);
                            }
                        }

                        cout << "El complemento del conjunto 2 es: ";
                        for (int i = 0; i < complementoV2.size(); ++i) {
                            cout << complementoV2[i] << " ";
                        }
                        cout << endl;
                    } else {
                        cout << "Opción no válida. Por favor, elija 1 o 2." << endl;
                    }
                    break;
                }
            }

            cout << "¿Quieres seguir? (s): ";
            cin >> op;
        } while (op == 's' || op == 'S');
    } else {
        cout << "entonces para que corres el programa ._.\n";
    }

    return 0;
}

