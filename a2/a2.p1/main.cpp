/*
CH08-320142
a2 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

using namespace std;
int myfirst(int arr[],int n)
{
    int x=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0 && arr[i]%2==0)
        {
            x=arr[i];
            break;
        }
    }
    return x;
}
double myfirst(double arr[],int n)
{
    double x=-1.1;
    for(int i=0;i<n;i++)
    {
        int y=arr[i];
        if(arr[i]<0 && arr[i]==y)
        {
            x=arr[i];
            break;
        }
    }
    return x;
}
char myfirst(char arr[],int n)
{
    char x='0';
    for(int i=0;i<n;i++)
    {
        if((arr[i]>='a' && arr[i]<='z')||(arr[i]>='A' && arr[i]<='Z'))
        {
            if((arr[i]!='a' && arr[i]!='e' && arr[i]!='i' && arr[i]!='o' && arr[i]!='u') &&
               (arr[i]!='A' && arr[i]!='E' && arr[i]!='I' && arr[i]!='O' && arr[i]!='U'))
            {
                x=arr[i];
                break;
            }
        }
    }
    return x;
}
int main()
{
    int n;
    cout<<"Enter the size of the array for the integers"<<endl;
    cin>>n;
    int arr_n[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr_n[i];
    }
    cout<<"The first positive even number of the array is: "<<myfirst(arr_n,n)<<endl;
    cout<<"Enter the size of the array for the doubles"<<endl;
    cin>>n;
    double arr_d[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr_d[i];
    }
    cout<<"The first negative element without a fraction part is: "<<myfirst(arr_d,n)<<endl;
    cout<<"Enter the size of the array for the chars"<<endl;
    cin>>n;
    char arr_c[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr_c[i];
    }
    cout<<"The first consonant is: "<<myfirst(arr_c,n)<<endl;
    return 0;
}
