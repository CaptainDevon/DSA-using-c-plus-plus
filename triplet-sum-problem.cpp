#include <iostream>

using namespace std;
int triplet_Sum(int arr[] , int n , int sum)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
    return 0;
}
int main() 
{
    int sum=24;
    int arr[]={12, 3, 4, 1, 6, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    triplet_Sum(arr,n,sum);
    return 0;
}
