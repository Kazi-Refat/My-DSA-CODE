#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int ID;
    char name[100];
    char sec;
    double marks;

    Student(int ID, char name[100], char sec, double marks)
    {
        this->ID = ID;
        strcpy(this->name, name);
        this->sec = sec;
        this->marks = marks;
    }
};
int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        int id;
        char name[100];
        char sec;
        double marks;
        cin >> id >> name >> sec >> marks;
        Student s1 = Student(id, name, sec, marks);
        cin >> id >> name >> sec >> marks;
        Student s2 = Student(id, name, sec, marks);
        cin >> id >> name >> sec >> marks;
        Student s3 = Student(id, name, sec, marks);
        
        if(s1.marks > s2.marks && s1.marks > s3.marks)
        {
            cout << s1.ID << " " << s1.name << " " << s1.sec << " " << s1.marks << endl;
        }
        else if(s2.marks > s3.marks && s2.marks > s1.marks)
        {
            cout << s2.ID << " " << s2.name << " " << s2.sec << " " << s2.marks << endl;
        }
        else if(s3.marks > s1.marks && s3.marks > s2.marks)
        {
            cout << s3.ID << " " << s3.name << " " << s3.sec << " " << s3.marks << endl;
        }
        
        else if (s1.marks >= s2.marks && s1.marks > s3.marks)
        {
            if(s1.ID<s2.ID)
                cout << s1.ID << " " << s1.name << " " << s1.sec << " " << s1.marks << endl;
        }
        else if (s1.marks >= s2.marks && s1.marks > s3.marks)
        {
            if(s2.ID<s1.ID)
                cout << s2.ID << " " << s2.name << " " << s2.sec << " " << s2.marks << endl;
        }

        else if (s1.marks >= s3.marks && s1.marks > s2.marks)
        {
            if(s1.ID<s3.ID)
            cout << s1.ID << " " << s1.name << " " << s1.sec << " " << s1.marks << endl;
        }
        else if (s1.marks >= s3.marks && s1.marks > s2.marks)
        {
            if(s3.ID<s1.ID)
            cout << s3.ID << " " << s3.name << " " << s3.sec << " " << s3.marks << endl;
        }

        else if (s2.marks >= s3.marks && s2.marks > s1.marks)
        {
            if(s2.ID<s3.ID)
            cout << s2.ID << " " << s2.name << " " << s2.sec << " " << s2.marks << endl;
        }
        else if (s2.marks >= s3.marks && s2.marks > s1.marks)
        {
            if(s3.ID<s2.ID)
            cout << s3.ID << " " << s3.name << " " << s3.sec << " " << s3.marks << endl;
        }


        else if (s1.marks >= s2.marks && s1.marks >= s3.marks)
        {
            if(s1.ID<s2.ID && s1.ID<s3.ID )
                cout << s1.ID << " " << s1.name << " " << s1.sec << " " << s1.marks << endl;
        }
        else if (s1.marks >= s2.marks && s1.marks >= s3.marks)
        {
            if(s2.ID<s1.ID && s2.ID<s3.ID )
                cout << s2.ID << " " << s2.name << " " << s2.sec << " " << s2.marks << endl;
        }
        else if (s1.marks >= s2.marks && s1.marks >= s3.marks)
        {
            if(s3.ID<s2.ID && s3.ID<s1.ID )
                cout << s2.ID << " " << s2.name << " " << s2.sec << " " << s2.marks << endl;
        }
        t--;
    }
    return 0;
}