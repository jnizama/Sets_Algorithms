// TrabajoFinalAlgoritmia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
    int opcSelected = 0;
    std::cout << "Sistema de Mantenimiento Departameno-Provincia-Distrito!\n";
    std::cout << "1.) Agregar Departamento!\n";
    std::cout << "2.) Agregar Provincia!\n";
    std::cout << "3.) Agregar Distrito!\n";
    std::cout << "4.) Ver Departamento!\n";
    std::cout << "5.) Ver Provincia!\n";
    std::cout << "6.) Ver Distrito!\n";
    std::cout << "7.) Quitar Distrito por Provincia!\n";
    std::cout << "8.) Salir!\n";

    std::cin >> opcSelected;

    switch (opcSelected) {
    case 1:
        std::cout << "Seleccionó Agregar Dpto";
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    default:
        return 0;
    }
}