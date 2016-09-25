#include<iostream>
#include<string.h>
using namespace std;

char str1[100], str2[100], *p1, *p2, character[100];
char valid;
int length, compare=0, result, options;

void prob2() 
{
	cout<< "\nEnter a character: ";
    gets(str1);
    cout<< "Enter a character: ";
    gets(str2);
	for(int i=0; i<100; i++)
	{
    	p1= &str1[i];
    	p2= &str2[i];
    	*p1= *p2;
    	cout<<str1[i];
	}  
}
void prob3() 
{
	cout<< "\nEnter a character: ";
    gets(str1);
    cout<< "Enter a character: ";
    gets(str2);
	for(int i=0; i<50; i++)
	{
    	p1= &str1[i];
    	p2= &str2[i];
    	(int) str1[i];
    	(int) str2[i];
    	if (*p2<*p1)
		{
    		compare+=1;
		}
		else if (*p1==*p2)
		{
			compare+=0;	
		}
		else
		{
			compare-=1;
		}
	}
	if (compare>0) cout<< "Positive one ";
	else if (compare==0) cout<< "Equal";
	else cout<< "Negative one ";	
	cout<< endl;
}

void prob4() 
{
	cout<< "\nEnter a character: ";
    gets(str1);
    cout<< "Enter a character: ";
    gets(str2);
	for(int i=0; i<strlen(str1); i++)
	{
    	p1= &str1[i];
    	cout<< *p1;
	}
	for(int i=0; i<strlen(str2); i++)
	{
    	p2= &str2[i];
    	cout<< *p2;
	}
}

int slen(char*p1)
{
	cout<< "\nEnter a character:  ";
	gets(str1);
	while(*p1!='\0') 
	{
		compare++;
		p1++;
	}
	cout<<"The length of the string is: "<<compare << endl;
	return compare;
}

void prob6() 
{
	int i=0;
    char*p1= character;
    char*p2= str1;
	cout<< "\nEnter a character: ";
    gets(character);
    while(*p1)
	{
    	p1++;
    	i++;
	}
	while(i>=1)
	{
		p1--;
		*p2=*p1;
		p2++;
		--i;
	}
	cout<< "The reverse string is: "<< str1<< endl;
}


int main() 
{	
	cout<< "STRING COPY"<< endl;
	cout<< "==================";
	prob2();
	cout << endl;
	cout<< "STRING COMPARE"<< endl;
	cout<< "==================";
	prob3();
	cout << endl;
	cout<< "STRING CONCATENATION"<< endl;
	cout<< "==================";
	prob4();
	cout << endl;
	cout<< "STRING LENGTH"<< endl;
	cout<< "==================";
	slen(str1);
	cout << endl;
	cout<< "STRING REVERSE"<< endl;;
	cout<< "==================";
	prob6();
	system("pause");
}

