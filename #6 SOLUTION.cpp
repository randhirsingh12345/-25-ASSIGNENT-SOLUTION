/*Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
#include<iostream>
using namespace std;
class Square
{
    private:
        int num;
    public:
        void input()
        {
            cout<< "Enter number ";
            cin>>num;
        }
        void sqr()
        {
            cout<< "Square of "<<num<< " is " <<num*num;
        }


};
int main()
{
    Square s;
    s.input();
    s.sqr();

}
