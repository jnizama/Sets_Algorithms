#include <iostream>

using namespace std;

int main2() {
    int numero;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaMultiplos5 = 0;

    // Solicitar al usuario que ingrese un n�mero entero
    cout << "Ingrese un n�mero entero: ";
    cin >> numero;

    // Bucle para calcular las sumas
    for (int i = 1; i <= numero; i++) {
        if (i % 2 == 0) {
            sumaPares += i;
        }

        if (i % 2 != 0) {
            sumaImpares += i;
        }

        if (i % 5 == 0) {
            sumaMultiplos5 += i;
        }
    }

    // Mostrar los resultados
    cout << "La suma de todos los n�meros pares desde 1 hasta " << numero << " es: " << sumaPares << endl;
    cout << "La suma de todos los n�meros impares desde 1 hasta " << numero << " es: " << sumaImpares << endl;
    cout << "La suma de todos los m�ltiplos de 5 desde 1 hasta " << numero << " es: " << sumaMultiplos5 << endl;

    return 0;
}
