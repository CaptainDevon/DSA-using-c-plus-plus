#include <iostream>
using namespace std;
class array_operations
{
private:
    int temp;
public:
    int array_display(int n,int a[])
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
        cout << endl;
        return 0;
    }
    int largest_smallest_element(int n, int a[])
    {
        int largest_number = a[0];

        int smallest_number = a[0];

        for (int i = 0; i < n; i++)
        {
            if (a[i] < smallest_number)
            {
                smallest_number = a[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > largest_number)
            {
                largest_number = a[i];
            }
        }
        cout << endl;
        cout << "the smallest element in an array is= " << smallest_number << endl;
        cout << "the largest element in an array is= " << largest_number << endl;
        return 0;
    }

    int linear_search(int n, int a[])
    {
        int key;
        cout << "enter the element to search= ";
        cin >> key;
        for (int i = 0; i < n; i++)
        {
            if(key == a[i])
            {
                cout << "the element is present at " << i + 1 << " th position" << endl;
            }
            
        }
        return 0;
    }

    int reversing_array(int n, int a[])
    {


        for (int i = 0; i < n; i++)
        {
            cout << endl;
            cout << a[n - i - 1];
        }
        cout << endl;
        return 0;
    }

    int bubble_sort(int a[], int n)
    {
        int temp, counter;
        counter = 1;
        while (counter < n)
        {
            for (int i = 0; i < n - counter; i++)
            {
                if (a[i] > a[i + 1])
                {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
            counter++;
        }

        cout << "the sorted array after bubble sort" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << endl;
        }
        return 0;
    }

    int insertion_sort(int n, int a[])
    {

        for (int i = 1; i < n; i++)
        {
            int current = a[i];
            int j = i - 1;
            while (a[j] > current && j >= 0)
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = current;
        }
        cout << "the sorted array after insertion sort" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << endl;
        }
        return 0;
    }
    int selection_sort(int a[], int n)
    {
        int temp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        cout << "the sorted array after selection sort" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << endl;
        }
        return 0;
    }
};


  
int main()
{

    //array
    int arr[100];
    int n;
    cout << "enter the number of elements in an array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << n - i << " elements" << endl;
        cin >> arr[i];
    }

    array_operations object_array;
    object_array.array_display(n, arr);
    object_array.largest_smallest_element(n, arr);
    object_array.linear_search(n, arr);
    object_array.reversing_array(n, arr);
    object_array.bubble_sort(arr,n);
    object_array.array_display(n, arr);
    object_array.insertion_sort(n, arr);
    object_array.array_display(n, arr);
    object_array.selection_sort(arr, n);
}





