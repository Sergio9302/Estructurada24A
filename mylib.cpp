#include <iostream> 
using namespace std;

void imp(string texto){
cout<<texto;	
	
}//fin de funcion

void imp(int num){
	cout<<num;
	
}//fin de funcion

int suma(int num1, int num2){
	int sum;
	sum = num1 + num2;
	return sum;
}//fin de la funcion
void hello(string texto){
	cout<<texto;
}

float suma2(float num1, float num2){
	float sum;
	sum = num1 + num2;
	return sum;
}//fin de la fincion

bool valida(char caracter){
	if(caracter >= 65 && caracter <=122)
		return true;
	else	
		return false;

	
}

void editarconjunto(vector<string> conjunto) {
    int indice;
    cout << "Ingresa la posición del elemento a editar (0-" << conjunto.size() - 1 << "): ";
    cin >> indice;

    if (indice >= 0 && indice < conjunto.size()) {
        string nuevoValor;
        cout << "Ingresa el nuevo valor: ";
        cin >> nuevoValor;
        conjunto[indice] = nuevoValor;
        cout << "El elemento en la posición " << indice << " ha sido actualizado." << endl;
    } else {
        cout << "Posición inválida." << endl;
    }
}

void unirconjuntos(vector<string> conjunto1, vector<string> conjunto2) {
    vector<string> unionv;

    // Agregar elementos de conjunto1 a unionv
    for (int i = 0; i < conjunto1.size(); ++i) {
        unionv.push_back(conjunto1[i]);
    }

    // Agregar elementos de conjunto2 a unionv si no están ya presentes
    for (int i = 0; i < conjunto2.size(); ++i) {
        bool encontrado = false;
        for (int j = 0; j < unionv.size(); ++j) {
            if (conjunto2[i] == unionv[j]) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            unionv.push_back(conjunto2[i]);
        }
    }

    // Imprimir el resultado
    cout << "La unión de los conjuntos es: ";
    for (int i = 0; i < unionv.size(); ++i) {
        cout << unionv[i] << " ";
    }
    cout << endl;
}

void interseccion(vector<string> conjunto1, vector<string> conjunto2) {
    // Creamos una lista para guardar la intersección
    vector<string> interseccion;

    // Vamos a revisar cada palabra en el primer conjunto
    for (int i = 0; i < conjunto1.size(); ++i) {
        string palabra1 = conjunto1[i]; // Tomamos una palabra del primer conjunto

        // Vamos a revisar si la palabra está en el segundo conjunto
        bool encontrada = false;

        // Recorremos cada palabra en el segundo conjunto
        for (int j = 0; j < conjunto2.size(); ++j) {
            string palabra2 = conjunto2[j]; // Tomamos una palabra del segundo conjunto

            // Si la palabra del primer conjunto es igual a la del segundo conjunto, la encontramos
            if (palabra1 == palabra2) {
                encontrada = true;
                break; // Salimos del bucle interno si encontramos la palabra
            }
        }

        // Si encontramos la palabra en ambos conjuntos, la agregamos a la intersección
        if (encontrada) {
            interseccion.push_back(palabra1);
        }
    }

    // Mostramos las palabras que están en la intersección
    cout << "La intersección de los conjuntos es: ";
    for (int i = 0; i < interseccion.size(); ++i) {
        cout << interseccion[i] << " ";
    }
    cout << endl;
}

void diferencia(vector<string> v1, vector<string> v2) {
    // Creamos una lista para guardar la diferencia
    vector<string> diferencia;

    // Recorremos cada palabra en el primer conjunto
    for (int i = 0; i < v1.size(); ++i) {
        string palabra = v1[i]; // Tomamos una palabra del primer conjunto

        // Verificamos si la palabra no está en el segundo conjunto
        bool noEncontrada = true;

        // Recorremos cada palabra en el segundo conjunto
        for (int j = 0; j < v2.size(); ++j) {
            if (palabra == v2[j]) {
                noEncontrada = false;
                break; // Salimos del bucle interno si encontramos la palabra
            }
        }

        // Si la palabra no está en el segundo conjunto, la agregamos a la diferencia
        if (noEncontrada) {
            diferencia.push_back(palabra);
        }
    }

    // Mostramos las palabras que están en la diferencia
    cout << "La diferencia de los conjuntos es: ";
    for (int i = 0; i < diferencia.size(); ++i) {
        cout << diferencia[i] << " ";
    }
    cout << endl;
}

void complemento(vector<string> conjunto, int numeroConjunto) {
    // Creamos una lista para guardar el complemento
    vector<string> complemento;

    // Si el número del conjunto es 1, calculamos el complemento para el primer conjunto
    if (numeroConjunto == 1) {
        // Recorremos cada palabra en el primer conjunto
        for (int i = 0; i < conjunto.size(); ++i) {
            string palabra = conjunto[i]; // Tomamos una palabra del primer conjunto

            // Verificamos si la palabra no está en el segundo conjunto
            bool noEncontrada = true;

            // Recorremos cada palabra en el segundo conjunto
            for (int j = 0; j < conjunto.size(); ++j) {
                if (i != j && palabra == conjunto[j]) {
                    noEncontrada = false;
                    break; // Salimos del bucle interno si encontramos la palabra
                }
            }

            // Si la palabra no está en el segundo conjunto, la agregamos al complemento
            if (noEncontrada) {
                complemento.push_back(palabra);
            }
        }

        // Mostramos las palabras que están en el complemento del conjunto 1
        cout << "El complemento del conjunto 1 es: ";
        for (int i = 0; i < complemento.size(); ++i) {
            cout << complemento[i] << " ";
        }
        cout << endl;
    }
    // Si el número del conjunto es 2, calculamos el complemento para el segundo conjunto
    else if (numeroConjunto == 2) {
        // Recorremos cada palabra en el segundo conjunto
        for (int i = 0; i < conjunto.size(); ++i) {
            string palabra = conjunto[i]; // Tomamos una palabra del segundo conjunto

            // Verificamos si la palabra no está en el primer conjunto
            bool noEncontrada = true;

            // Recorremos cada palabra en el primer conjunto
            for (int j = 0; j < conjunto.size(); ++j) {
                if (i != j && palabra == conjunto[j]) {
                    noEncontrada = false;
                    break; // Salimos del bucle interno si encontramos la palabra
                }
            }

            // Si la palabra no está en el primer conjunto, la agregamos al complemento
            if (noEncontrada) {
                complemento.push_back(palabra);
            }
        }

        // Mostramos las palabras que están en el complemento del conjunto 2
        cout << "El complemento del conjunto 2 es: ";
        for (int i = 0; i < complemento.size(); ++i) {
            cout << complemento[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Número de conjunto inválido." << endl;
    }
}



	

















