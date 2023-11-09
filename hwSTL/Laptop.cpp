#include "Laptop.h"
#include <iostream>
using namespace std;

Laptop::Laptop(string name, string CPU, string color, int year)
{
	this->name = name;
	this->CPU = CPU;
	this->color = color;
	this->year = year;
}
void Laptop::setName(string name)
{
	this->name = name;
}
void Laptop::setCPU(string CPU) 
{
	this->CPU = CPU;
}
void Laptop::setColor(string color)
{
	this->color = color;
}
void Laptop::setYear(int nayear)
{
	this->year = year;
}

string Laptop::getName()
{
	return name;
}
string Laptop::getCPU()
{
	return CPU;
}
string Laptop::getColor()
{
	return color;
}
int Laptop::getYear()
{
	return year;
}
void Laptop::Show()
{
	cout << "\nName: " << name;
	cout << "\nCPU: " << CPU;
	cout << "\nColor: " << color;
	cout << "\nYear: " << year;
}
ostream& operator<<(ostream& out, const  Laptop& obj)
{
	cout << "\nName: " << obj.name;
	cout << "\nCPU: " << obj.CPU;
	cout << "\nColor: " << obj.color;
	cout << "\nYear: " << obj.year;
	return out;
}