// Algoritmia28Mayo2024.cpp : 

#include <iostream>
#include <fstream>
#include "Person.h"

using namespace std;

int saludo();
int matriz();
void punterocaracter();
void Ejercicio06();
//void Ejercicio09();
void ArrayDeUnArchivo();


int main()
{

    Person persons[100];
    for (int x = 0; x <= 4; x++) {
        Person p;
        p.add("Benito", 18);
        persons[x] = p;
    }
    for (int x = 0; x <= 4; x++) {
        cout << " El nombre es " << persons[x].getInformation() << endl;
    }


    saludo();
    matriz();
    punterocaracter();
    //Ejercicio06();
    //Ejercicio09();
    ArrayDeUnArchivo();
}
int saludo() {
    // Declaración y inicialización de un array de caracteres
    char saludo[] = { 'H', 'o', 'l', 'a', '\0' };

    // Otra forma de inicializar un array de caracteres (cadena de texto)
    char otroSaludo[] = "Hola";

    std::cout << saludo << std::endl;
    std::cout << otroSaludo << std::endl;

    return 0;
}
int matriz() {
    // Declaración e inicialización de un array bidimensional (matriz) de 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Iterar sobre el array bidimensional
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "Elemento en [" << i << "][" << j << "] : " << matriz[i][j] << std::endl;
        }
    }

    return 0;
}
void punterocaracter () {
    const char* colores[] = { "Rojo", "Verde", "Azul" };

    for (int i = 0; i < 3; ++i) {
        std::cout << "Color en colores[" << i << "] : " << colores[i] << std::endl;
    }

}
void Ejercicio06() {
        int numeros[10];
        int pares = 0;
        int maximo;
        int minimo;

        // Pedir 10 números enteros por teclado
        std::cout << "Introduce 10 números enteros:" << std::endl;

        for (int i = 0; i < 10; ++i) {
            std::cout << "Número " << i + 1 << ": ";
            std::cin >> numeros[i];

            // Verificar si el número es par
            if (numeros[i] % 2 == 0) {
                pares++;
            }

            // Inicializar maximo y minimo con el primer número
            if (i == 0) {
                maximo = numeros[i];
                minimo = numeros[i];
            }
            else {
                // Actualizar el valor máximo
                if (numeros[i] > maximo) {
                    maximo = numeros[i];
                }

                // Actualizar el valor mínimo
                if (numeros[i] < minimo) {
                    minimo = numeros[i];
                }
            }
        }

        // Imprimir resultados
        std::cout << "Cantidad de números pares: " << pares << std::endl;
        std::cout << "El valor del número máximo es: " << maximo << std::endl;
        std::cout << "El valor del número mínimo es: " << minimo << std::endl;


}
void Ejercicio09() {
    std::string frase;
    int totalCaracteres = 0;
    int cuentaVocales[5] = {0}; // Para almacenar las frecuencias de 'a', 'e', 'i', 'o', 'u'

    // Pedir la frase al usuario
    std::cout << "Introduce una frase: ";
    std::getline(std::cin, frase);

    // Contar las vocales y los caracteres totales
    for (char c : frase) {
        // Convertir el carácter a minúscula para uniformidad
        c = std::tolower(c);

        // Contar caracteres (excluyendo espacios)
        if (c != ' ') {
            totalCaracteres++;
        }

        // Contar vocales
        switch (c) {
            case 'a': cuentaVocales[0]++; break;
            case 'e': cuentaVocales[1]++; break;
            case 'i': cuentaVocales[2]++; break;
            case 'o': cuentaVocales[3]++; break;
            case 'u': cuentaVocales[4]++; break;
        }
    }

    // Imprimir las frecuencias de las vocales
    const char* vocales = "aeiou";
    std::cout << "Frecuencia de cada vocal con respecto al total de caracteres:\n";
    for (int i = 0; i < 5; ++i) {
        double frecuencia = (totalCaracteres > 0) ? (static_cast<double>(cuentaVocales[i]) / totalCaracteres) * 100 : 0;
        std::cout << vocales[i] << ": " << cuentaVocales[i] << " veces (" << frecuencia << "%)\n";
    }
}
void ArrayDeUnArchivo() {
    std::ifstream in;
    int pos = 0;
    string entidades[10];
    
    ifstream inputFile("d:\\entidades.txt");

    // Variable to store each line from the file 
    string line;

    // Read each line from the file and print it 
    while (getline(inputFile, line)) {
        
        entidades[pos] = line;        
        cout << line << endl;
        pos++;
    }
    // Always close the file when done 
    inputFile.close();

    //print o imprime el arreglo
    for (int x = 0; x <= pos; x++) {
        cout << entidades[x] << endl;
    }
    
}