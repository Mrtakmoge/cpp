#include<iostream>
using namespace std;

//code to display factorial ofa no.

int fact(int n){

    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }

}

int main(){

    int n;
    cin>>n;

    cout<<fact(n);


}