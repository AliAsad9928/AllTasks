#include <iostream>
using namespace std;
class Student {
private:
    string cms;
    string name;
    float gpa;
    int age;
public:
    Student(string c, string n, float g, int a) {
        cms = c;
        name = n;
        gpa = g;
        age = a;
    }
    void getInfo() {
        cout << "Enter CMS ID: ";
        cin >> cms;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter GPA: ";
        cin >> gpa;
        cout << "Enter Age: ";
        cin >> age;
    }
    void printDetail() {
        cout << "\nStudent Details:\n";
        cout << "CMS ID: " << cms << endl;
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student1("", "", 0.0, 0);
    student1.getInfo();
    student1.printDetail();
    return 0;
}
