#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	float nBalance,payment,d1,d2,interest,avgDB;

	cout << "Please input the balance shown in the bill: ";
	cin >> nBalance;
	cout << "\nPlease input the payment made: ";
	cin >> payment;
	cout << "\nPlease input the number of days in the billing cycle: ";
	cin >> d1;
	cout << "\nPlease input the number of days that payment is made before billing cycle: ";
	cin >> d2;

	avgDB = (nBalance*d1-payment*d2)/d1;
	interest = avgDB*0.0097;

	cout << "\n\nThe interest for the unpaid balance is: $" << interest;
	getch();
	return 0;
}