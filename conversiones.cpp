#include <iostream>
using namespace std;

int opcion;
float km, mi, me, in, lb, kl;

int main()
{
	cout<<"Conversiones:"<<endl;
	cout<<"1) kilometros a millas o 4) si la desea inversa"<<endl;
	cout<<"2) metros a pulgadas o 5) si la desea inversa"<<endl;
	cout<<"3) libras a kilos o 6) si la desea inversa"<<endl;
	cout<<"*Coloque el numero en negativo si deasea la operacion inversa*"<<endl;
	cin>>opcion;
	
	switch(opcion)
	{
		case 1 :
			cout<<"->Kilometros a millas"<<endl;
			cout<<"introduzca su medida:"<<endl;
			cin>>km;
			mi=km/1.609;
			cout<<"su medida es de "<<mi<<" millas"<<endl;
			break;
		case 2 :
			cout<<"->Metros a pulgadas"<<endl;
			cout<<"introduzca su medida:"<<endl;
			cin>>me;
			in=me*39.37;
			cout<<"su medida es de "<<in<<" pulgadas"<<endl;
			break;
		case 3 :
			cout<<"->Libras a kilos"<<endl;
			cout<<"introduzca su masa:"<<endl;
			cin>>lb;
			kl=lb/2.205;
			cout<<"su masa es de "<<kl<<" kilos"<<endl;
			break;
		case 4 :
			cout<<"->Millas a kilometros"<<endl;
			cout<<"introduzca su medida:"<<endl;
			cin>>mi;
			km=mi*1.609;
			cout<<"su medida es de "<<km<<" kilometros"<<endl;
			break;
		case 5 :
			cout<<"->Pulgadas a Metros"<<endl;
			cout<<"introduzca su medida:"<<endl;
			cin>>in;
			me=in/39.37;
			cout<<"su medida es de "<<me<<" metros"<<endl;
			break;
		case 6 :
			cout<<"->Kilos a libras"<<endl;
			cout<<"introduzca su masa:"<<endl;
			cin>>kl;
			lb=kl*2.205;
			cout<<"su masa es de "<<lb<<" libras"<<endl;
			break;
			default :
				cout<<"No reconocemos esta opcion"<<endl;
	}
}
