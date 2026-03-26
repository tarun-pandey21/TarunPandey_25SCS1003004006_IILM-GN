#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll;
    }
};

int main() {
    Student s;
    s.getData();
    s.display();
    return 0;
}