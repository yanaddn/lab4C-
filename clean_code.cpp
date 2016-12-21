// Lab #4 C++. Class hierarchy.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

class Planes
{
public:
	virtual void out() = 0;
	virtual void get() = 0;
	double Weight;
	int Seats;

	void basicInfo()
	{
		cout << "Weight: " << Weight << endl;
		cout << "Number of seats: " << Seats << endl;
	}
};

class Military : public Planes
{
public:
	double Weapons;
	void get() {
		cout << "Weight: ";
		cin >> Weight;
		cout << "Number of seats: ";
		cin >> Seats;
		cout << "Number of weapons: ";
		cin >> Weapons;

	}
};
class Civilc : public Planes
{
public:
	int Price;
	void get() {
		cout << "Weight: ";
		cin >> Weight;
		cout << "Number of seats: ";
		cin >> Seats;
		cout << "Price: ";
		cin >> Price;
	}
};
class Passenger : public Civilc
{
public:
	void out()
	{
		cout << "Price: " << Price;
	}
};
class Sport : public Civilc
{
public:
	void out()
	{
		cout << "Price: " << Price;
	}
};
class Glider : public Civilc
{
public:
	void out()
	{
		cout << "Price: " << Price;
	}
};

class Destroyer : public Military
{
public:
	void out()
	{
		cout << "Number of weapons: " << Weapons;
	}
};
class Bomber : public Military
{
public:
	void out()
	{
		cout << "Number of weapons: " << Weapons;
	}
};

int main()
{
	int planeType;
	Planes *plane[6];
	plane[1] = new Passenger;
	plane[2] = new Sport;
	plane[3] = new Glider;
	plane[4] = new Destroyer;
	plane[5] = new Bomber;
	cout << "1. Passenger plane\n";
	cout << "2. Sport plane\n";
	cout << "3. Glider\n";
	cout << "4. Destroyer\n";
	cout << "5. Bomber\n";
	cout << endl;
	cin >> planeType;
	cout << endl;
	plane[planeType]->get();
	cout << endl;
	plane[planeType]->basicInfo();
	plane[planeType]->out();
	system("pause");
	return 0;
}
