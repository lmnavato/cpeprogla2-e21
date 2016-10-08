#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream sum("input.txt");
	int num;
	int x;
	while(sum>>num){
		for(int i=1; i<num; i++)
		if(i%3==0||i%5==0)
			{
				x+=i;
					
			}
			cout<< x;
	}
	
}
