#include<iostream>
using namespace std;

class Box
{
public:
    int l,b,h;

    void get()
    {
        cin >> l >> b >> h;
    }

    void volume()
    {
        cout << l*b*h;
    }
};

int main()
{
    Box x;
    x.get();
    x.volume();
    return 0;
}