//Recursión ?
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
    int number;
    int n = 0;
    cout << "------------------------------------------------------------\n";
    cout << "Ingrese un numero: ";
    cin >> number;
    cout << "------------------------------------------------------------\n";
    
    if (number == 1)
    {
        cout << "*\n";
    }else{
        imprimirAsterisco(number, n);
    }
    
    return 0;
}
