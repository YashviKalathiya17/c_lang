#include<iostream>
#include<string>

using namespace std;

class Student {
private:
    int student_id;
    string stu_name;
    int this_age;
    string this_course;
    string stu_city;
    string stu_email;
    string this_college;

public:
    void setStudentDetails(int id, const string& name, int age, const string& course, const string& city, const string& email, const string& college) {
        student_id = id;
        stu_name = name;
        this_age = age;
        this_course = course;
        stu_city = city;
        stu_email = email;
        this_college = college;
    }

    void displayStudentDetails() {
        cout << "Student ID: " << student_id << endl;
        cout << "Name: " << stu_name << endl;
        cout << "Age: " << this_age << endl;
        cout << "Course: " << this_course << endl;
        cout << "City: " << stu_city << endl;
        cout << "Email: " << stu_email << endl;
        cout << "College: " << this_college << endl << endl;
    }
};

int main() {
    const int num_students = 2;
    Student students[num_students];

    for (int i = 0; i < num_students; ++i) {
        int id, age;
        string name, course, city, email, college;

        cout << "Enter details for Student " << i + 1 << ":" << endl;
        cout << "Student ID: ";
        cin >> id;

        cout << "Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Age: ";
        cin >> age;

        cout << "Course: ";
        cin.ignore();
        getline(cin, course);

        cout << "City: ";
        getline(cin, city);

        cout << "Email: ";
        getline(cin, email);

        cout << "College: ";
        getline(cin, college);

        students[i].setStudentDetails(id, name, age, course, city, email, college);
        cout << endl;
    }

    cout << "Student Details:" << endl;
    for (int i = 0; i < num_students; ++i) {
        students[i].displayStudentDetails();
    }
}
