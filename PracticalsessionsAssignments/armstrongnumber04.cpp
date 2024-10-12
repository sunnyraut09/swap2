#include<iostream>
#include <math.h>
using namespace std;
bool isarmstrong(int num){


int temp=num;
int digits=0;
int sum=0;
while(temp!=0){temp= temp/10;digits++;
		}
temp=num;
while(temp!=0){int remainder=num%10;
sum= sum + pow(remainder,digits);
temp/=10;
			}
return sum==num;
	}
int main(){int num;
cout<<"enter a number to check if its Armstrong number or Not !";
cin>>num;
if(isarmstrong(num)){
cout<<"Its is an armstong number";}
else{cout<<"Its is not an armstong number";}

		}