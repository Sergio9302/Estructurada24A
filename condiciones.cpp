/*           PRESENTACION
NOMBRE:Sergio Alejandro Camarena Carbajal
FECHA:8 febrero de 2024
PROGRAMA: Condiciones 
CENTRO UNIVERSITARIO DE LOS ALTOS/UNIVERSIDAD DE GUADALAJARA INGENIERIA EN COMPUTACION/2DO SEMESTRE
PROFESOR:Sergio Franco Casillas
DESCRIPCION:imprimir numeros segun algunas condiciones
*/



#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	
	bool ciclo=true ;
	int numuser, veces, suma ;
	char op;
	//iniciar ciclo retorno de problema
	
	while (ciclo){
		
		cout << "escribe un numero: " ;
	cin >> numuser;
		//validar numero
		if (numuser < 0 || numuser >1000){
			cout << " no puedo calcular el valor" << endl;
		}
		//se descarta el la otra parte de numeros a identificar
		else if (numuser > 0 && numuser <= 500){
			veces=100;
			suma=5;
		} else {
			/*si no se da ninguno de los casos anteriores se aprovecha poniendo la 
			sigiente condicion*/
			veces=50;
			suma=10;
		}
		// inicio del for
		for (int i= 1; i <= veces; i++ ){
			int res;
			res= numuser += suma;
			cout<< "La vez :" << i << " es de:" <<res << endl;
		}
		// se da la opcion de regresar a el inicio
		cout <<"termine el ciclo,\"S\ para salir o cualquier otra tecla para continuar "<< endl;
		cin >> op;
		
		if (op == 'S' || op =='s'){
			ciclo = false;
		}
	}// fin de ciclo while del retorno de programa
}// fin del main 
