#include <iostream>
#include <list>
#include "Laptop.h"
using namespace std;

int main()
{
	Laptop l1("Lenovo", "Intel core i7", "Black", 2023);
	Laptop l2("HP", "Intel core i7", "Silver", 2022);
	Laptop l3("Asus", "Intel core i6", "Grey", 2023);


	list<Laptop> arr;

	arr.push_back(l1);
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;
	arr.push_front(l2);
	arr.push_back(l3);
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}
