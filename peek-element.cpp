#include <iostream>
using namespace std;

int Peak_Element(int arr[],int n)
{
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        cout<<arr[i];
    }
    return 0;
}
int main() 
{
    int arr[]={1,2,7,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    PeakElm(arr,n);
    return 0;
}
