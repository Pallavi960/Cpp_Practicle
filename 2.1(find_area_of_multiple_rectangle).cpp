#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int width;
public:
   void get_data()
   {
       cout<<"Enter width:";
       cin>>width;
       cout<<"Enter length:";
       cin>>length;
   }
   void area()
   {
    cout<<"Area is:"<<length*width<<endl;
   }
   void perimeter()
   {
       cout<<"perimeter is:"<<2*(length+width)<<endl;
   }
};
int main()
{
    int n;
    cout<<"Enter number of rectangle:";
    cin>>n;
    Rectangle r[n];
        for(int i=0;i<n;i++)
        {
            cout<<"--------------"<<"for the"<<" rectangle no:"<<i+1<<"--------------"<<endl;
            r[i].get_data();
            cout<<endl;
            r[i].area();
            r[i].perimeter();
            cout<<endl;
        }
    return 0;
}

