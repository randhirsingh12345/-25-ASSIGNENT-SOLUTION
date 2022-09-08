//Define a class Rectangle and define an instance member function to find the area of the rectangle .
#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breath;
    public:
        void area_of_rectangle()
        {
            int area;
          cout<<"Area of Rectangle is ";
          area=length*breath;
          cout<<area;
        }
        void input()
        {
            cout<< "Enter length of rectangle : ";
            cin>>length;
            cout<< "Enter breath of rectangle : ";
            cin>>breath;

        }



};
int main()
{
     rectangle r1;
    r1.input();
    r1.area_of_rectangle();
    return 0;
}

