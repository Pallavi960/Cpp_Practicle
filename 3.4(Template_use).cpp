#include<iostream>
#include<vector>

using namespace std;

template<typename T>void Max_element(const vector<T>&container)//using template for find maxiimum 
{
  auto maxx=container[0];;
  for(int i=0;i<container.size();i++)
  {
      if(container[i]>maxx)
      {
          maxx=container[i];
      }
  }
  cout<<"Max element is:"<<maxx;
  cout<<endl;
}

template<typename T>void Reverse(vector<T>&container)//using template for reversing the data of any type
{
    int i=0,j=container.size()-1;
    while(i<j)
    {
        swap(container[i],container[j]);
        i++;
        j--;
    }

}

template<typename T>void Display(const vector<T>container)//using template fordisplay the data of any type
{
    cout<<"Reverse:";
    for(int i=0;i<container.size();i++)
    {
        cout<<container[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>numbers={1,2,3,4};//integer
    vector<char>character={'f','a','v'};//character
    vector<float>floating_numbers={12.3,78.5,5.76,1.2};//floting number


    Max_element(numbers);
    Reverse(numbers);
    Display(numbers);
    cout<<endl;

    Max_element(character);
    Reverse(character);
    Display(character);
    cout<<endl;

    Max_element(floating_numbers);
    Reverse(floating_numbers);
    Display(floating_numbers);
    cout<<endl;


    return 0;
}
