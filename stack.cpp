#include<iostream>  //included iostream
using namespace std;
class stack{
	private:

		
	public:
	void push(){}
	void pop(){ if(top==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"Element pop off is :"<<top->data<<endl;
        temp1=top;
        temp1=temp1->next;
        delete(top);
        top=temp1;}

	void display(){}
}

void main(){}
