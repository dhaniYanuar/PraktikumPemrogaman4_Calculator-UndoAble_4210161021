#include <iostream>
#include "Operator.h"
using namespace std;

void Operator::setOperator(char _operator,int _operand1, int _operand2){
	myOperator = _operator;
	operand1 = _operand1;
	operand2 = _operand2;
	switch(myOperator){
		case '+': 
			add();
			break;
		case '-':
			substract();
			break;
		case '*':
			multiplication();
			break;
		case '/':
			divide();
			break;
	}
	display();
}

void Operator::add(){
	result = operand1 + operand2;
}
void Operator::multiplication(){
	
}
void Operator::substract(){
	result = operand1 - operand2;
}
void Operator::divide(){
	
}

void Operator::display(){
	cout << "Hasil : "<< 
	result << endl;
}
int Operator::getResult(){
	return result;
}
