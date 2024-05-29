#include <iostream>
#include <cmath>

// Función para calcular la sumatoria
double calcularSumatoria(int n) {
    double sumatoria = 0.0;

    for (int i = 2; i <= n; ++i) {
        sumatoria += (1 - pow(-1, i)) / pow(i, 2);
    }

    return sumatoria;
}

int main_23() {
    int n;

    std::cout << "Introduce el valor de n: ";
    std::cin >> n;

    // Verificar que n sea mayor o igual a 2
    if (n < 2) {
        std::cout << "El valor de n debe ser mayor o igual a 2." << std::endl;
        return 1;
    }

    double resultado = calcularSumatoria(n);
    std::cout << "La sumatoria es: " << resultado << std::endl;

    return 0;
}
