#include "Stack.h"
using namespace std;

void Stack::setStack(char perintah, int _sum){
	sum = _sum;
	switch (perintah){
		case 'u':
			Pop();
			break;
		case 'c':
			Push();
			break;
		case 'x':
			Push();
			break;
	}
}

void Stack::Push(){
	Total.push(sum);
}

void Stack::Pop(){
	Total.pop();
	
}

void Stack::display(){
	cout <<"Hasil Sebelum nya : " <<Total.top() <<endl;
}

int Stack::getTop(){
	return Total.top();
}

void Stack::clear(){
	while(!Total.empty()){
		Total.pop();
	}
}
