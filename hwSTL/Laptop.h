#pragma once
#include <iostream>
using namespace std;
class Laptop
{
	string name;
	string CPU;
	string color;
	int year;
public:
		Laptop() = default;
		Laptop(string name, string CPU, string color, int year);
		void setName(string name);
		void setCPU(string CPU);
		void setColor(string color);
		void setYear(int nayear);
		string getName();
		string getCPU();
		string getColor();
		int getYear();
	
		friend ostream& operator<<(ostream& out, const Laptop& obj);
		void Show();
};

