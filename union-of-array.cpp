

#include <iostream>

using namespace std;
int Union(int arr1[],int arr2[],int m,int n)
{
    int i=0;
    int j=0;
    while(i<m && j<n)
    {
        if(arr1[i]>arr2[j])
        {
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i]<arr2[j])
        {
            cout<<arr2[j++]<<" ";
        }
        else
        {
            cout<<arr2[j++]<<" ";
            i++;
        }
    }
    while(i<m)
    {
        cout<<arr1[i++]<<" ";
    }
    
    while(j<n)
    {
        cout<<arr2[j++]<<" ";
    }
    return 0;
    
    
}

int main()
{
    int a1[]={1,3,5,7,9};
    int a2[]={2,3,5,8,9};
    int m=sizeof(a1)/sizeof(a1[0]);
    int n=sizeof(a2)/sizeof(a2[0]);
    
    Union(a1,a2,m,n);
    

    return 0;
}
