#include<iostream>
#include<vector>
#include <chrono>
using namespace std;

int Sum(vector<int> &nums)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)//lopp for iterating 
        {

            sum+=nums[i];
        }
        return sum;
}

int sum_using_recursion(vector<int> &nums,int pos)
{
    if(pos==nums.size())
        return 0;
    else
        return sum_using_recursion(nums,pos+1)+nums[pos];//function calls itself
}

int main()
{
    vector<int>nums={1,2,3,4,5};
    int ans=Sum(nums);
    int ans2=sum_using_recursion(nums,0);
    cout<<"Sum using for loop:"<<ans<<endl;
    cout<<"Sum using recursion:"<<ans2;
    return 0;
}
