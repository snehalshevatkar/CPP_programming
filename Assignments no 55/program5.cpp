//write generic program to find maximum of four values

#include<stdio.h>

template <class T>
T Max(T a, T b, T c, T d)
{
    T max = a;

    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    return max;
}

int main()
{
    int iRet = Max(10,20,30,25);
    printf("%d\n", iRet);

    float fRet = Max(10.5f,20.2f,30.8f,25.4f);
    printf("%f\n", fRet);

    return 0;
}
/*  
op:30
30.800000

*/