#include<iostream>
using namespace std;

//Defining Point as struct
struct Point {
	int x;	
	int y;
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	//Construct
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

//Defining Point as class

class Vehicle {

 private:
	int code;	
	string name;
	int year;

 public:
	string getName() {
		return name;
	}
	int getCode() {
		return code;
	}
	int getYear() {
		return year;
	}
	void setName(string name) {
		this->name = name;
	}
	void setCode(int code) {
		this->code = code;
	}
	void setYear(int year) {
		this->year = year;
	}
	Vehicle() { 
		
	}
	Vehicle(int code, string name, int year) { //constructor
		this->code = code;
		this->name = name;
		this->year = year;
	}
};

//Car
class Car : public Vehicle {

private:	
	string plate;

public:	
	string getPlate() {
		return plate;
	}
	void print() {
		cout << "\n\n The car name is: " << this->getName() << " it's year is " << this->getYear()<< " and his plate is: " << this->getPlate()<<"\n\n ";
	}
	Car(int code, string name, int year, string plate) {
		
		this->setCode(code);
		this->setName(name);
		this->setYear(year);
		this->plate = plate;
	}
};



int main(int args) {
	Point p1 (157, 154);
	cout << "\n\n The point (x) is : "<< p1.x <<"\n\n";
	cout << "\n\n The point (y) is : " << p1.y<<"\n\n";

	Vehicle vehiculo1(1213, "Moto", 1996);
	Vehicle vehiculo2(984, "Grúa", 2014);

	Car car(789, "Nissan", 2016, "UK-9851");
	car.print();
	
}