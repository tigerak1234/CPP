#include<iostream>
using namespace std;

class calculator
{
	int num1,num2;
	public:
	void addition()
	{
		cout<<endl<<"Enter two numbers :"<<endl;
		cin>>num1>>num2;
		cout<<endl<<"Addition of "<<num1<<" and "<<num2<<" is "<<num1+num2;
		
	}
	void subtraction()
	{
		cout<<endl<<"Enter two numbers :"<<endl;
		cin>>num1>>num2;
		cout<<endl<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2;
		
	}
	void division()
	{
		cout<<endl<<"Enter two numbers :"<<endl;
		cin>>num1>>num2;
		cout<<endl<<"Division of "<<num1<<" and "<<num2<<" is "<<num1/num2;
		
	}
	void multiplication()
	{
		cout<<endl<<"Enter two numbers :"<<endl;
		cin>>num1>>num2;
		cout<<endl<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<num1*num2;
		
	}	
};
int main()
{
	calculator add,subtract,divide,multiply;
	int choice;
	cout<<"Choose any operator :"<<endl<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Subtraction"<<endl;
	cout<<"3.Division"<<endl;
	cout<<"4.Multiplication"<<endl<<endl;
	cout<<"Your choice : ";
	cin>>choice;
	if(choice == 1)
	{
		add.addition();
	}
	else if(choice == 2)
	{
		subtract.subtraction();
	}
	else if(choice == 3)
	{
		divide.division();
	}
	else if(choice == 4)
	{
		multiply.multiplication();
	}
	else
	{
		cout<<"Invalid choice!";
	}
	return 0;
}	
	
	
	
	
	
	
	
	
	
	
	
