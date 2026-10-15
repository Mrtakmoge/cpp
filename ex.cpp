#include <bits/stdc++.h>
using namespace std;
#include <string>

class Patient
{
public:
    int   diagnosis;
protected:
string name;
    int age;
};

class Hospital : public Patient
{

public:
    void getdata(string n, int a, int d)
    {
        name = n;
        age = a;
        diagnosis = d;
    }

    void display()
    {
        cout << endl
             << "Patient name:" << name << endl
             << "Patient age:" << age << endl
             << "Patient diagnosis:" << diagnosis << endl;

             switch(diagnosis){
                case 1 :
                cout<<"medicine=bena"<<endl<<"Treatment by dr wagh";
                break;
                case 2:
                cout<<"medicine=cipla"<<endl<<"treatment by dr wagh";
                break;
                case 3:
                cout<<"medicine=paracetalmol"<<endl<<"Treatment by dr wagh";
                break;

             }
        
        
    }

   
};

int main()
{

    int max = 10;

    Hospital obj[max];
    int count = 0;

    while (true)
    {
        cout << endl
             << "================================" << endl;
        cout << "Hospital Management System:" << endl;
        cout << "================================" << endl
             << endl;
        cout << "1.admit patient" << endl;
        cout << "2.display patinet" << endl;
        cout << "3.exit" << endl;

        int choice;
        cout << "Enter choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < max)
            {
                string name ; 
                int age,diagnosis;

                cout << "Enter name :";
                cin >> name;
                cout << "ENter age:";
                cin >> age;

                cout<<endl<<"1.cough"<<endl;
                cout<<endl<<"2.fever"<<endl;
                cout<<endl<<"3.body pain"<<endl;
                cout<<endl<<"4.headache"<<endl;

                cout << "Enter diagnosis:";
                cin >> diagnosis;

                

                

                obj[count].getdata(name, age, diagnosis);
                count++;
                cout << "PAtient admitted succesfully" << endl;
            }
            else
            {
                cout << "Hospital  is Full";
            }
            break;

        case 2:

            cout << "PAtient List:" << endl;
            for (int i = 0; i < count; i++)
            {
                obj[i].display();
            }

            break;

        case 3:

            cout << endl
                 << "Existing the system" << endl;
            return 0;

        default:
            cout << endl
                 << "Invalid choice" << endl;
            ;
        }
    }
}