#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;
double prob1()
{
	double num;
	cout<< "Enter number to be round off: ";
	cin>> num;
	return round(num);
}

void problem2()
{
	int uniques[10];
	int max = 20;
	int min = 1;
	int num1; 
	bool check = true; 
	
	srand(time(NULL)); 
	cout << "Unique numbers: ";	
	
	for (int i=0;i<10;i++)
	{
    do{
    	num1=rand()%max+min;
    	check = true;
   		 for (int j=0;j<i;j++)
   		     if (num1 == uniques[j])
			{
           	 	check = false; 
             	break; 
        	}
    	} while (!check); 
			uniques[i]=num1;
			cout << num1 << " ";
	}
}
int call_by_value(int n)
{
	if(n==1)
		return 1;
	else
		return n*call_by_value(n-1);
}
int factorial (int n);
int main()
{
	cout<< prob1()<< endl;
	problem2();
	cout<< endl;
	int n;
	cout<< "Enter a number: ";
	cin>> n;
	cout<< "Factorial of "<< n<< " is "<< factorial(n);
	return 0;
}
	int factorial(int n)
	{
		if(n!=1)
		return n*factorial(n-1);
	}	






