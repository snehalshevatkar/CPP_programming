//write ageneric to perform devision of two numbers

#include<stdio.h>

template <class T>
T Div(T no1, T no2)
{
    T ans;
    ans = no1 / no2;
    return ans;
}

int main()
{
    int iRet = Div(20,10);
    printf("%d\n", iRet);

    float fRet = Div(20.0f,3.0f);
    printf("%f\n", fRet);

    return 0;
}
/*
op:2
6.666667

*/