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
//<<<<<<< HEAD
//>>>>>>> pushFun

//=======
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
//>>>>>>> displayFun
}

void main(){

//comment inserted to use protected branches

}
