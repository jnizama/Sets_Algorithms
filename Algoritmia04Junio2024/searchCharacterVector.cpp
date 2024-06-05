#include <iostream>

// Función que busca un carácter en el array
//int buscarCaracter(char arr[], int tam, char objetivo) {
int buscarCaracter(int* arr[], int tam, char objetivo) {
    for (int i = 0; i < tam; ++i) {
        if (*arr[i] == objetivo) {
            return i; // Retorna la posición del carácter encontrado
        }
    }
    return -1; // Retorna -1 si no se encuentra el carácter
}

int main2() {
    
    int TAMANIO;

    
    char objetivo;
    std::cout << "Ingrese el tamaño de tu vector (array): ";
    std::cin >> TAMANIO;
    std::cout << "Ingrese el carácter a buscar: ";
    std::cin >> objetivo;
    //char arr[TAMANIO] = { 'a', 'b', 'c', 'g', 'e', 'f', 'p', 'h', 'i', 'r' };
    int* arreglo = new int[TAMANIO];
    for (int x = 0; x <= TAMANIO; x++){
        std::cout << "Ingrese el valor para " << x << ":";
        std::cin >> arreglo[x];
    }
    int resultado = buscarCaracter(&arreglo, TAMANIO, objetivo);

    if (resultado != -1) {
        std::cout << "El carácter '" << objetivo << "' se encuentra en la posición " << resultado << "." << std::endl;
    }
    else {
        std::cout << "El carácter '" << objetivo << "' no se encuentra en el array." << std::endl;
    }

    return 0;
}
