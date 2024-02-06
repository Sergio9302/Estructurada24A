/*           PRESENTACION
NOMBRE:Sergio Alejandro Camarena Carbajal
FECHA:5 de febrero de 2024
PROGRAMA: caracteres y cadenas 
CENTRO UNIVERSITARIO DE LOS ALTOS/UNIVERSIDAD DE GUADALAJARA INGENIERIA EN COMPUTACION/2DO SEMESTRE
PROFESOR:Sergio Franco Casillas
DESCRIPCIION:Imprimir los datos personales
*/





#include <iostream>
using namespace std;
int main(){
	printf("Sergio Alejandro Camarena Carbajal\n  hola\n");	
	/*saltos de linea, sirve para saltar la linea y escribir otra cosa
	debajo en otra  linea */
	 	
	printf("18\taños\n");
	/*Tabulador, se utiliza para crear un espacio horizontal en el texto*/
	
	printf("acatic feo\b\b\b\b ");
	/* retroceso, mueve el cursor un espacio atras y elimina lo que habia ahi*/
	
	printf("\tingenieria en computacion\a\n");
	/* Alarma, este caracter no cambia nada del codigo, pero genera un pitido o sonido 
	al ejecutar el programa */
	printf("\\2do \\semestre\n");
	/* diagonal invertida, ayuda a poner una diagonal para separar el texto*/
	
	printf ("hola tocayo, como esta\?\n");
	/* signo de interrogacion, pone el signo de interrogacion*/
	
	
	/* para los de cadena de salida nos ayudan a imprimir diferentes 
	tipos de datos*/
	printf("para un numero entero decimal se utiliza: ,%d\n " );
	printf("para un numero de punto flotante se usa: ,%f\n");
	printf("para un numero de punto flotante en notacion cientifica se usa: ,%e");
	printf("\npara un numero en exadecimal se utiliza: ,%x");
	printf("\npara algun caracter como una letra se utiliza: ,%c");
	printf("para un conjunto de caracteres como un nombre se utiliza ,%s");
		
	
	
	return 0;
}
