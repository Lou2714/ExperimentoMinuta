#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Ingrese un numero...\n";
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        cout << "*\n";
    }
    return 0;
}