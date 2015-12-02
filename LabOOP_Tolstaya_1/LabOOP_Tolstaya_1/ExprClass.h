//Header file. Class declaration 
//Expression Variant 24: y=sqrt(15*a)+b-a/4)/(c*d-1)

#ifndef __ExprClass_H
#define __ExprClass_H

static char* Division_by_Zero = "Division by Zero";
static char* Error_Res = "Overflow while result calculations";
static char* root = "Square root of a negative number does not exist";
static char* CONTINUE = "\n\n    Press any key to - CONTINUE or ESC to - EXIT .....\n";

class ExprClass
{
public:
	//Constructor
	ExprClass(int a1, float b1, double c1, short d1);
	//Destructor
	~ExprClass();
	void ExprClass::Expression();
	int ExprClass::Check();
private:
	int a;
	float b;
	double c;
	short d;
	double Result;
};
#endif