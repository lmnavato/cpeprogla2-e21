#include<iostream>
#include<cstring>
using namespace std;

const char* yo(const char* str){
  //return strlen(str);
  return str;
}
void prob1()
{
int result;
  char str1[100];
  char str2[100];
  strcpy(str1,"hello");
  strcpy(str2,"Hello");
  result = strcmp(str1,str2);
  if(result==1)
  {
  	cout<< "Positive"<< endl;
  	cout<< "====================\n";
  }
  else if(result==0)
  {
  	cout<< "Equal"<< endl;
  	cout<< "====================\n";
  }
  else
  {
  	cout<< "Negative"<< endl;
  	cout<< "====================\n";
  }
}
void prob2()
{
	char str1[100];
  char str2[100];
  cout<< "\nEnter first character: ";
  gets(str1);
  cout<< "Enter second character: ";
  gets(str2);
  strcpy(str1,str2);
  cout<< "new string valuefor str1: "<< strcpy(str1,str2)<< endl;
  cout<< "====================\n";
}
void prob3()
{
	char str1[100];
  char str2[100];
  cout<< "\nEnter first character: ";
  gets(str1);
  cout<< "Enter second character: ";
  gets(str2);
  strcat(str1,str2);
  cout<< "new string valuefor str1: "<< str1<< endl;
  cout<< "====================\n";
}
void prob4()
{
	char str1[100];
  int x,count,length;
  cout<< "\nEnter first character: ";
  gets(str1);
  length=strlen(str1);
  for(x=0; x<length; x++)
  {
  	if(str1[x]!=str1[length-x-1])
  	{
  		count=1;
  		break;
	}	
	}	
	if(count)
		{
			cout<< str1<< " is not a palindrome."<< endl;
			cout<< "====================\n";                                    
		}
		else
		{
			cout<< str1<< " is a palindrome."<< endl;
			cout<< "====================\n";
		}
}
void prob5()
{
	 int result;
  char str1[100];
  cout<< "\nEnter a character: ";
  gets(str1);
  for(int i=0; i<strlen(str1); i++)
  {
  	str1[i]=tolower(str1[i]);
  	str1[0]=toupper(str1[0]);
  }
  for(int j=0; j<strlen(str1); j++)
  {
  	if (str1[j]==' ')
  	{
  		str1[j+1]=toupper(str1[j+1]);
	}
  }
  cout<< str1<< endl;
}
void prob6()
{
	int length;
	char str1[100];
	cout<< "Enter a character: ";
	gets(str1);
	length=strlen(str1);
	for (int i=length; i>0; i--)
	{
		if(str1[i]==32)
		{
			int j=i+1;
			while(str1[j]!=32&&j<length)
			{
				cout<< str1[j];
				j++;
			}
			cout<< endl;
		}
	}
	int x=0;
	while(str1[x]!=32)
	{
		cout<< str1[x];
		x++;
	}
}
int main()
{
	cout<< "STRING COMPARE"<< endl;
	prob1();
	cout<< "STRING COPY"<< endl;
	prob2();
	cout<< "STRING CONCATENATION"<< endl;
	prob3();
	cout<< "PALINDROME"<< endl;
	prob4();
	cout<< "CAPITALIZE EACH WORD"<< endl;
	prob5();
	cout<< "====================\n";
	cout<< "STRING REVERSE VERTICAL"<< endl;
	prob6();
}
