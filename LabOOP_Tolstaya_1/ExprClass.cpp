//Class definition and calculations
//Expression Variant 24: (y=sqrt(15*a)+b-a/4)/(c*d-1)
//Adding comments to cpp file

#include <stdafx.h>
#include "ExprClass.h"
#include <iostream>
#include <conio.h>

using namespace std;

//Constructor
ExprClass::ExprClass(int a1, float b1, double c1, short d1)
{
#ifdef _DEBUG
	cout << "===============================================" << endl;
	cout << "========= Class data members creation =========" << endl;
	cout << "===============================================" << endl;
#endif
	a = a1;
	b = b1;
	c = c1;
	d = d1;
}
//Destructor
ExprClass::~ExprClass()
{
#ifdef _DEBUG
	cout << "===============================================" << endl;
	cout << "========= Class data members removing =========" << endl;
	cout << "===============================================" << endl;
#endif
}
void ExprClass::Expression()
{
	long double at, bt, dt, ct, numerator, denominator, Result;
	at = a, bt = b, ct = c, dt = d;
	cout << "   a = " << at << ";    b = " << bt << ";    c = " << ct << ";    d = " << dt << endl;
	if (at > 0)
	{
		//numerator
		numerator = (sqrt(15 * at) + bt - at / 4);
		cout << "Numerator is:" << numerator << endl;
		//denominator
		denominator = (ct*dt - 1);
		//division by zero check
		if (denominator != 0)
		{
			cout << "Denominator is:" << denominator << endl;
			Result = numerator / denominator;
			if (fabsl(Result) > DBL_MAX) throw Error_Res;
			cout << "\n Result y= " << Result;
		}
		else throw Division_by_Zero;
	}
	else throw root;

}
int ExprClass::Check()
{
	try
	{
		Expression();
		cout << CONTINUE << endl;
	}
	catch (char* value)
	{
		cout << "\n Exceptional situation handling" << endl;
		cout << "Error: ";
		cout << value << CONTINUE << endl;
	}
	catch (...)
	{
		cout << "\n Exceptional situation, quitting" << endl;
		_getch();
		throw;
	}
	return (_getch()); // ;
}