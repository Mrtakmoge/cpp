#include<bits/stdc++.h>
using namespace std;

// code for Binary Search;
//sequence should be sorted.
//

bool BinarySearch(int arr[],int n,int key){



    int s=0;//starting 
    int e=n;//ending 

     while(s<=e){
        int mid=(s+e)/2;//middle index

        if(arr[mid]==key){//array element of middle index.
            return true;//No. is Present 
        }
        else if(arr[mid]>key){
            e=mid-1;//if No. is in 1st half
        }
        else{
            s=mid+1;//if No. is in 2nd half.
        }
    }

    return false;




}


int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter Key:";
    cin>>key;

    cout<<BinarySearch(arr,n,key);





}