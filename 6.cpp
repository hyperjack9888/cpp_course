/* Homework
Enter 1st double number: 5.9
Enter 2nd double number: 99.6
5.9 + 99.6 = 104.5
5.9 - 99.6 = 93.7
5.9 * 99.6 = 586.86
5.9 / 99.6 = 0.032
*/

//write your coude here
#include<iostream>

using namespace std;

int main(){
	
	
	double result, TRD,DB;
	cout<<"Enter a double number: ";
	cin>>TRD;
	cout<<"Enter another double number: ";
	cin>>DB;
	result = TRD-DB;
	cout<<TRD<<"-"<<DB<<"="<<result;
	cout<<endl;
	result = TRD*DB;
	cout<<TRD<<"*"<<DB<<"="<<result;
	cout<<endl;
	result = TRD/DB;
	cout<<TRD<<"/"<<DB<<"="<<result;
	
	
	
	
	
	
	
	
	
	return 0;
}
