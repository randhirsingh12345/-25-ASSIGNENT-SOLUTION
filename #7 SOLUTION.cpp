/*Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.*/
#include<iostream>
using namespace std;
class Greatest
{
    private:
        int a,b,c;
    public:
        void input()
        {
            cout<< "Enter three number : ";
            cin>>a>>b>>c;
        }
        void Largest()
        {
            if(a>b&& a>c)
                cout<<a<<" is Largest";
             else if(b>c&& b>c)
                cout<<b<<" is Largest";
            else
                cout<<c<<" is Largest";
        }


};
int main()
{
    Greatest larg;
    larg.input();
    larg.Largest();
    return 0;
}

