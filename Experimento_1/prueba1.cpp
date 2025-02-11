#include <iostream>
using namespace std;

int imprimirAsterisco(int filas){
    //Simboliza las filas de las matriz
    for (int i = 1; i <= filas; i++)
    {
        //Mientras el valor de j sea menos que i, va a imprimir j-veces el *, simboliza columnas
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        //Salto de linea
        cout << "\n";
    }
}

int main(){
    int number;
    cout << "------------------------------------------------------------\n";
    cout << "Ingrese un numero: ";
    cin >> number;
    cout << "------------------------------------------------------------\n";
    
    if (number == 1)
    {
        cout << "*\n";
    }else{
        imprimirAsterisco(number);
    }
    
    return 0;
}
