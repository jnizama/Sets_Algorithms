#include "Entidad.h"
#include <string>

void Entidad::add(string nombre, string presidente ,double inversion)
{
    this->nombre = nombre;
    this->presidente = presidente;
    this->inversion = inversion;
}
