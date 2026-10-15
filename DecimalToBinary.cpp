#include<bits/stdc++.h>
using namespace std;

// code to convert Decimal into Binary.

int main(){

int n;
cin>>n;
int x=1;
int ans=0;

while(x!=0){
    int lastdigit=n%2;
    ans+=lastdigit*x;
    x*=10;
    n/=2;
}
cout<<ans;


}