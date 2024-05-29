#include <iostream>
#include <cmath>

void calcular_depreciacion(double cantidad, int anios) {
    // Calcular la suma de los d�gitos de los a�os
    int suma_digitos = 0;
    for (int i = 1; i <= anios; i++) {
        suma_digitos += i;
    }

    // Para cada a�o, calcular y mostrar la depreciaci�n
    for (int i = 1; i <= anios; i++) {
        double factor = anios - i + 1;
        double depreciacion = (factor / suma_digitos) * cantidad;
        std::cout << "A�o " << i << ": $" << std::fixed << depreciacion << std::endl;
    }
}

int main_25() {
    double cantidad_a_depreciar;
    int numero_de_anios;

    std::cout << "Ingrese la cantidad a depreciar: ";
    std::cin >> cantidad_a_depreciar;

    std::cout << "Ingrese el n�mero de anios de depreciaci�n: ";
    std::cin >> numero_de_anios;

    calcular_depreciacion(cantidad_a_depreciar, numero_de_anios);

    return 0;
}
