#pragma once
#include<string>
#include<iostream>

using namespace std;

class Airplane
{
private:
	int passenger;
	string version;
public:
	Airplane();
	Airplane(string version,int passenger);

	friend bool operator>(const Airplane& c1, const Airplane& c2);
	friend bool operator==(const Airplane& c1, const Airplane& c2);

	void operator++(int);
	void operator--(int);

	void show();
};

