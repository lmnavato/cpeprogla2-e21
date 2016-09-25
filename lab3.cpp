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
  	cout<< "====================";
  }
  else if(result==0)
  {
  	cout<< "Equal"<< endl;
  	cout<< "====================";
  }
  else
  {
  	cout<< "Negative"<< endl;
  	cout<< "====================";
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
  cout<< "====================";
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
  cout<< "====================";
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
			cout<< "====================";                                    
		}
		else
		{
			cout<< str1<< " is a palindrome."<< endl;
			cout<< "====================";
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

int main()
{
	prob1();
	prob2();
	prob3();
	prob4();
	prob5();
}
