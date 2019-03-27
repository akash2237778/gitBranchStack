#include<iostream>  //included iostream
using namespace std;
class stack{
	private:
struct node {

    int data;
    struct node* next;
};
    public:
    struct node* top = NULL;
    struct node* temp = NULL;
    struct node* temp1 = NULL;
		
	public:
//< HEAD
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

//=======
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
//>>>>>>> pushFun
	void display(){}
}

void main(){}
