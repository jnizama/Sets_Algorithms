//usando búsqueda binaria
#include <iostream>

// Función para encontrar el número más pequeño en un array ordenado
int encontrarMinimo(int arr[], int tam) {
    return arr[0]; // En un array ordenado, el primer elemento es el mínimo
}

// Función de búsqueda binaria
int busquedaBinaria(int arr[], int tam, int objetivo) {
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

int main3() {
    const int TAM = 10; // Tamaño del array
    int arr[TAM] = { 1, 2, 3, 5, 7, 8, 10, 14, 17, 20 }; // Array ordenado

    // Encontrar el número más pequeño
    int minimo = encontrarMinimo(arr, TAM);
    std::cout << "El número más pequeño en el array es: " << minimo << std::endl;

    // Buscar un número específico usando búsqueda binaria
    int objetivo;
    std::cout << "Ingrese el número a buscar: ";
    std::cin >> objetivo;

    int resultado = busquedaBinaria(arr, TAM, objetivo);

    if (resultado != -1) {
        std::cout << "El número " << objetivo << " se encuentra en la posición " << resultado << "." << std::endl;
    }
    else {
        std::cout << "El número " << objetivo << " no se encuentra en el array." << std::endl;
    }

    return 0;
}
