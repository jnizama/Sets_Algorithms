#include <iostream>
#include <cmath>

void calcular_depreciacion(double cantidad, int anios) {
    // Calcular la suma de los dígitos de los años
    int suma_digitos = 0;
    for (int i = 1; i <= anios; i++) {
        suma_digitos += i;
    }

    // Para cada año, calcular y mostrar la depreciación
    for (int i = 1; i <= anios; i++) {
        double factor = anios - i + 1;
        double depreciacion = (factor / suma_digitos) * cantidad;
        std::cout << "Año " << i << ": $" << std::fixed << depreciacion << std::endl;
    }
}

int main_25() {
    double cantidad_a_depreciar;
    int numero_de_anios;

    std::cout << "Ingrese la cantidad a depreciar: ";
    std::cin >> cantidad_a_depreciar;

    std::cout << "Ingrese el número de anios de depreciación: ";
    std::cin >> numero_de_anios;

    calcular_depreciacion(cantidad_a_depreciar, numero_de_anios);

    return 0;
}
