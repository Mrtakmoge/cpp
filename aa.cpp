#include<bits/stdc++.h>
using namespace std;

class abc{
    int x,y;

    public:
    void get(){
        cin>>x>>y;
    }

    void operator ++(){
        x--;
        y--;  
    }

    void operator --(){
        x++;
        y++;
    }

    void display(){
        cout<<x<<endl<<y;
    }
};

int main(){
    abc obj;
    obj.get();
    --obj;
    obj.display();

    obj.get();

    ++obj;
    obj.display();
}