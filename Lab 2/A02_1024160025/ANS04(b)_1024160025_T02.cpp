#include<iostream>
using namespace std;

int main(){
	string str;
	cout<<"Enter string: ";
	cin>>str;
	int n=str.length();
	for(int i=0;i<n/2;i++){
		char temp=str[i];
		str[i]=str[n-1-i];
		str[n-1-i]=temp;
	}
	
	cout<<"Reversed String: "<<str<<endl;
	 return 0;
}
