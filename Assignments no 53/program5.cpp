
//write a generic program to replace all occurrences of a value

#include <iostream>
using namespace std;

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == oldVal)
        {
            arr[i] = newVal;
        }
    }
}

int main()
{
    int arr[] = {10,20,10,30,10};

    Replace(arr, 5, 10, 99);

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//op:99 20 99 30 99
