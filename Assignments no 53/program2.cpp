
//write a generic program to check wtether array is sorted

#include <iostream>
using namespace std;

template <class T>
bool CheckSorted(T *arr, int iSize)
{
    for(int i = 0; i < iSize - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {10,20,30,40,50};

    bool bRet = CheckSorted(arr, 5);

    if(bRet == true)
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}
//op:TRUE
