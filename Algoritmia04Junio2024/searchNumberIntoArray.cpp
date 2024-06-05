#include <iostream>

// Funci�n de b�squeda binaria
int busquedaBinaria3(int arr[], int tam, int objetivo) {
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

int main() {
    const int TAM = 10; // Tama�o del array
    int arr[TAM] = { 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 }; // Array ordenado

    // Solicitar al usuario que ingrese el n�mero a buscar
    int objetivo;
    std::cout << "Ingrese el n�mero a buscar: ";
    std::cin >> objetivo;

    // Llamar a la funci�n de b�squeda binaria
    int resultado = busquedaBinaria3(arr, TAM, objetivo);

    // Mostrar el resultado de la b�squeda
    if (resultado != -1) {
        std::cout << "El n�mero " << objetivo << " se encuentra en la posici�n " << resultado << "." << std::endl;
    }
    else {
        std::cout << "El n�mero " << objetivo << " no se encuentra en el array." << std::endl;
    }

    return 0;
}
