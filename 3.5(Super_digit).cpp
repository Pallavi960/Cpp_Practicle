#include<iostream>
#include<vector>
#include<string>
using namespace std;

void find_sum(int n,int &sum)
{
    if(n<10)//if iot is single digit
    {
        sum=n;
        return;
    }
    while(n>0)//do untill get single digit
    {
        sum+=n%10;
        n=n/10;
    }

}


int main()
{
    string n;
    cout<<"Enter the string:";
    cin>>n;
    int time;
    cout<<"How Many time you want to repeate it?";//Enter choice
    cin>>time;
    int sum=0;
    find_sum(stoi(n),sum);
    int get=sum*time;
    int ans=0;
   find_sum(get,ans);
   cout<<"The super digit is:"<<ans;

    return 0;
}
