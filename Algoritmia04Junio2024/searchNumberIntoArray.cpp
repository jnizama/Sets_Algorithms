#include <iostream>

// Función de búsqueda binaria
int busquedaBinaria3(int arr[], int tam, int objetivo) {
    int inicio = 0;
    int fin = tam - 1;
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (arr[medio] == objetivo) {
            return medio; // El elemento objetivo se encuentra en el índice medio
        }
        if (arr[medio] < objetivo) {
            inicio = medio + 1; // El objetivo está en la mitad derecha
        }
        else {
            fin = medio - 1; // El objetivo está en la mitad izquierda
        }
    }
    return -1; // El elemento no se encuentra en el array
}

int main() {
    const int TAM = 10; // Tamaño del array
    int arr[TAM] = { 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 }; // Array ordenado

    // Solicitar al usuario que ingrese el número a buscar
    int objetivo;
    std::cout << "Ingrese el número a buscar: ";
    std::cin >> objetivo;

    // Llamar a la función de búsqueda binaria
    int resultado = busquedaBinaria3(arr, TAM, objetivo);

    // Mostrar el resultado de la búsqueda
    if (resultado != -1) {
        std::cout << "El número " << objetivo << " se encuentra en la posición " << resultado << "." << std::endl;
    }
    else {
        std::cout << "El número " << objetivo << " no se encuentra en el array." << std::endl;
    }

    return 0;
}
