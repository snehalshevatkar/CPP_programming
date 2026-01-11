//write generic program to accept N values and search first occurrence of any specific value

#include<stdio.h>

template <class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            return i + 1;   // 1-based index as per assignment
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchFirst(arr,9,40);
    printf("%d", iRet);   // 6

    return 0;
}