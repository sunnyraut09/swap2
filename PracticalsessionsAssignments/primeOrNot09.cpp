#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){return false;}
    for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }}return true;
}
int main(){
    int n;
    cout<<"Enter any number And check if it is prime number or not:";
    cin>>n;
    if(isPrime(n)){cout<<n<<"is a Prime number";}else{cout<<n<<"is not a Prime number";}


		}