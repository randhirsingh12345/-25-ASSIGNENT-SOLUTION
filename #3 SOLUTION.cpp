//Define a class Factorial and define an instance member function to find the Factorial of a number using class.
#include<iostream>
using namespace std;
class factorial
{
    private:
    int num;
    public:
        void fact()
        {
            int i,fact=1;
            for(i=1;i<=num;i++)
            {
                fact=fact*i;
            }
            cout<< "Factorial of "<<num<<" is "<<fact;
        }
        void input()
        {
            cout<< "Enter a number : ";
            cin>>num;
        }
};
int main()
{
    factorial f1;
    f1.input();
    f1.fact();
}
