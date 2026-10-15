#include<bits/stdc++.h>
using namespace std;

// e code for Linear Search;


bool LinearSearch(int arr[],int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;

}

int main(){

int n,key;
cout<<"enter n:";
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter Key:";
cin>>key;

cout<<LinearSearch(arr,n,key);

}