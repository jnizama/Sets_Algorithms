#include <iostream>
#include <vector>
#include <string>

int multiplicarPor11(int N) {
    // Convertir el número a cadena para facilitar el acceso a los dígitos
    std::string N_str = std::to_string(N);
    int M = N_str.size();

    // Vector para almacenar los dígitos del resultado
    std::vector<int> resultado;

    // Agregar el primer dígito al resultado
    resultado.push_back(N_str[0] - '0');

    // Iterar sobre los dígitos del número
    for (int i = 1; i < M; ++i) {
        // Sumar el dígito actual con el dígito anterior
        int suma_digitos = (N_str[i - 1] - '0') + (N_str[i] - '0');
        resultado.push_back(suma_digitos);
    }

    // Agregar el último dígito al resultado
    resultado.push_back(N_str[M - 1] - '0');

    // Manejar el acarreo en el resultado
    for (int i = resultado.size() - 1; i > 0; --i) {
        if (resultado[i] >= 10) {
            resultado[i] -= 10;
            resultado[i - 1] += 1;
        }
    }

    // Convertir la lista de resultado a una cadena
    std::string resultado_str;
    for (int digit : resultado) {
        resultado_str += std::to_string(digit);
    }

    // Convertir la cadena de resultado a un número entero
    int resultado_final = std::stoi(resultado_str);

    return resultado_final;
}

int main() {
    int N = 3247;
    std::cout << multiplicarPor11(N) << std::endl;  // Debería imprimir 35717
    return 0;
}
