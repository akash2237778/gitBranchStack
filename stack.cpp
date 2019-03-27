#include<iostream>  //included iostream
using namespace std;
class stack{
	private:

		
	public:
	void push(int d){
		if(top==NULL)
    {
     top = new node;
     top->next=NULL;
     top->data=d;
    }
    else
    {
    temp=new node;
    temp->data=d;
    temp->next=top;
    top=temp;
    }}
	void pop(){}
	void display(){}
}

void main(){}
