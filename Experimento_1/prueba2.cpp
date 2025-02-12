//Recursión
#include <iostream>
using namespace std;

int imprimirAsterisco(int filas, int n){
    //Si el valor de n iguala al número de filas, la recursión se detiene
    if (n == filas){
        return 0;
    }
    for (int i = 0; i <= n; i++){
        cout << "*";
    }
    cout << "\n";
    n++;
    //Caso recursivo
    imprimirAsterisco(filas, n);
}

int main(){
    int n = 0;
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
        cout << "Imprimiendo triangulo de altura: " << number[i] << "\n";
        imprimirAsterisco(number[i], n);
    }
    
    return 0;
}
