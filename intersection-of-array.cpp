#include <iostream>

using namespace std;
int Intersection(int arr1[],int arr2[],int m,int n)
{
    int i=0;
    int j=0;
    while(i<m && j<n)
    {
        if(arr1[i]>arr2[j])
        {
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            cout << arr2[j]<<" ";
            i++;
            j++;
        }
            
    }
    return 0;
}
int main()
{
    int a1[]={1,2,3,4,5};
    int a2[]={4,5,6,7,8};
    int m=sizeof(a1)/sizeof(a1[0]);
    int n=sizeof(a2)/sizeof(a2[0]);
    Intersection(a1,a2,m,n);

    return 0;
}
