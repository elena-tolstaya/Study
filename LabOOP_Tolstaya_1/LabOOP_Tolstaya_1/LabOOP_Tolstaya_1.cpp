// Arithmetical expression calculations
// Expression Variant 24: (y=sqrt(15*a)+b-a/4)/(c*d-1)

#include "stdafx.h"
#include "ExprClass.h"
#include <iostream>
#include <conio.h>
#include <typeinfo.h>
#include <iomanip>
using namespace std;

template <class T> //functions overload
void Input(T& k, const char* INPUT)
{
	bool E = false;
	while (!E)
	{
		E = true;//Assume the cin will be of correct type
		cout << "Please input variable " << INPUT
			<< " of type " << typeid(k).name() << "   ";
		cin >> k;
		if (cin.rdstate())  //or (cin.fail() || cin.bad())
		{
			cin.clear(); //This corrects the stream.
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //This skips the left over stream data.  //Question: Why there is an endless cycle w/o ignore()?
			cout << "Data type is incorrect" << endl;
			E = false;
		}
	}
	cout << "Your input is: " << INPUT << " = " << k << endl;
}

int main()
{
	int a2;
	float b2;
	double c2;
	short d2;
	int ESC = 27, TestNum = 1, i = 0;
	cout << setprecision(16);
#ifdef _DEBUG
	cout << " ===================== Debug Mode =====================" << endl;
#endif
	do
	{
		cout << "\n--------- test number" << ++i << " -----------" << endl;
		cout << "  The variant 24 is: " << endl;
		cout << "        y=sqrt(15*a)+b-a/4)/(c*d-1)" << endl;
		Input(a2, "a");
		Input(b2, "b");
		Input(c2, "c");
		Input(d2, "d");
		// Object creation
		ExprClass obj(a2, b2, c2, d2);
		// Calculations
		TestNum = obj.Check();
		/*obj.Expression();*/
	} while (TestNum != ESC);
	_getch();
	return 0;
}