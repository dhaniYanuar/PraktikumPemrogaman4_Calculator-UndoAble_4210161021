#include <iostream>
using namespace std;

class Operator{
private :
	char myOperator;
	int operand1,operand2, result;
public :
	virtual void setOperator(char _operator,int _operand1,int _operand2);
	virtual void add();
	virtual void multiplication();
	virtual void substract();
	virtual void divide();
	virtual void display();
	virtual int getResult();
};
