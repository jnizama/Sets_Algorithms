#include "Person.h"
#include <string>

void Person::add(string name, int edad)
{
    this->edad = edad;
    this->name = name;
}

std::string Person::getInformation()
{
    string fullName = name;
    return fullName;
}
