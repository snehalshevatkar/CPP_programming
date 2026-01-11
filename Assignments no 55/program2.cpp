//write generic program to perform substraction of two number

#include<stdio.h>

template <class T>
T Sub(T no1, T no2)
{
    T ans;
    ans = no1 - no2;
    return ans;
}

int main()
{
    int iRet = Sub(20,10);
    printf("%d\n", iRet);

    float fRet = Sub(20.5f,10.2f);
    printf("%f\n", fRet);

    return 0;
}
/*
op:
10
10.300000

*/