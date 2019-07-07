#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main () {
	float prem,side,box,gen;

	cout << "Input the number of PREMIUM tickets sold: ";
	cin >> prem;
	cout << "\nInput the number of SIDELINE tickets sold: ";
	cin >> side;
	cout << "\nInput the number of BOX tickets sold: ";
	cin >> box;
	cout << "\nInput the number of GENERAL ADMISSION tickets sold: ";
	cin >> gen;

	cout << "\n\n\nNumber of tickets sold: \n\n" << "PREMIUM [$250]: " << prem*250 << "\nSIDELINE [$100]: " << side*100 
		<< "\nBOX [$50]: " << box*50 << "\nGENERAL ADMISSION [$25]: " << gen*25;
	cout << "\n\nTotal number of tickets sold: " << fixed << setprecision(2) << prem+side+gen+box;
	cout << "\nTotal sale amount: " << fixed << setprecision(2) << (prem*250)+(side*100)+(box*50)+(gen*25);

	getch();
	return 0;

}