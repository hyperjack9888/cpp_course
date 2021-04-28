#include<iostream>

using namespace std;

int main(){
	char ch;
	cin>>ch;
	if(ch=='a' || ch=='i' || ch=='o' || ch=='u' || ch=='e'){
		cout<<"It is a vowel alphabet";
	}else if (ch=='A' || ch=='I' || ch=='O' || ch=='U' || ch=='E'){
		cout<<"It is a vowel alphabet";
	}else if (ch=='b' || ch=='c' || ch=='d' || ch=='f' || ch=='g' || ch=='h' || ch=='j' || ch=='k' || ch=='l' || ch=='m' || ch=='n' || ch=='p' || ch=='q' || ch=='r' || ch=='s' || ch=='t' || ch=='v' || ch=='w' || ch=='x' || ch=='y' || ch=='z'){
		cout<<"It is not a vowel alphabet it is a constant";
	}else if (ch=='B' || ch=='C' || ch=='D' || ch=='F' || ch=='G' || ch=='H' || ch=='J' || ch=='K' || ch=='L' || ch=='M' || ch=='N' || ch=='P' || ch=='Q' || ch=='R' || ch=='S' || ch=='T' || ch=='V' || ch=='W' || ch=='X' || ch=='Y' || ch=='Z'){
		cout<<"It is not a vowel alphabet it is a constant";
	}else{
		cout<<"ERROR 404 IT IS NOT A LETTER";
	}
	
	
	
	
	
	
	
	return 0;
}
