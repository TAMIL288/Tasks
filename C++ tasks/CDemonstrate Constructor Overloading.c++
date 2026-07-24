#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout<<"Default Constructor"<<endl;
    }

    Demo(int x)
    {
        cout<<"Parameterized Constructor"<<endl;
        cout<<x;
    }
};

int main()
{
    Demo d1;
    int n;
    cin>>n;
    Demo d2(n);
    return 0;
}