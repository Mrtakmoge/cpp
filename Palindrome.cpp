#include<bits/stdc++.h>
using namespace std;


//PALINDROME:If NO. after reversing is equal to Entered No.
//Example:121==121



int main(){

    int n,rev=0,rem;
    cout<<"enter n:";
    cin>>n;

    int original=n;

    while(n!=0){
        rem=n%10;//TO take the Last Digit.
        rev=rev*10+rem;//Addition of Last Digit.
        n/=10;//Removes The Last Digit.
    }

    //Checks Number after reverse is equal to Entered Number.
   if(original==rev){
    cout<<"Number is Palindrome";

   }else{
    cout<<"Number Isn't Palindrome";
   }


}