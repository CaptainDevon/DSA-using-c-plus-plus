#include <iostream>
using namespace std;
int cylindrical_rotation(int arr[],int n)
{
    int key;
    for(int i=0;i<n;i++)
    {
        key=arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=key;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}
using namespace std;

int main()
{
    
   int a[]={1,2,3,4,5};
   int n=sizeof(a)/sizeof(a[0]);
   cylindrical_rotation(a,n);

    return 0;
}
