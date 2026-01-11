//write a generic program to find 2nd smallest elements

#include <iostream>
using namespace std;

template <class T>
T SecondMin(T *arr, int iSize)
{
    T min = arr[0], smin = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] < min)
        {
            smin = min;
            min = arr[i];
        }
        else if(arr[i] < smin && arr[i] != min)
        {
            smin = arr[i];
        }
    }
    return smin;
}

int main()
{
    int arr[] = {10,20,30,40,50};

    cout << SecondMin(arr, 5);

    return 0;
}
//op:20