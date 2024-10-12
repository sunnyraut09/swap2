#include<iostream>
using namespace std;
//Program to calculate salary
int main(){
	int basic_salary,HRA,payable_salary,TA,tax;
	cout<<"Enter Basic salary:";
	cin>>basic_salary;
	HRA = 0.1*basic_salary;
	TA = 0.05*basic_salary;
	tax = 0.02*basic_salary;
	payable_salary = HRA + TA + basic_salary - tax;
	cout<<"Payable Salary:";
	cout<<payable_salary;
		}
	

	
		