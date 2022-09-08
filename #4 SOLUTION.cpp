/*Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class*/
#include<iostream>
using namespace std;
class LargestNumber
{
     private:
              int a,b,c;
     public:
        void input()
        {
            cout<< "Enter three number : ";
            cin>>a>>b>>c;
        }
        void largest()
        {
            if(a>b && a>c)
                cout<<a<<" is largest ";
            else if(b>a && b>c)
                cout<<b<<" is largest ";
            else
                cout<<c<<" is largest ";
        }
};
int main()
{
    LargestNumber l;
    l.input();
    l.largest();
}
