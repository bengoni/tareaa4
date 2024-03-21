#include <iostream>
using namespace std;

int main() {
    int tam=0,suma=0,promedio=0;
    cout << "Cuantas notas desea ingresar: ";
    cin >> tam;
    int notas[tam];
    for (int i = 0; i < tam; i++) {
        coutc< "Ingrese nota " << i << ": ";
        cin >> notas[i];1
    }
    for (int i = 0; i < tam; i++) {
        suma += notas[i];
    }
    promedio = suma / tam;
    cout <<"el promedio es:"  <<promedio <<endl;
    return 0;
}
