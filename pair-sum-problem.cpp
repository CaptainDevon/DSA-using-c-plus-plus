#include <iostream>
using namespace std;

int PairSum(int arr[] , int n , int sum)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
             count++;   
            }
        }
    }
    cout<<count;
    return 0;
}

int main() 
{
    int sum=6;
    int arr[]={ 1, 5, 7, -1, 5 };
    int n=sizeof(arr)/sizeof(arr[0]);
    PairSum(arr,n,sum);
    return 0;
}