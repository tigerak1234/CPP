#include<iostream>
using namespace std;

class bank
{
	public:
	int deposit,withdraw,total,remaining;
	string name= "Ayush Kothari";
	string accType= "Savings";
	int accNum= 1234567890;
	int Balance = 50000;
};
class user1 : public bank	
{
	public:
	void deposit1()
	{
		cout<<"How much do you want to deposit? ";
		cin>>deposit;
		total = deposit + Balance;
		cout<<deposit<<" have been successfully deposited in your bank account and your balance right now is "<<total<<endl;		
	}
	void withdraw1()
	{
		cout<<"How much money do you want to withdraw? ";
		cin>>withdraw;
		remaining = Balance - withdraw;
		if(remaining<0)
		{
			cout<<"Insufficient Balance!";
		}
		else
		{
			cout<<withdraw<<" have been successfully withdrawn from your bank account and your balance right now is "<<remaining<<endl;
		}
	}
};
int main()
{
	bank b;
	user1 u1;
	int choice;
	string Yes="Yes";
	cout<<"Name = "<<b.name<<endl;
	cout<<"Account type = "<<b.accType<<endl;
	cout<<"Account number = "<<b.accNum<<endl;
	cout<<"Account balance = "<<b.Balance<<endl<<endl;
	cout<<"Choose any one : "<<endl;
	cout<<"1.Deposit"<<endl;
	cout<<"2.Withdraw"<<endl;
	cout<<"3.None"<<endl;
	cin>>choice;
	if(choice == 1)
	{
		u1.deposit1();
	}
	else if(choice == 2)
	{
		u1.withdraw1();
	}
	else if(choice == 3)
	{
		cout<<"Have a great day!";
	}
  return 0;
}