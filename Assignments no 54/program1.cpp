//write a generic to search to valuse in an array

#include <iostream>
using namespace std;

template <class T>
bool Search(T *arr, int iSize, T value)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == value)
            return true;
    }
    return false;
}

int main()
{
    int arr[] = {10,20,30,40,50};

    bool bRet = Search(arr, 5, 30);

    if(bRet)
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}
//op:true