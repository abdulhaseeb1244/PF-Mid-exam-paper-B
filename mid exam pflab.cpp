#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int income,expense,balance =0;
	int choice;
	do{
		cout<<"1. Add Income:Add an amount to the budget\n2. Add Expense:Add an expense amount to budget\n3. View Balance: Display the current balance(income - expense)\n4. Exit:Exit the program."<<endl;
		cout<<"Enter the option number to do work:\n";
		cin>>choice;
		
		switch(choice){
			
			case 1:
				cout<<"Input your income: ";
				cin>>income;
				if(income>=1){
					balance+=income;
				cout<<"Your balance= ";
			}
				else{
					cout<<"Enter positive income."<<endl;
				}
			
				break;
			case 2:
				cout<<"Input your expense: ";
				cin>>expense;
				if(expense>=1){
				cout<<"Your balance= "<<endl;
				balance-=expense;
				}
				else{
					cout<<"Enter positive expense.";
				}
				
				break;
			case 3:
				cout<<"Your final balance is = "<<balance<<endl;
				break;
			case 4:
				cout<<"Exit..."<<endl;
				break;
			default:
				cout<<"Invalid choice."<<endl;
		}
	}
		
		while(choice!=4);
		{
			cout<<"Invalid option selected.";
		}
		
}
