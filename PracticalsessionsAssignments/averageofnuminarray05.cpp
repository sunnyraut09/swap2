#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter number of Number of elements:";
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
cout<<"Enter element:";
cin>>arr[i];
	}
for(int i=0;i<size;i++){
cout<<arr[i]<<",";
	}

int sum = 0;
for(int i=0;i<size;i++){
	sum+=arr[i];
}

cout<<"\n";
int average=sum/ size;
cout<<average;

		}
