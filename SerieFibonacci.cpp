#include <iostream>
using namespace std;
int main(){
	//declaro las variables a utilizar
	int a=0, b=1, c=1;
	int lim;
	int op;
	//uso un do while para poder hacer laopcion de regresar al principio
do{
	//pregunto al usuario cual sera el limite
	cout<<"\nque limite quieres para la serie fibonacci? \n"<<endl;
	cin>>lim;
	//pregunto cual ciclo quuiere realizar
	cout<<"que ciclo quieres usar?\n";
	cout<<"1.-for\n";
	cout<<"2.-while\n ";
	cout<<"3.-do while\n";
	cout<<"4.-nada\n";
cin>>op;
	//utilizo un switch para los distintos casos que habra 
	switch(op){
		case 1:
			//pongo los ciclos segun los casos anteriores
			cout<<"serie fibonacci con for:\n";
			for(int i=0; a<=lim;i++){
				//utilizo el siguiente algoritmo de la serie fibonacci 
				cout<<a<<",";
				c=a+b;
				a=b;
				b=c;
			}
			break;
			//el break se utiliza al final de cada caso para cerrarlo
			case 2:
				cout<<"serie fibonacci con while:\n";
				while(a<=lim){
					cout<<a<<",";
					c=a+b;
					a=b;
					b=c;
				}
				break;
				case 3:
					cout<<"serie fibonacci con do while:\n";
					do{
					cout<<a<<",";
					c=a+b;
					a=b;
					b=c;
				}while (a<=lim);
				break;
				case 4:
				break;
				
	}
	//cierro el do while al final de todo 
	//para que cuando el usuario ponga 4 se reinicie el proceso
}while(op!=4);

	
return 0;
}
	
	
	
	

