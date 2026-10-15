#include<iostream>
using namespace std;

/*

 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15

*/

int main(){

int n,num=1;
cin>>n;


for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<" "<<num;
        num++;

    }
    cout<<endl;
}














//AI:

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i;

//     }
//     cout<<endl;
// }






// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         if(j<=n-i){
//             cout<<" ";
//         }else{
//             cout<<"* ";
//         }
//     }
//     cout<<endl;
// }

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int k=1;k<=2*i-1;k++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
}