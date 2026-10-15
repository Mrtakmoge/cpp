#include<iostream>
using namespace std;
//code to convert Binary into Decimal no.
//Change the base according to system(1-9).
//Same code for all no. conversion

int BinaryToDecimal(int n){
    int ans=0;
    int x=1;

    while(n>0){
        int lastdigit=n%10;
        ans+=x*lastdigit;
        x*=2;
        n/=10;
    

    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<BinaryToDecimal(n);
}