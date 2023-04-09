#include <iostream>
using namespace std;

int subset(int arr1[],int arr2[],int m,int n)
{
    int count=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                i++;
                j++;
                count++;
            }
        }
    }
    if(count>0)
    cout<<"array2 is the subset of array1"<<endl;
    else
    cout<<"array2 is not the subset of array1"<<endl;
    return 0;
}
int main()
{
    int arr1[] = {11, 1, 13, 21, 3, 7}; 
    int arr2[] = {11,2,21,3};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    
    subset(arr1,arr2,m,n);

    return 0;
}
