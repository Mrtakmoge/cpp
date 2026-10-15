#include<bits/stdc++.h>
#include<string>
using namespace std;



using namespace std;


class arth{
    private:
    float n1,n2,res;

    public:
    

    void get(){
        cout << "Enter n1:";
        cin>>n1;
        cout<<"Enter n2:";
        cin>>n2;

  

    }

    void add(){
    res=n1+n2;
    cout<<"Addition is:"<<res<<endl;
    }

    void sub(){
        res=n1-n2;
        cout<<"Subtraction is:"<<res<<endl;
    }

    void multi(){
        res=n1*n2;
        cout<<n1<<'x'<<n2<<'='<<res<<endl;

    }

    void divid(){
        res=n1/n2;
        cout<<"Divid is:"<<res<<endl;
    }
};


int main(){

    arth obj;
    cout<<"====== Arithmatic Opertaions ========"<<endl;
    cout<<"Enter 1 for +"<<endl;
    cout<<"Enter 2 for -"<<endl;
    cout<<"Enter 3 for *"<<endl;
    cout<<"Enter 4 for /"<<endl<<endl;

        obj.get();
int n;
cout<<"Select Operation:";
cin>>n;
    switch(n){

        case 1:obj.add();
        break;
        case 2:obj.sub();
        break;
        case 3:obj.multi();
        break;
        case 4:obj.divid();
        break;
        default:
        cout<<"Invalid Operation";
        
    }

    



}