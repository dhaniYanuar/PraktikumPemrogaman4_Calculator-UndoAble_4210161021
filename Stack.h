#include <iostream>
#include <stack>
using namespace std;

class Stack{
private :
	stack<int> Total;
	int sum;
public :
	virtual void setStack(char perintah, int _sum);
	virtual void Push();
	virtual void Pop();
	virtual void display();
	virtual int getTop();
	virtual void clear();
};
