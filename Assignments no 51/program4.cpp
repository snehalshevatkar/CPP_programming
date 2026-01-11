//write generic program to accept N values and search last occurrence of any specific value


#include<stdio.h>

template <class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    for(int i = iSize-1; i >= 0; i--)
    {
        if(arr[i] == iNo)
        {
            return i + 1;   // +1 because assignment output is 1-based
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr,9,40);
    printf("%d", iRet);   // Output : 8

    return 0;
}