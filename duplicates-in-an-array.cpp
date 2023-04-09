#include <iostream>

using namespace std;
int duplicates_in_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[j]<<" ";
            }
        }
    }
    return 0;
}
int main()
{
    int a[]={1, 2, 3, 6, 3, 6, 1};
    int n=sizeof(a)/sizeof(a[0]);
    duplicates_in_array(a,n);

    return 0;
}
