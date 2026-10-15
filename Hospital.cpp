#include <bits/stdc++.h>
using namespace std;
#include <string>

class Patient
{
public:
    int diagnosis;

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
             //  << "Patient List:"<<endl<<endl
             << "Patient name:" << name << endl
             << "Patient age:" << age << endl;
        //  << "Patient diagnosis:" << diagnosis << endl;

        switch (diagnosis)
        {
        case 1:
            cout << "Treatment by Dr.Wagh" << endl;
            cout << "Prescribed Medicine:Benadryl" << endl;
            break;
        case 2:
            cout << "Treatment by Dr.Wagh" << endl;
            cout << "Prescribed Medicine:cipla" << endl;
            break;
        case 3:
            cout << "Treatment by Dr.Wagh" << endl;
            cout << "Prescribed Medicine:paracetamol" << endl;
            break;
        case 4:
            cout << "Treatment by Dr.Wagh" << endl;
            cout << "Prescribed Medicine:Paracetamol" << endl;
            break;

        case 5:
            cout << "Treatment by Dr.Wagh" << endl;
            cout << "Prescribed Medicine:Benadryl" << endl;
            break;

        default:
            cout << "We don't treat this Diagnosis" << endl;
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
        cout << "1.admit Patient List" << endl;
        cout << "2.Display patinet" << endl;
        cout << "3.Totall No. of Patients in Hospital" << endl;
        cout << "4.exit" << endl;

        int choice;
        cout << "Enter choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < max)
            {
                string name;
                int age, diagnosis;

                cout << "Enter name :";
                cin >> name;
                cout << "ENter age:";
                cin >> age;

                cout << "Enter Diagnosis:";

                cout << endl
                     << "1.cough" << endl;
                cout << "2.fever" << endl;
                cout << "3.body pain" << endl;
                cout << "4.headache" << endl;
                cout << "5.Kedney stone" << endl;

                cout << endl;

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

            cout << "Patient List:" << endl;
            for (int i = 0; i < count; i++)
            {
                cout << i + 1 << ".";
                obj[i].display();
            }

            break;

        case 3:
            cout << "total no. of Patients: " << count;
            break;

        case 4:

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