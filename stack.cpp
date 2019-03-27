#include<iostream>  //included iostream
using namespace std;
class stack{
	private:

		
	public:
	void push(){}
	void pop(){}
	void display(){ temp1=top;
    if(temp1 == NULL)
    {
        cout<<"Stack is EMPTY!"<<endl;
        return;
    }
    cout<<"Displaying :"<<endl;
    while(temp1 != NULL)
    {
        cout<<temp1->data<<endl;
        temp1=temp1->next;
    }}
}

void main(){}
