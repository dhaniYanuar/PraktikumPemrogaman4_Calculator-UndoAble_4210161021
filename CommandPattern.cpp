#include <iostream>
#include "CommandPattern.h"
using namespace std;

int main(){
	char _operator;
	char perintah;
	Stack myStack;
	Operator myOperator;
	int operand1, operand2;
	do{
		cout << "List Perintah :" << endl;
		cout << "'u' untuk Undo" << endl;
		cout << "'x' untuk melanjutkan sebelumnya" << endl;
		cout << "'c' untuk membuka calculator baru" << endl;
		cout << "'s' untuk stop" << endl;
		cin >>perintah;
		system("cls");
		switch (perintah){
			case 'u':
				myStack.Pop();
				myStack.display();
				break;
			case 'x':
				cout << "Input Operator 	: "; cin >> _operator;
				cout << "Input Operand 2 	: "; cin >> operand2;
				operand1 = myStack.getTop();
				myOperator.setOperator(_operator, operand1, operand2);
				myStack.setStack(perintah, myOperator.getResult());
				break;
			case 'c':
				myStack.clear();
				cout << "Input Operand 1 	: "; cin >> operand1;
				cout << "Input Operator 	: "; cin >> _operator;
				cout << "Input Operand 2 	: "; cin >> operand2;
				myOperator.setOperator(_operator, operand1, operand2);
				myStack.setStack(perintah, myOperator.getResult());
				break;
			case 's':
				break;
		}
	}while(perintah != 's');
	
	
	return 0;
}


//@dhani.yanuar
