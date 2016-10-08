#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

int main(){
    ifstream hashmat("sample.txt");
    int num1,num2,x;
    while(hashmat>>num1>>num2){
    	x = abs(num1-num2);
		cout<< x<< endl;
	}
}   
