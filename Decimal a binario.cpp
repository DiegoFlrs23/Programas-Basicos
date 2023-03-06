#include <iostream>
using namespace std;


string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main() {
    int number=0;
    cout<<"Ingresa un numero:"<<endl;
    cin>>number;

    cout << "decimal: " << number << endl;
    cout << "binary : " << toBinary(number) << endl;


}
