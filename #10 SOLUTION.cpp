/*Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc*/
#include<iostream>
using namespace std;
class Area
{
    private:
        int r,l,b,bj;
    public:
        void areaof_square()
        {
            cout<<"Enter side of square ";
            cin>>bj;
            cout<<"Area of square is " <<bj*bj;
        }
        void areaof_rectangle()
        {
            cout<<"Enter length or base of rectangle  ";
            cin>>l>>b;
            cout<<"Area of rectangle is " <<l*b;
        }
        void areaof_circle()
        {
            cout<<"Enter radius of circle ";
            cin>>r;
            cout<<"Area of circle is " <<3.14*r*r;
        }

};
int main()
{
    Area square, rectangle , circle;
    square.areaof_square();
    cout<< "\n";
    rectangle.areaof_rectangle();
    cout<< "\n";
    circle.areaof_circle();
    cout<< "\n";
    return 0;
}
