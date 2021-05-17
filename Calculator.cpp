#include<iostream>

using namespace std;

int main(){
	int one,three,answer;
	char two;
	cout<<"Enter a equation: ";
	cin>>one>>two>>three;
	if(two=='*'){
		answer = one*three;
		cout<<one<<two<<three<<"="<<answer;}
	else if(two=='+'){
		answer = one+three;
		cout<<one<<two<<three<<"="<<answer;}
	else if(two=='-'){
		answer = one-three;
		cout<<one<<two<<three<<"="<<answer;}
	else if(two=='/'){
		answer = one/three;
		cout<<one<<two<<three<<"="<<answer;}
	
	
	
	return 0;
}
