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
    student n;
    cin >> n.roll;
    cin.ignore();
    getline(cin, n.name);
    cin >> n.age;
    cin >> n.mark;
    cout << endl;
    print_student(n);
    return 0;
}
