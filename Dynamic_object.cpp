#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double cgpa;

    Student(int roll,int cls,double cgpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->cgpa=cgpa;
    }


};
/*
Student fun()
{
    Student karim(1,12,3.50);
    Student p=karim;
    return p;

}
*/
int main()
{
    //static object
    Student karim(1,12,3.50);
    //dynamic object
    Student *rahim=new Student(2,12,3.40);
    
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.cgpa<<endl;
    cout<<rahim->roll<<" "<<rahim->cls<<" "<<rahim->cgpa;

}