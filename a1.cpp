#include <bits/stdc++.h>
using namespace std;
#include <string>

class Patient
{
public:
    string diagnosis;

protected:
    string name;
    int age;
};

class Hospital : public Patient
{

public:
    void getdata(string n, int a, string d)
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
        if (diagnosis == "cough")
        {
            cout << "Treatment by Dr.Wagh" << endl
                 << "Prescribed medicine : Benadryl" << endl;
        }
        else if (diagnosis == "Fever")
        {
            cout << "Treatment by Dr.Wagh" << endl "Precescribed medicine : cipla " << endl;
        }
        else if (diagnosis == "headache" || "Headache")
        {
            cout << "Treatment by Dr.Wagh" << endl "Precescribed medicine : Paracetamols " << endl;
        }
        else if (diagnosis == "body pain")
        {
            cout << "Treatment by Dr.Wagh" << endl "Precescribed medicine : Paracetamols " << endl;
        }
        else if (diagnosis == "Kedney stone")
        {
            cout << "Treatment by Dr.Dhawan" << endl
                 << "Prescribed Medicine:MEdicine" << endl;
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
                string name, diagnosis;
                int age;

                cout << "Enter name :";
                cin >> name;
                cout << "ENter age:";
                cin >> age;
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

        case 4:

            break;

        default:
            cout << endl
                 << "Invalid choice" << endl;
            ;
        }
    }
}