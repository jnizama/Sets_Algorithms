#include <iostream>
#include <iomanip>

int main() {
    double V, LE, LS, l0;

    // Solicitar al usuario los valores iniciales
    std::cout << "Introduce la capacidad del depósito (V) en litros: ";
    std::cin >> V;
    std::cout << "Introduce los litros por segundo que se introducen (LE): ";
    std::cin >> LE;
    std::cout << "Introduce los litros por segundo que se extraen (LS): ";
    std::cin >> LS;
    std::cout << "Introduce los litros iniciales en el depósito (l0): ";
    std::cin >> l0;

    double l = l0; // Volumen inicial de agua en el depósito

    bool rebasaraCapacidad = false;
    bool vaciaraDeposito = false;
    bool permaneceIgual = true;

    std::cout << "\nTiempo (s)\tVolumen (L)" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    for (int t = 1; t <= 60; ++t) {
        l += (LE - LS); // Actualizar el volumen de agua en el depósito

        if (l > V) {
            rebasaraCapacidad = true;
            l = V; // Si se rebasa la capacidad, se ajusta al máximo
        }
        if (l < 0) {
            vaciaraDeposito = true;
            l = 0; // Si se vacía el depósito, se ajusta a cero
        }
        if (LE != LS) {
            permaneceIgual = false;
        }

        std::cout << std::setw(9) << t << "\t" << std::setw(9) << std::fixed << std::setprecision(2) << l << std::endl;
    }

    std::cout << "\nResultado final: ";
    if (rebasaraCapacidad) {
        std::cout << "El depósito rebasará la capacidad de almacenamiento." << std::endl;
    }
    else if (vaciaraDeposito) {
        std::cout << "El depósito se vaciará." << std::endl;
    }
    else if (permaneceIgual) {
        std::cout << "El depósito permanecerá siempre con la misma cantidad de agua." << std::endl;
    }
    else {
        std::cout << "El depósito no rebasará la capacidad de almacenamiento ni se vaciará." << std::endl;
    }

    return 0;
}
