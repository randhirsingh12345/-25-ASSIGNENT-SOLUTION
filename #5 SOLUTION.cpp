/*Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class*/
#include<iostream>
using namespace std;
class ReverseNumber
{
  private :
    int num;
  public:
    void reverse_number()
    {
        int r,k;
        while(num)
        {
            r=num%10;
            k=10*k+r;
            num=num/10;
        }
        cout<< "Reverse of number "<<k;
    }
    void input()
    {
        cout<<"Enter a  number ";
        cin>>num;
    }
};
int main()
{
    ReverseNumber r;
    r.input();
    r.reverse_number();
    return 0;

}
