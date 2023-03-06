#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float c1, c2, h=0;
	
	cout<<"Introduzca el primer cateto: "<<endl;
	cin>>c1;
	cout<<"Introduzca el segundo cateto: "<<endl;
	cin>>c2;
	
	h=sqrt ((c1*c1)+(c2*c2));
	
	cout<<"La respuesta es: "<<h;
	
	return 0;
}
