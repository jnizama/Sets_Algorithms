//usando b�squeda binaria
#include <iostream>

// Funci�n para encontrar el n�mero m�s peque�o en un array ordenado
int encontrarMinimo(int arr[], int tam) {
    return arr[0]; // En un array ordenado, el primer elemento es el m�nimo
}

// Funci�n de b�squeda binaria
int busquedaBinaria(int arr[], int tam, int objetivo) {
    int inicio = 0;
    int fin = tam - 1;
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (arr[medio] == objetivo) {
            return medio; // El elemento objetivo se encuentra en el �ndice medio
        }
        if (arr[medio] < objetivo) {
            inicio = medio + 1; // El objetivo est� en la mitad derecha
        }
        else {
            fin = medio - 1; // El objetivo est� en la mitad izquierda
        }
    }
    return -1; // El elemento no se encuentra en el array
}

int main3() {
    const int TAM = 10; // Tama�o del array
    int arr[TAM] = { 1, 2, 3, 5, 7, 8, 10, 14, 17, 20 }; // Array ordenado

    // Encontrar el n�mero m�s peque�o
    int minimo = encontrarMinimo(arr, TAM);
    std::cout << "El n�mero m�s peque�o en el array es: " << minimo << std::endl;

    // Buscar un n�mero espec�fico usando b�squeda binaria
    int objetivo;
    std::cout << "Ingrese el n�mero a buscar: ";
    std::cin >> objetivo;

    int resultado = busquedaBinaria(arr, TAM, objetivo);

    if (resultado != -1) {
        std::cout << "El n�mero " << objetivo << " se encuentra en la posici�n " << resultado << "." << std::endl;
    }
    else {
        std::cout << "El n�mero " << objetivo << " no se encuentra en el array." << std::endl;
    }

    return 0;
}
