#include<iostream>
using namespace std;

//To Check the given no. is prime or not;

int main(){

int n;
cout<<"enter n:";
cin>>n;
bool flag=0;

for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"Not Prime";
        flag=1;
        return 0;
    }
}

if(flag==0){
    cout<<"Prime";
}


}