/*           PRESENTACION
NOMBRE:Sergio Alejandro Camarena Carbajal
FECHA:20 febrero de 2024
PROGRAMA: arreglos
CENTRO UNIVERSITARIO DE LOS ALTOS/UNIVERSIDAD DE GUADALAJARA INGENIERIA EN COMPUTACION/2DO SEMESTRE
PROFESOR:Sergio Franco Casillas
DESCRIPCION:realizar vector
*/





#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool ciclo = true;
    vector<int> v;
    char op; // opción del menú
    int val; // valores de usuario
    int suma = 0; // inicializa suma

    while (ciclo) {
        cout << "1. inserta valor" << endl;
        cout << "2. sumar valores" << endl;
        cout << "3. listar valores" << endl;
        cout << "4. editar vector" << endl;
        cout << "5. vaciar vector"<< endl;
        cout << "6. salir" << endl;
        cout << "elige una opción:";

        cin >> op;
        switch (op) {
            case '1': {//para escribir valor
              
                    cout << "introduce un valor: ";
                    cin >> val; // pide valor al usuario
                    v.push_back(val); // ingresa el valor al arreglo
                    
                  
                break;
            }//cierre del caso 1

            case '2': {//para sumar los valores del arreglo
                suma = 0; // reinicia suma
                for (int i = 0; i< v.size();  i++) {
                    suma += v[i];
                }//cierre del for
                cout << "el total del vector es: " << suma << endl;
                break;
            }//cierre caso 2

            case '3': {//hacer lista de los valores
                for (int i = 0; i < v.size(); i++) {
                    cout << "[" << v[i] << "]\n ";
                } //cierre del for
                cout << endl;
                break;
            }//cierre caso 3

            case '4': {//editar los valores del arreglo 
               
                cout << "Ingresa la posición del elemento a editar (0-" << v.size() - 1 << "): ";
                int indice;
                cin >> indice;
                if (indice >= 0 && indice < v.size()) {
                    cout << "Ingresa el nuevo valor: ";
                    cin >> val;
                    v[indice] = val;
                    cout <<  "se ha sido actualizado." << endl;
                } else {
                    cout << "Posición inválida." << endl;
                }
                break;
            }//cierre caso 4
            case '5': { //vaciar arreglo
            v.clear();
            cout<< "el vector ya no tiene elementos"<<endl;
            	
            	
            	
				break;
			}//fin del caso

            case '6': {
                ciclo = false; // sale del bucle
                break;
            }//cierre caso 5

            default: {
                cout << "Opción inválida. Por favor, selecciona una opción válida del menú." << endl;
                break;
            }//cierre default
        }//cierre del switch
    }//cierre del while */

    return 0;
}//cierre del main*/

	
	
	
	
	
	
	
	
	
	
	
	

