#pragma once
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct Computer {
	char name[50] = "undefined";
	float frequency = 1.2;
	int RAM = 4;
	bool DVD_ROM = false;
	float price = 5000;

	void showInfo() {
		cout << setw(20) << "Name: " << name << endl;
		cout << setw(20) << "Frequency: " << frequency << "GHz" << endl;
		cout << setw(20) << "RAM: " << RAM << "Gb" << endl;
		cout << setw(20) << "DVD_ROM: " << boolalpha <<  DVD_ROM << endl;
		cout << setw(20) << "Price: " << price << "UAH" << endl;
		cout << "-----------------------------------------------\n";
	}
};