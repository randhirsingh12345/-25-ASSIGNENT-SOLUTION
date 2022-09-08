//Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class area
{
    private:
    int r;
    public:
        void input_radius()
        {
            cout<< "enter radius : ";
            cin>>r;
        }
        void display_area()
        {
           float area;
               area=3.14*r*r;
               cout<< "Area of circle is "<<area;
        }
};
int main()
{
    area a;
    a.input_radius();
    a.display_area();
    return 0;
}
