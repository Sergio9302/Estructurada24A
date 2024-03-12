#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Funci�n para llenar una matriz con valores aleatorios entre -200 y 400
void llenarMatriz(int matriz[][15], int tam) {
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            matriz[i][j] = -200 + rand() % 600; // Genera valores entre -200 y 400
        }
    }
}

// Funci�n para mostrar una matriz
void mostrarMatriz(int matriz[][15], int tam) {
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Funci�n para sumar dos matrices
void sumaMatrices(int matriz1[][15], int matriz2[][15], int resultado[][15], int tam) {
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Funci�n para restar dos matrices
void restaMatrices(int matriz1[][15], int matriz2[][15], int resultado[][15], int tam) {
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

// Funci�n para multiplicar dos matrices
void multiplicacionMatrices(int matriz1[][15], int matriz2[][15], int resultado[][15], int tam) {
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            resultado[i][j] = 0;
            for (int k = 0; k < tam; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    } 
}

int main() {
    
    const int TAM = 15;
    int matriz1[TAM][TAM], matriz2[TAM][TAM], resultado[TAM][TAM];
    int opcion;

    cout << "Ingrese el tama�o de las matrices cuadradas (entre 2 y 15): ";
    int tam;
    cin >> tam;

    llenarMatriz(matriz1, tam);
    llenarMatriz(matriz2, tam);

    cout << "\nMatriz 1:\n";
    mostrarMatriz(matriz1, tam);

    cout << "\nMatriz 2:\n";
    mostrarMatriz(matriz2, tam);

    do {
        cout << "\nSeleccione la operaci�n a realizar:\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicaci�n\n";
        cout << "4. division\n";
        cout << "0. Salir\n";
        cout << "Opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                sumaMatrices(matriz1, matriz2, resultado, tam);
                cout << "\nResultado de la suma:\n";
                mostrarMatriz(resultado, tam);
                break;
            case 2:
                restaMatrices(matriz1, matriz2, resultado, tam);
                cout << "\nResultado de la resta:\n";
                mostrarMatriz(resultado, tam);
                break;
            case 3:
                multiplicacionMatrices(matriz1, matriz2, resultado, tam);
                cout << "\nResultado de la multiplicaci�n:\n";
                mostrarMatriz(resultado, tam);
                break;
            case 0:
                cout << "\nSaliendo del programa...\n";
                break;
            default:
                cout << "\nOpci�n inv�lida. Por favor, seleccione una opci�n v�lida.\n";
        }
    } while (opcion != 0);

    return 0;
}

