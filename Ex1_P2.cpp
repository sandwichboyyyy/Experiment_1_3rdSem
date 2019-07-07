#include <iomanip>
#include <iostream>
#include <conio.h>
using namespace std;

int main () 
{
	float mass,dense,volume;
	cout << "Input the mass of the object in grams: ";
	cin >> mass;
	cout << "Input the density of the object in grams per cubic centimeters: ";
	cin >> dense;

	volume = (0.25*mass)/dense;
	cout << "\n\nThe volume of the object is: " << fixed << setprecision(2) << volume << " cubic centimeters";

	getch ();
	return 0;
}