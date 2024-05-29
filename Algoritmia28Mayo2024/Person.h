#include <string>
using namespace std;

#define wchar_t String

class Person
{
private:
	string name;
	int edad;
public:
	void add(string name, int edad);
	string getInformation();
};