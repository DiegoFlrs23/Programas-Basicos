#include <iostream>
using namespace std;
main()
{
	int opcion=0;
	cout<<"Elija la figura que desee: "<<endl;
	cout<<"1) Cuadrado"<<endl;
	cout<<"2) triangulo"<<endl;
	cin>>opcion;
	switch(opcion)
	{
		case 1 :
			cout<<"-----"<<endl;
			cout<<"-----"<<endl;
			cout<<"-----"<<endl;
			break;
		case 2 :
			cout<<"  .  "<<endl;
			cout<<" ... "<<endl;
			cout<<"....."<<endl;
			break;
			default :
				cout<<"No encontramos esta opcion"<<endl;
	}
	system("pause");
}
