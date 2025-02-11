#include <iostream>
using namespace std;

int imprimirAsterisco(int times){
    for (int i = 1; i <= times; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main(){
    int number;
    cout << "Ingrese un numero...\n";
    cin >> number;
    
    if (number == 1)
    {
        cout << "*\n";
    }else{
        imprimirAsterisco(number);
    }
    
    return 0;
}
