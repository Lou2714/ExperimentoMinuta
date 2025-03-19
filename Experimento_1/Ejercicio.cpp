#include <iostream>

using namespace std;

void imprimirTriangulo(int altura) {
    cout << "\n";
    //Simboliza las filas de las matriz
    for (int i = 1; i <= altura; i++)
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

int main() {
    imprimirTriangulo(1);
    imprimirTriangulo(5);
    imprimirTriangulo(10);

    return 0;
}