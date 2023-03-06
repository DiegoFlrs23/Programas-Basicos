#include <iostream>
using namespace std;
 
int main(void)
{
	int mynum;
	cout << "\n    Entra un numero: ";
	cin >> mynum;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << "\n    En hexadecimal: " << mynum;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout << "\n    En Octal: " << mynum;
	cout.unsetf(ios::oct | ios::showbase);
	cout.setf(ios::dec);
	cout << "\n\n";
	system("pause");
	return 0;
}
