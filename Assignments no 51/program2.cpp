//write generic program to accept N values and count frequency of any specific value..
#include<stdio.h>

template <class T>
int Frequency(T *arr, int iSize, T iNo)
{
    int iCnt = 0;
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = Frequency(arr,9,10);
    printf("%d", iRet);   // 4

    return 0;
}