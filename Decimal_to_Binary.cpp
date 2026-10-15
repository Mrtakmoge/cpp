#include<iostream>
using namespace std;

//Code to convert Decimal into Binary.

int main(){

int num,rem;
int bin=0;//Binary
cout<<"enter num:";
cin>>num;

while(num!=0){
    rem=num%2;
    bin=bin*10+rem;
    num/=2;


}

cout<<"Binary no.:"<<bin;



}