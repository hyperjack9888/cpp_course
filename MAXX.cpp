#include<iostream>

using namespace std;

int main(){
	
	int D,E,V,C,MAX,MAX2;
	cout<<"Enter 4 integers: ";
	cin>>D>>E>>V>>C;	
	//-89
	//89
	if(D>E){
		MAX = D;	
	}else{
		MAX = E;
	}	
	
	if(V>C){
		MAX2 = V;
	}else{
		MAX2 = C;
	}
	
	if(MAX>MAX2){
		cout<<"The bigger Integer is: "<<MAX;
	}else{
		cout<<"The bigger Intger is: "<<MAX2;
	}
	
	
	return 0;
}

/*
HW
1. Write a program that checks if user input is negative or positive
2. Write a program that check if the number is between 1 to 100 or 100-1000 or more
exapmle: user input: 10000 then your output must be "More than 1000"
exapmle: user input: 22 then your output must be "between 1 to 100"
exapmle: user input: 563 then your output must be "between 100 to 1000"
*/

