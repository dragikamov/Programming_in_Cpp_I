/*
CH08-320142
a2 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

using namespace std;
bool isPalindrome(string a)
{
    int i=0,j=a.size();
    j--;
    while(i!=j)
    {
        if(a[i]!=a[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    string x;
    while(1)
    {
        cout<<"Please enter a word to check if it is a palindrome"<<endl;
        getline(cin,x);
        if(x=="quit")
        {
            return 0;
        }
        bool b=isPalindrome(x);
        if(b==1)
        {
            cout<<"The word you entered is a palindrome"<<endl;
        }
        else if(b==0)
        {
            cout<<"The word you entered is not a palindrome"<<endl;
        }
    }
    return 0;
}
