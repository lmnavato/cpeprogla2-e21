#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream collatz("H:\\My Documents\\input1.txt");
	int x , y;
	int num;
	int cnt;
	while(collatz >> x >> y){
		if((x>0 && x<1000000) && (y>0 && y< 1000000)){
			int max = 0;
			int a = x;
			int b = y;
		if(x > y){
     		a = y;
    	 	b = x;
    	}
  		for(int z=a; z<=b; z++){
		  num = z;
		  cnt = 1;
      	while(num!=1){
     		if(num%2==0){
    			num = num/2;
    			cnt++;
      		}
     		else{
       			num = 3*num+1;
       			cnt++;
			}
     	}
     	if(max < cnt)
     	max = cnt;
		}
   		cout << x << ' ' << y << ' ' << max << endl;
		}	
	}
	return(0);
}

  		
