#include <string>
using namespace std;

#define wchar_t String

class Entidad
{
private:
	string nombre;
	string presidente;
	double inversion;
public:
	void add(string nombre, string presidente, double inversion);
};