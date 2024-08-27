#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    string name;
    int number,guess=0;
    cout<<"Enter your name: ";
    getline(cin,name);
    srand((unsigned int)time(NULL));
    number=(rand()%100)+1;
    cout<<"Guess a number between 1-100"<<endl;
    do
    {
        cin>>guess;
        if (guess>number)
        {
            cout<<"Guess lower"<<endl;
        }
        else if (guess<number)
        {
            cout<<"Guess higher"<<endl;
        }
        else{
            cout<<"Congratulations! You guess the correct number";
        }
        
         
    } while (guess!=number);
    
    return 0;
}


