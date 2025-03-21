#include <iostream>
using namespace std;
 
int imprimirAsterisco(int filas){
        cout << "\n";
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
    int number[3];
    cout << "------------------------------------------------------------\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese la altura del triangulo: ";
        cin >> number[i];
    }
    cout << "------------------------------------------------------------\n";
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Imprimiendo triangulo de altura: " << number[i];
        imprimirAsterisco(number[i]);
    }
    
    return 0;
}
