/*
CH08-320142
a1 p6.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std ;

int main()
{
    string name;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    int guess;
    int n=0;
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber=(rand()%100)+1;
    while(1)
    {
        cout<<"Enter your guess:"<<endl;
        cin>>guess;
        n++;
        if(guess==randomNumber)
        {
            cout<<"Your guess was right"<<endl;
            cout<<"It took you "<<n<<" tries."<<endl;
            break;
        }
        else
        {
            if(guess<randomNumber)
            {
                cout<<"Wrong! Guess higher"<<endl;
            }
            else if(guess>randomNumber)
            {
                cout<<"Wrong! Guess lower"<<endl;
            }
        }
    }
    return 0;
}
