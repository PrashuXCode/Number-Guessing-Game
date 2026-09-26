#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void Difficulty(int range , int attempts , std::string Diff)
{
    /*  Rules in  Difficulty 
        1. EASY - Guess will be between 1 to 50 and 10 attempts
        2. MEDIUM - Guess will be between 1 to 100 and 7 attempts
        3. HARD - Guess will be between 1 to 200 and 5 attempts
    */
    int number, guess;
    number = rand() % range + 1 ;   //Using random func
    cout<<"You selected "<<Diff<<". \n";
    cout<<"\n";
    cout<<"I'm thinking of a number between 1 and "<<range<<". \n";
    cout<<"You have "<<attempts<<" attempts.\n";
    cout<<"\n";
    for (int i = 0; i < attempts; i++)
    {
        cout<<"Enter Your Guess : ";
        cin>>guess;
        if (guess==number)
        {
            if (i == 0)
            {
                cout<<"Incredible! You got it on your first try! \n \n";
                return ;
            }
            cout<<"Correct! You guessed the number! \n \n";
            return ;
        }else if (guess > number && guess<range+1)
        {
            cout<<"High!\n \n";
        }else if (guess < number && guess>0)
        {
            cout<<"Low!\n \n";
        }else if (guess<=0 || guess>50)
        {
            cout<<"Invalid Guess \n";
            cout<<"Attempt Deducted \n \n";
        }
        
        
    }
    cout<<"Game Over ! \n \n";
    cout<<"The number was : "<<number<<"\n \n"; 
}

int main()
{
    int play,choice ;
    play = 1;
    bool exitloop = false;
    for (int i = 0; i < 1000; i++)
    {
        if (play == 1)
        {
            cout<<"=============================== \n";
            cout<<"    NUMBER GUESSING GAME\n";
            cout<<"=============================== \n \n";
            cout<<"1------> EASY\n";
            cout<<"2------> MEDIUM\n";
            cout<<"3------> HARD\n";
            cout<<"4------> CUSTOM\n";
            cout<<"5------> EXIT\n \n";
            cout<<"Choose Difficulty : ";
            cin>>choice;
            switch (choice)
            {
                case 1:
                    Difficulty(50,10,"EASY");
                    break;
                case 2:
                    Difficulty(100,7,"MEDIUM");
                    break;
                case 3:
                    Difficulty(200,5,"HARD");
                    break;
                case 4:
                    int r,a;
                    cout<<"Enter the range from 1 to : ";
                    cin>>r;
                    cout<<"Enter the no. of attempts : ";
                    cin>>a;
                    Difficulty(r,a,"CUSTOM");
                    break;
                case 5:
                    exitloop = true;
                    break;
                default:
                    cout<<"Input A Valid Option!";
            }
            if(exitloop)
            {
                break;
            }
            cout<<"Play again ? \n \n";
            cout<<"1----> Yes\n";
            cout<<"2----> No\n \n";
            cout<<"Choose : ";
            cin>>play;

        }
        
    }
    
    cout<<"Thanks For Playing !\n";
    cout<<"Goodbye!";

    return 0 ;
}
