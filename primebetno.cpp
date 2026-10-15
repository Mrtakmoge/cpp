#include<iostream>
using namespace std;


bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }

    }
    return true;

}


int main(){

    int n1,n2;
    cin>>n1>>n2;

    for(int num=n1;num<=n2;num++){
        if(isprime(num)){
            cout<<num<<endl;
        }
    }

 


    
}