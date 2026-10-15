#include<iostream>
#include<cmath>
using namespace std;

//code to find Armstrong No.
// it is sum of cube of digits of specific Number.
//e.g. 153
//code is compatible for 3-digits number.

int main(){

int n;
cin>>n;

int original=n;
int sum=0;

while(n>0){
    int lastdigit=n%10;
    sum+=lastdigit*lastdigit*lastdigit;
    // sum+=pow(lastdigit,3);
    n/=10;

}

if(sum==original){
    cout<<"Armstrong number";
}else{
    cout<<"Not Armstrong number";
}

}