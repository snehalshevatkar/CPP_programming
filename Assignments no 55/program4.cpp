//write generic program to swap two values

#include<stdio.h>

template <class T>
void Swap(T &no1, T &no2)
{
    T temp;
    temp = no1;
    no1 = no2;
    no2 = temp;

    printf("After Swap : %f %f\n",(double)no1,(double)no2);
}

int main()
{
    int a = 10, b = 20;
    Swap(a,b);

    float x = 3.5f, y = 7.8f;
    Swap(x,y);

    return 0;
}
/* 
op:After Swap : 20.000000 10.000000
After Swap : 7.800000 3.500000


*/