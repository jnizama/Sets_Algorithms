#include <iostream>

// Funci�n que busca un car�cter en el array
//int buscarCaracter(char arr[], int tam, char objetivo) {
int buscarCaracter(int* arr[], int tam, char objetivo) {
    for (int i = 0; i < tam; ++i) {
        if (*arr[i] == objetivo) {
            return i; // Retorna la posici�n del car�cter encontrado
        }
    }
    return -1; // Retorna -1 si no se encuentra el car�cter
}

int main2() {
    
    int TAMANIO;

    
    char objetivo;
    std::cout << "Ingrese el tama�o de tu vector (array): ";
    std::cin >> TAMANIO;
    std::cout << "Ingrese el car�cter a buscar: ";
    std::cin >> objetivo;
    //char arr[TAMANIO] = { 'a', 'b', 'c', 'g', 'e', 'f', 'p', 'h', 'i', 'r' };
    int* arreglo = new int[TAMANIO];
    for (int x = 0; x <= TAMANIO; x++){
        std::cout << "Ingrese el valor para " << x << ":";
        std::cin >> arreglo[x];
    }
    int resultado = buscarCaracter(&arreglo, TAMANIO, objetivo);

    if (resultado != -1) {
        std::cout << "El car�cter '" << objetivo << "' se encuentra en la posici�n " << resultado << "." << std::endl;
    }
    else {
        std::cout << "El car�cter '" << objetivo << "' no se encuentra en el array." << std::endl;
    }

    return 0;
}
