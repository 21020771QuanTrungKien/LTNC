#include <iostream>

using namespace std;

struct student
{
    int roll;
    string name;
    int age;
    int mark;
};

void print_student(student n)
{
    cout << n.roll << endl;
    cout << n.name << endl;
    cout << n.age << endl;
    cout << n.mark << endl;
}

int main()
{
    student n[5];
    for (int i = 0; i < 5; i++)
    {
        n[i].roll = i + 1;
        cout << "For roll number " << n[i].roll << endl;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, n[i].name);
        cout << "Enter age: ";
        cin >> n[i].age;
        cout << "Enter mark: ";
        cin >> n[i].mark;
    }
    cout << endl;
    print_student(n[1]);
    return 0;
}
