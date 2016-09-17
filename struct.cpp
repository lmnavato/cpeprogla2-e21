//navato
#include<iostream>
#include<iomanip>
using namespace std;
struct item
{
	int id,num,day,month,year,quantity;
	char firstName[50];
	char lastName[50];
	char name[50];
	double price;
};
int main()
{
	item itm[3];
	cout<< "Enter 3 customers "<< endl;
	for(int i=0; i<3; i++)
	{
		cout<< "CUSTOMER INFORMATION "<< (i+1)<< endl;
		cout<< "First Name: ";
		cin.ignore();
		cin.getline(itm[i].firstName, 49);
		cout<< "Last Name: ";
		cin.getline(itm[i].lastName, 49);
		cout<< "Contact No: ";
		cin>> itm[i].num;
		cout<< "Order Date:"<< endl;
		cout<< "Day: ";
		cin>> itm[i].day;
		cout<< "Month: ";
		cin>> itm[i].month;
		cout<< "Year: ";
		cin>> itm[i].year;
		
		cout<< "Enter 3 items "<< endl;
		for(int j=0; j<3; j++)
		{
			cout<< "ID: ";
			cin>> itm[j].id;
			cin.ignore();
			cout<< "Name: ";
			cin.getline(itm[j].name, 49);
			cout<< "Price: ";
			cin>> itm[j].price;
			cout<< "Quantity: ";
			cin>> itm[j].quantity;
		}
	}
		cout<< setw(10)<< "#"
		<< setw(20)<< "Customer Name"
		<< setw(20)<< "Order Date"
		<< setw(10)<< "Items"
		<< setw(10)<< "Price"
		<< setw(10)<< "Quantity";
		
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	for(int i=0; i<3; i++)
	{
		cout<< endl;
		cout<< setw(10)<< i+1
			<< setw(20)<< itm[i].firstName,itm[i].lastName;
		cout<< setw(20)<< itm[i].day<< "/" << itm[i].month/itm[i].year);
	}
	for(int j=0; j<3; j++)
	{
		cout<< setw(10)<< itm[j].name
			<< setw(10)<< itm[j].price
			<< setw(10)<< itm[j].quantity;	
	}	
		
	return 0;
	
}
