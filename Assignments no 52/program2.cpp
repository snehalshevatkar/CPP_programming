//write a generic program to find largest number to find largest number from three numbers

#include<stdio.h>

template<class T>
T Max(T no1, T no2, T no3)
{
    T max;

    if(no1 > no2 && no1 > no3)
        max = no1;
    else if(no2 > no1 && no2 > no3)
        max = no2;
    else
        max = no3;

    return max;
}

int main()
{
    int iRet = Max(10,20,30);
    printf("%d\n", iRet);

    float fRet = Max(10.5f,20.5f,5.5f);
    printf("%f", fRet);

    return 0;
}

/*   
  op: 30
      20.500000
*/