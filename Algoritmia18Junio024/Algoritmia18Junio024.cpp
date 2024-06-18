#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Definición de la estructura para representar un punto tridimensional
struct Punto {
    double x;
    double y;
    double z;
};

int main() {
    vector<Punto> puntos; // Vector para almacenar los puntos tridimensionalesr
    ifstream archivo("coordenas.txt"); // Abrir el fichero de coordenadas

    if (!archivo) {
        cerr << "No se pudo abrir el archivo 'coordenadas.txt'." << endl;
        return 1;
    }

    double x, y, z;
    while (archivo >> x >> y >> z) {
        Punto punto = { x, y, z }; // Crear un punto con las coordenadas leídas
        puntos.push_back(punto); // Agregar el punto al vector
    }

    archivo.close(); // Cerrar el fichero después de leer

    // Mostrar los puntos almacenados en el vector (solo para verificar)
    for (const auto& punto : puntos) {
        cout << "Punto: (" << punto.x << ", " << punto.y << ", " << punto.z << ")" << endl;
    }

    return 0;
}
