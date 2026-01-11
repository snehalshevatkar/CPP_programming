
//write generic program to perform addition of two numbers
#include<stdio.h>

template <class T>
T Add(T no1, T no2)
{
    T ans;
    ans = no1 + no2;
    return ans;
}

int main()
{
    int iRet = Add(10,20);
    printf("%d\n", iRet);

    float fRet = Add(10.5f,20.3f);
    printf("%f\n", fRet);

    return 0;
}
/*
op:30
30.800000

*/