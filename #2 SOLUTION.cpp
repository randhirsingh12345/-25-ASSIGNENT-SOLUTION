/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;
class Time
{
    private:
      int h;
      int mint;
      int sec;
    public:
        void set_data(int hrs,int m,int s)
        {
            h=hrs;
            mint=m;
            sec=s;

        }
    void displaydate()
    {
        cout<<h<<" hr "<< mint << " min " <<sec<< " sec";
    }
};
int main()
{
    Time t1;
    t1.set_data(3,45,20);
    t1.displaydate();
}
