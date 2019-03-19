#include<iostream>
using namespace std;
struct costumer{ string name; string number; string home; string credit;  string size; string select ;string code ;
};
int main()
{

  costumer x[10];
	
	for(int i=0;i<10;i++)
	{
		cout<<"*************************************************************************\n";
		cout<<"                          PIZZA HUT                                               \n";
		cout<<"*************************************************************************\n";
		cout<<"Welcome valuable Costumer \n";
		cout<<"Please enter your name\n";
		getline(cin,x[i].name);
		cout<<x[i].name<<" Please enter your phone number \n";
		cin>>x[i].number;
		cout<<x[i].name<<" Please enter the adress\n";
		getline(cin,x[i].home);
		cout<<x[i].name<<" Pleasae select which pizza do you want \n";
		cout<<" PIZZA HUT SERVES YOU\n\tHot & Spicy\n\tChiken Grilled\n\tChicken Fajita\n\tToday's Special\n";
		getline(cin,x[i].select);
		cout<<x[i].name<<" Please enter which size do you want\n";
		cout<<" PIZZA HUT SERVES YOU\n\tSmall\t$10\n\tMedium\t$20\n\tLarge\t$25\n";
		cin>>x[i].size;
		cout<<x[i].name<<" Please enter your 16 digit credit card number for order confirmation\n ";
		cin>>x[i].credit;
		cout<<x[i].name<<" Please enter your 4 digit credit card pin for order confirmation\n";
		cin>>x[i].code;
		cout<<x[i].name<<" Your order of "<<x[i].select<<" of size "<<x[i].size<<" At adress "<<" Will be deliverd within 30 minutes\n";
		
		cout<<"Thank you for purchasing have a good day bye \n";
		
		
		
	}
}
