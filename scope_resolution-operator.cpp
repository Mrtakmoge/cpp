#include<bits/stdc++.h>
using namespace std;

//Scope Resolution Operator :
/*

It's used when we have to use a code Outside it's Boundary.
It's used to define member function outside of class.
It's used initalize the static member outside the class.

*/


class scope{

    static int x;

    public:

    void getdata();
    void show();
};

void scope :: getdata(){
    cout<<"Enter :";
    cin>>x;
}
void scope :: show(){
    cout<<x;
}

int main() {

    scope obj;
    obj.getdata();
    obj.show();
}