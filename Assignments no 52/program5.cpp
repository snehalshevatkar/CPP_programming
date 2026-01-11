//write a generic program to accept N values from user and return smallest value...

#include<stdio.h>

template<class T>
T Min(T *arr, int iSize)
{
    T min = arr[0];
    for(int i=1; i<iSize; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Min(arr,5);
    printf("%d\n", iRet);   // 10

    float fRet = Min(brr,4);
    printf("%f\n", fRet);   // 3.7

    return 0;
}
/*   
op:10
   3.700000
*/