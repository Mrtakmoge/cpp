#include<iostream>
using namespace std;


// To Reverse the input number;

int main(){

int num,rem,rev=0;


cin>>num;

while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
}

// for(;num!=0;num/=10){
//     rem=num%10;
//     rev=rev*10+rem;

// }

cout<<rev;


}