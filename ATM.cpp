#include <iostream>

using namespace std;

int BC (int &balance)

{
	cout<<"Your remaining Balance is= "<<balance<<"!";
}

int DA (int &balance, int &amount)

{
	cout<<"Enter amount you want to deposit= ";
	
	cin>>amount;
	
	balance=amount+balance;
	
	cout<<"Your new balance is= "<<balance;
}

int WA (int &balance, int &amount)

{
	cout<<"Enter the amount you want to withdraw= ";
	
	cin>>amount;
	
	if (amount<=balance)
	{
	balance=balance-amount;
	
	cout<<"Your new balance is= "<<balance;
	
	}
	else 
	{
    cout<<"You have insufficient balance for this Transaction !";
	}
}

int ZF (int &balance, int &zakat)

{
	cout<<"Zakat on your available balance is= "<<zakat;
}


int main ()

{
	cout<<"Welcome to AniPao Bank ! -- Press 7 to continue ";
	
	int k, pin=7310, balance=20000, amount, zakat=0.04*balance, choice;
		
	cin>>choice;
	
	if (choice==7)
	{
	cout<<"Enter your pin= ";
	}
	else 
	{
	cout<<"Invalid operation !";
	cout<<endl;
	return main();
	}

	
	cin>>choice;
	
	if (choice==7310)
	{
	cout<<"Enter your choice= ";
	cout<<endl;
	cout<<"Press 1 for Balance inquiry !";
	cout<<endl;
	cout<<"Press 2 for Depositing amount !";
	cout<<endl;
	cout<<"Press 3 for Withdraw the amount you want !";
	cout<<endl;
	cout<<"Press 4 for checking Zakat funds !";
	cout<<endl;
	
	}
	else 
	{
	cout<<"Invalid PIN !";
	cout<<endl;
	return main();
	}

	
	cin>>choice;
	{
	if (choice==1)
	{
	cout<<BC;
	BC(balance);
	cout<<endl;
	}
	else if (choice==2)
	{
	cout<<DA;
	DA(balance, amount);
	cout<<endl;
	}
	else if (choice==3)
	{
	cout<<WA;
	WA(balance, amount);
	cout<<endl;
	}
	else if (choice==4)
	{
	cout<<ZF;
	ZF(balance, zakat);
	cout<<endl;
	}
	else 
	{
	cout<<"Sorry, Invalid option choosen !";
	cout<<endl;
	}
	cout<<"Thankyou for using our services !";
	cout<<endl;
	cout<<"Do you want to make another operation, press 0, if not press any key to exit !";
	cout<<endl;
	cin>>choice;
	if (choice==0)
{
return main();
}
	else 
	{
	cout<<"Have a safe day ahead , Fi Aman Allah !";
	}
}

}

