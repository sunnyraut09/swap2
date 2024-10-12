#include<iostream>
#include<string>
using namespace std;
int countVOW(string input){
    int count=0;
    int n = input.length();

    for(int i=0;i<n;i++){
        if(input[i]=='a' ||input[i]=='e' ||input[i]=='i' ||input[i]=='o' ||input[i]=='u'||input[i]=='A' ||input[i]=='E' ||input[i]=='I' ||input[i]=='O' ||input[i]=='U' ){
            count++;
            

        }
    }
    
    return count;

}
int main(){
    string input;
    
    
    cout<<"Enter a string and get count of vowels and consonants in it:";
    cin>>input;
    int n = input.length();
    int consonant = n-countVOW(input);
    
    cout<<"Number of vowels:"<<countVOW(input)<<endl;
    cout<<"Number of Consonant:"<<consonant;


		}