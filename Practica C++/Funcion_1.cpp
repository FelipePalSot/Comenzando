/*
Realizar un Programa que despliegue la información básica de 4 trabajadores 
(Nombre, Edad, Puesto de trabajo y Salario)
 e imprima en pantalla el nombre del trabajador más remunerado y el trabajador más joven.
*/
#include<iostream>
#include<stdlib.h>
using namespace std ;

void imprimirDatos(string nombre ,int edad ,string puesTrab ,int salario);
int main(){
	system("Color F0");
	string nombre ;
	int edad ;
	string puesTrab ;
	int salario ;
	

		cout<<"----->Ingresar el nombre:  " ;
		cin>>nombre ;
		cout<<"----->Ingresar la edad:  " ;
		cin>>edad ;
		cout<<"----->Ingresar el puesTrab:  " ;
		cin>>puesTrab ;
		cout<<"----->Ingresar el salario:  " ;
		cin>>salario ;
	
	imprimirDatos(nombre , edad , puesTrab , salario );
	return 0 ;
}

void imprimirDatos(string nombre ,int edad ,string puesTrab ,int salario){
	cout<<"\tSu nombre es : "<<nombre<<endl;
	cout<<"\tSu edad es : "<<edad<<endl;
	cout<<"\tSu puesto de trabajo es : "<<puesTrab<<endl;
	cout<<"\tSu salario es :"<<salario<<endl ;
}
