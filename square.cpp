#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
int x;
int y;
string squarecmd;
string symbol;

cout << "> Enter 's' or 'square' for square and 'r' or 'rectangle' for rectangle!" << endl;

while (123 == 123)
{
cout << "Command: ";
cin >> squarecmd;

	if (squarecmd == "square" || squarecmd == "s")
	{
	cout << "> Enter symbol- ";
	cin >> setw(1) >> symbol;
	cin.ignore(999*999,'\n');
	cout << "\n> Ented width/heigh- ";
	cin >> x;
		for (int column = 0; column < 2*x + x/2 + 0.5; ++column)
		{
			cout << symbol;
		}
	cout << "\n";
		for (int row = 0; row < x; ++row)
		{
			cout << symbol;
			for (int column = 0; column < 2*x + x/2 + 0.5 - 2; ++column)
			{
				cout << " ";
			}
			cout << symbol << "\n";
		}
		for (int column = 0; column < 2*x + x/2 + 0.5 ; ++column)
		{
			cout << symbol;
		}
	cout << "\n";
	}
//---------------------------------------------------------------------->
	else if (squarecmd == "rectangle" || squarecmd == "r")
	{
	cout << "> Enter symbol- ";
	cin >> setw(1) >> symbol;
	cin.ignore(999*999,'\n');
	cout << "\n> Ented width- ";
	cin >> x;
	cout << "\n> Enter heigh- ";
	cin >> y;
	cout << "" <<endl;
		for (int column = 0; column < x; ++column)
		{
			cout << symbol;
		}
	
	cout << "\n";
		for (int row = 0; row < y; ++row)
		{
			cout << symbol;
			for (int column = 0; column < x - 2; ++column)
			{
				cout << " ";
			}
			cout << symbol << "\n";
		}
		for (int column = 0; column < x; ++column)
		{
			cout << symbol;
		}
			cout << "\n";
	}
//-------------------------------------------------------------------------->
	else if (squarecmd == "exit")
	{
	cout << "> Bye!" <<endl;
	return false;
	}

	else
	cout << "> Wrong input!\n";

}
}
