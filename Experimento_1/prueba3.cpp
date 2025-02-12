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
    int a, b, c;
    
    cout << "------------------------------------------------------------\n";
    cout << "Ingrese la altura del triangulo a: ";
    cin >> a;
    cout << "\n Ingrese la altura del triangulo b: ";
    cin >> b;
    cout << "\n Ingrese la altura del triangulo c: ";
    cin >> c;
    cout << "------------------------------------------------------------\n";
    
    cout << "Imprimiendo triangulo de altura: " << a;
    imprimirAsterisco(a);
    cout << "Imprimiendo triangulo de altura: " << b;
    imprimirAsterisco(b);
    cout << "Imprimiendo triangulo de altura: " << c;
    imprimirAsterisco(c);

    return 0;
}