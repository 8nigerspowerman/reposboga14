#include "Airplane.h"
#include<string>
#include<iostream>

using namespace std;

Airplane::Airplane() {};

Airplane::Airplane(string version, int passenger) {
	this->passenger == passenger;
	this->version == version;
}

void Airplane::operator++(int) {
	this->passenger++;
}
void Airplane::operator--(int) {
	this->passenger--;
}

bool operator==(const Airplane& c1, const Airplane& c2) {
	return c1.version == c2.version;
}
bool operator>(const Airplane& c1, const Airplane& c2){
	return c1.passenger > c2.passenger;
}

void Airplane::show() {
	cout << this->passenger;
	cout << this->version;
}