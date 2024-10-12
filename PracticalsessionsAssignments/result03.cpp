#include<iostream>
using namespace std;
//Program to give Grade on basis of marks.
int main(){int physics,chemistry,math,marathi,english,total_marks,result,percentage;
	cout<<"Enter Physics Score out of 100/n";
	cin>>physics;
	cout<<"Enter Chemistry Score out of 100/n";
	cin>>chemistry;
	cout<<"Enter Math Score out of 100/n";
	cin>>math;
	cout<<"Enter English Score out of 100/n";
	cin>>english;
	cout<<"Enter Marathi Score out of 100/n";
	cin>>marathi;
	total_marks= physics+chemistry+math+marathi+english;
	percentage = total_marks/5;

	if(percentage<40){cout<<"Fail";
		}else if(percentage>=40 && percentage<50){cout<<"Grade C";}
		 else if(percentage>=50 && percentage<75){cout<<"Grade B";}
		 else{cout<<"Grade A\n";}	
        cout<<"You scored"<<percentage<<"%"
		;

	

	}