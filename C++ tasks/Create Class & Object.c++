#include<iostream>
using namespace std;

class Student
{
public:
    int id;

    void get()
    {
        cin>>id;
    }

    void display()
    {
        cout<<id;
    }
};

int main()
{
    Student s;
    s.get();
    s.display();
    return 0;
}