#include <iostream>
#include <cstdlib>
#include <ctime>
// se integran las librerias necesarias
using namespace std;

const int MAX_SIZE = 10;// se declara el maximo de la matriz y que es entera

// Función para llenar una matriz con valores aleatorios entre -100 y 100
void llenarMatrizAleatoria(int matriz[MAX_SIZE][MAX_SIZE], int tamano) {//inicio de la funcion
    srand(time(0));
    for (int i = 0; i < tamano; ++i) {//inicio del for
        for (int j = 0; j < tamano; ++j) {//inicio del for
            matriz[i][j] = rand() % 201 - 100; // Genera un número aleatorio entre -100 y 100
        }//fin del for
    }//fin del for
}//fin de la funcion

// Función para imprimir una matriz
void imprimirMatriz(int matriz[MAX_SIZE][MAX_SIZE], int tamano) {//inicio de la funcion
    for (int i = 0; i < tamano; ++i) {//inicio del foor
        for (int j = 0; j < tamano; ++j) {//inicio del for
            cout << matriz[i][j] << "\t";
        }//fin del for
        cout << endl;
    }//fin del for
}//fin de la funcion

int main() {//inicio del main
    char continuar;
    //se utiliza la funcion del do para que vuelva a preguntar si quiere volver a hacerlo
    do {//inicio del do
        int tamano;
//se pregunta cual tamano quiere el usuario
        cout << "Ingrese el tamano de las matrices cuadradas (entre 2 y 10): ";
        cin >> tamano;

        if (tamano < 2 || tamano > MAX_SIZE) {//inicio del if
            cout << "Tamano de matriz no válido." << endl;
            return 1;
        }//fin del if
//declaracion de las matrices
        int matriz1[MAX_SIZE][MAX_SIZE];
        int matriz2[MAX_SIZE][MAX_SIZE];
//se regunta si se quiere llenar la matriz aleatorio o no
        cout << "¿Desea llenar las matrices con valores aleatorios? (s/n): ";
        char opcion;//se declara que "opcion" es de tipo char
        cin >> opcion;
//si la opcion es s se hara lo siguiente
        if (opcion == 's' || opcion == 'S') {//inicio del if
            llenarMatrizAleatoria(matriz1, tamano);
            llenarMatrizAleatoria(matriz2, tamano);
            cout << "Matriz 1 (aleatoria):" << endl;
            imprimirMatriz(matriz1, tamano);
            cout << "Matriz 2 (aleatoria):" << endl;
            imprimirMatriz(matriz2, tamano);
            
        }//fin del if
		//si la opcion es n se hara lo siguiente y se llenara manualmente 
		 else {//inicio del else
            cout << "Ingrese los valores para la Matriz 1:" << endl;
            for (int i = 0; i < tamano; ++i) {//inicio del for
                for (int j = 0; j < tamano; ++j) {//inicio del for
                    cout << "Ingrese el valor para la posición [" << i << "][" << j << "]: ";
                    cin >> matriz1[i][j];
                }//fin del for
            }//fin del for
            cout << "Ingrese los valores para la Matriz 2:" << endl;
            for (int i = 0; i < tamano; ++i) {//inicio del for 
                for (int j = 0; j < tamano; ++j) {//inicio del for
                    cout << "Ingrese el valor para la posición [" << i << "][" << j << "]: ";
                    cin >> matriz2[i][j];
                }//fin del for
            }//fin del for
        }//fin del else

        int Operacion;//se da el menu para que elija la operacion que quiera hacer 
        cout << "Seleccione la operación a realizar:\n"
             << "1. Suma\n"
             << "2. Resta\n"
             << "3. Multiplicación\n"
             << "4. Editar matriz A\n"
             << "5. Editar matriz B\n"
             << "6. Vaciar matriz A\n"
             << "7. Vaciar matriz B\n";
        cin >> Operacion;
//se utiliza el switch
        switch (Operacion) {//inicio del switch
            case 1: {//inicio caso 1
                // Suma de matrices
                int resultado[MAX_SIZE][MAX_SIZE];
                for (int i = 0; i < tamano; ++i) {//inicio for
                    for (int j = 0; j < tamano; ++j) {//inicio for
                        resultado[i][j] = matriz1[i][j] + matriz2[i][j];
                    }//cierre for
                }//cierre for
                cout << "La suma de las matrices es:" << endl;
                imprimirMatriz(resultado, tamano);
                break;
            }//fin caso 1
            case 2: {//inicio caso 2
                // Resta de matrices
                int resultado[MAX_SIZE][MAX_SIZE];
                for (int i = 0; i < tamano; ++i) {//inicio for
                    for (int j = 0; j < tamano; ++j) {//inicio for
                        resultado[i][j] = matriz1[i][j] - matriz2[i][j];
                    }//fin for
                }//fin for
                cout << "La resta de las matrices es:" << endl;
                imprimirMatriz(resultado, tamano);
                break;
            }//fin caso 2
            case 3: {//inicio caso 3
                // Multiplicación de matrices
                int resultado[MAX_SIZE][MAX_SIZE] = {0};
                for (int i = 0; i < tamano; ++i) {//inicio for
                    for (int j = 0; j < tamano; ++j) {//inicio for
                        for (int k = 0; k < tamano; ++k) {//inicio for
                            resultado[i][j] += matriz1[i][k] * matriz2[k][j];
                        }//fin for
                    }//fin for
                }//fin for
                cout << "La multiplicación de las matrices es:" << endl;
                imprimirMatriz(resultado, tamano);
                break;
            }//fin caso 3
            case 4: {//inicio caso 4
                // Editar matriz 1
                cout << "Matriz 1 actual:" << endl;
                imprimirMatriz(matriz1, tamano);
                int fila, columna, nuevoValor;
                cout << "Ingrese la fila del elemento a editar (0-" << tamano - 1 << "): ";
                cin >> fila;
                cout << "Ingrese la columna del elemento a editar (0-" << tamano - 1 << "): ";
                cin >> columna;
                cout << "Ingrese el nuevo valor: ";
                cin >> nuevoValor;
                matriz1[fila][columna] = nuevoValor;
                cout << "Matriz 1 editada:" << endl;
                imprimirMatriz(matriz1, tamano);
                break;
            }//fin caso 4
            case 5: {//inicio caso 5
                // Editar matriz 2
                cout << "Matriz 2 actual:" << endl;
                imprimirMatriz(matriz2, tamano);
                int fila, columna, nuevoValor;
                cout << "Ingrese la fila del elemento a editar (0-" << tamano - 1 << "): ";
                cin >> fila;
                cout << "Ingrese la columna del elemento a editar (0-" << tamano - 1 << "): ";
                cin >> columna;
                cout << "Ingrese el nuevo valor: ";
                cin >> nuevoValor;
                matriz2[fila][columna] = nuevoValor;
                cout << "Matriz 2 editada:" << endl;
                imprimirMatriz(matriz2, tamano);
                break;
            }//fin caso 5
            case 6: {//inicio caso 6
                // Vaciar matriz 1
                for (int i = 0; i < tamano; ++i) {//inicio for
                    for (int j = 0; j < tamano; ++j) {//inicio for
                        matriz1[i][j] = 0;
                    }//fin de for
                }//fin de for
                cout << "La matriz 1 ha sido vaciada." << endl;
                break;
            }//fin caso 6
            case 7: {//inicio caso 7
                // Vaciar matriz 2
                for (int i = 0; i < tamano; ++i) {//inicio for
                    for (int j = 0; j < tamano; ++j) {//inicio for
                        matriz2[i][j] = 0;
                    }//fin for
                }//fin for
                cout << "La matriz 2 ha sido vaciada." << endl;
                break;
            }//fin caso 7
            default://por sino elije una opcion existente el  usuario
                cout << "Opción no válida." << endl;
                break;
        }//fin del switch

        cout << "¿Desea continuar? (s/n): ";
        cin >> continuar;//el ciclo se hara mientras las respuestas sean s o S
    }//fin del do
	 while (continuar == 's' || continuar == 'S');

    return 0;
}//fin del main

