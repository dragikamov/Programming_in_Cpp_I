/*
CH08-320142
a2 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

using namespace std;
void subtract_max(int* arr, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=m-arr[i];
    }
}
void deallocate(int* arr)
{
    delete []arr;
}
int main()
{
    int n,m=0;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    subtract_max(arr,n,m);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    deallocate(arr);
    return 0;
}
