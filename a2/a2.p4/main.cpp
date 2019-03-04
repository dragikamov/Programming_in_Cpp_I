/*
CH08-320142
a2 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

using namespace std;
void vowels(string &y)
{
    int f=y.size();
    for(int i=0;i<f;i++)
    {
        if(y[i]=='a' || y[i]=='e' || y[i]=='i' || y[i]=='o' || y[i]=='u')
        {
            y[i]='_';
        }
    }
}
int main()
{
    bool b=0;
    string arr[17]={"computer","television","keyboard","laptop","mouse","helicopter","airplane","board",
                    "table","window","chair","headphones","buttons","phone","banana","autumn","stress"};
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber=(rand()%17)+1;
    int n=1;
    while(b==0)
    {
        string x,y;
        x=arr[randomNumber];
        vowels(x);
        cout<<"Guess this word: "<<x<<endl;
        getline(cin,y);
        if(y.compare(arr[randomNumber])==0)
        {
            cout<<"Correct answer after: "<<n<<" tries."<<endl;
            cout<<"To continue write -yes- and to quit write -quit-. "<<endl;
            string c;
            getline(cin,c);
            if(c=="yes")
            {
                srand(static_cast<unsigned int>(time(0)));
                int randomNumber2=(rand()%17)+1;
                randomNumber=randomNumber2;
                n=1;
            }
            else if(c=="quit")
            {
                b=1;
            }
        }
        else
        {
            cout<<"Wrong! Please try again."<<endl;
            n++;
        }
    }
    return 0;
}
