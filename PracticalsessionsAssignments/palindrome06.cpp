#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string input){
	int n=input.length();
	for(int i=0;i<=n/2;i++){
		if(input[i]==input[n-1-i]){
			return true;
		}
		}return false;

}
using namespace std;
int main(){
	string input;
	cout<<"Enter any word to check if it is palindrome or not:";
	cin>>input;
	if(ispalindrome(input)){
		cout<<"it is a palindrome ";

	}else{cout<<"it is not a palindrome !";}
	
	
		

	

		}