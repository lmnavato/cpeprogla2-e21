#include<iostream>
#include<iomanip>
using namespace std;
void prob1()
{
	struct studRecord
{
	int id;
	char name[50];
};
struct quiz
{
	double quiz, average;
};
int main;
{
	studRecord stud[1];
	quiz q[3];
	double total(0);
	cout<< "\nEnter Student Record: \n";
	for(int i=0; i<1; i++)
	{
		cout<< "ID: ";
		cin>> stud[i].id;
		cin.ignore();
		cout<< "Name: ";
		cin.getline(stud[i].name, 49);
		for(int j=0; j<3; j++)
		{
			cout<< "Quiz "<< j+1<< ": ";
			cin>> q[j].quiz;
		}
		
}
	cout<< "\n\n";
	cout<< "Student Record\n";
	for(int i=0; i<1; i++)
	{
		cout<< "ID: "<< stud[i].id<< endl;
		cout<< "Name: "<< stud[i].name<< endl;
		for(int j=0; j<3; j++)
		{
			total+=q[j].quiz;
		}
			cout<< "Grade: "<< (total/3)<< endl;
			if((total/3)<75)
			cout<< "Remarks: FAILED";
			else
			cout<< "Remarks: PASSED";
		
	}
	cout<< "\n\n";
}
}
void prob2()
{
struct Student
{
	int id[5];
	char name[50];
};

struct Quiz
{
	double qu[3];
};

int main;
{
	Student stud[5];
	Quiz q[3];
	double total=0, x=0;
		
    cout<< "\nEnter student records: "<< endl;
    for(int i=0; i<5; i++)
	{
		cout<<"Student "<< i+1<< endl;
    	cout << "ID: ";
		cin >> stud[i].id[i];
    	cin.ignore();
		cout << "Name: ";
    	gets(stud[i].name);
    	for(int j=0; j<3; j++){
            cout << "Quiz "<< j+1 << ": ";
            cin >> q[i].qu[j];
        }
        cout<<endl;
	}
	
	cout << setw(10) << "No."
	  	 << setw(15) << "Student No."
		 << setw(15) << "Name"
		 << setw(15) << "Grade"
		 << setw(16) << "Remark"
		 << endl;
	
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);
	
	for(int i=0; i<5; i++)
	{
		cout << setw(10) << i+1;
		cout << setw(15) << i+1;
    	cout << setw(15)<< stud[i].name;
    	for(int j=0; j<3; j++)
		{
    		total+=q[i].qu[j];	
		}
		x=total/3;
		cout<<setw(17) << x;
		if(x<75)
		{
			cout <<setw(17)<< "Failed" << endl;
		}
		else
		{
			cout <<setw(17)<< "Passed"<<endl;
		}
		
		total=0;
		x=0;
		
	}
	cout<< "\n\n";	
}
}
void prob3()
{
struct item
{
	int id,num,day,month,year,quantity;
	char firstName[50];
	char lastName[50];
	char name[50];
	double price;
};
int main;
{
	int z;
	double total(0);
	item itm[3];
	cout<< "\nEnter 3 customers "<< endl;
	for(int i=0; i<3; i++)
	{
		cout<< "CUSTOMER INFORMATION "<< (i+1)<< endl;
		cin.ignore();
		cout<< "First Name: ";
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
		cout<< "Summary Reprot"<< endl;
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
			<< setw(10)<< itm[i].firstName<<", "<< itm[i].lastName
			<< setw(20)<< itm[i].day<< "/" << itm[i].month<< "/"<< itm[i].year<< endl;
	
		for(int j=0; j<3; j++)
	{
		cout<< setw(60)<< itm[j].name<< setw(10)<< itm[j].price<< setw(10)<< itm[j].quantity<< endl;
		total=itm[j].price*itm[j].quantity;
		z+=total;
	}
	cout<< setw(70)<< "TOTAL PRICE: "<< setw(10)<< z<< endl;
	total=0;
	z=0;
	}
	system ("pause");
}
}
int main()
{
	cout<<"===================";
	prob1();
	cout<<"===================";
	prob2();
	cout<<"===================";
	prob3();
}
