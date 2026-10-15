#include<iostream>
using namespace std;

// int factr(int r){
//    if(r==0){
//       return 1;
//    }else{
//       return r*factr(r-1);

//    }
// }



int fact(int n){
   if(n==0){
      return 1;
   }else{
      return n*fact(n-1);
   }
}




int main(){

   int n,r;
   cin>>n>>r;

   int  nCr=fact(n)/(fact(n-r)*fact(r));
   cout<<nCr;

}