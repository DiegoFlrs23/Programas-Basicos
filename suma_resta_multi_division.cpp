#include <iostream>
using namespace std;

int opcion;
float primero = 0, segundo = 0, resultado;

int main()
{
	cout<<"Elija el tipo de operacion que quiera realizar: 1)suma ; 2)resta ; 3)multiplicacion ; 4)division"<<endl;
	cin>>opcion;
	
	switch(opcion)
	{
		case 1 :
			cout<<"Introduzca su primer numero"<<endl;
			cin>>primero;
			cout<<"Introduzca su segundo numero"<<endl;
			cin>>segundo;
			resultado = primero+segundo;
			cout<<"La suma es: "<<resultado<<endl;
			break;
		case 2 :
			cout<<"Introduzca su primer numero"<<endl;
			cin>>primero;
			cout<<"Introduzca su segundo numero"<<endl;
			cin>>segundo;
			resultado = primero-segundo;
			cout<<"La resta es: "<<resultado<<endl;
			break;
		case 3 :
			cout<<"Introduzca su primer numero"<<endl;
			cin>>primero;
			cout<<"Introduzca su segundo numero"<<endl;
			cin>>segundo;
			resultado = primero*segundo;
			cout<<"La multiplicacion es: "<<resultado<<endl;
			break;
		case 4 :
		cout<<"Introduzca su primer numero"<<endl;
			cin>>primero;
			cout<<"Introduzca su segundo numero"<<endl;
			cin>>segundo;
			resultado = primero/segundo;
			cout<<"La division es: "<<resultado<<endl;
			break;
			default :
				cout<<"Tiene que elegir entre las opciones 1, 2, 3 o 4"<<endl;
	}
}
