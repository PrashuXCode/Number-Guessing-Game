#include <iostream>
#include <cstdlib>
using namespace std;

void Easy()
{
    /*  Rules in Easy Difficulty 
        1. Guess will be between 1 to 50
        2. Player will get only 10 attempts
    */
    int number, guess;
    number = rand() % 50 + 1 ;   //Using random func
    cout<<"You selected EASY. \n";
    cout<<"\n";
    cout<<"I'm thinking of a number between 1 and 50. \n";
    cout<<"You have 10 attempts.";
    cout<<"\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter Your Guess : ";
        cin>>guess;
        if (guess==number)
        {
            cout<<"Correct! You guessed the number! \n \n";
            return ;
        }else if (guess > number)
        {
            cout<<"Too High!\n \n";
        }else if (guess < number)
        {
            cout<<"Too Low!\n \n";
        }
        
        
    }
    cout<<"Game Over ! \n \n";
    cout<<"The number was : "<<number<<"\n \n"; 
}

void Medium()
{
    /*  Rules in Medium Difficulty 
        1. Guess will be between 1 to 100
        2. Player will get only 7 attempts
    */
    int number, guess;
    number = rand() % 100 + 1 ;   //Using random func
    cout<<"You selected MEDIUM. \n";
    cout<<"\n";
    cout<<"I'm thinking of a number between 1 and 100. \n";
    cout<<"You have 7 attempts.";
    cout<<"\n";
    for (int i = 0; i < 7; i++)
    {
        cout<<"Enter Your Guess : ";
        cin>>guess;
        if (guess==number)
        {
            cout<<"Correct! You guessed the number! \n \n";
            return ;
        }else if (guess > number)
        {
            cout<<"Too High!\n \n";
        }else if (guess < number)
        {
            cout<<"Too Low!\n \n";
        }
        
        
    }
    cout<<"Game Over ! \n \n";
    cout<<"The number was : "<<number<<"\n \n"; 
}

int main()
{
    int play,choice ;
    play = 1;
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
            cout<<"4------> NO LIMIT\n";
            cout<<"5------> EXIT\n \n";
            cout<<"Choose Difficulty : ";
            cin>>choice;
            if (choice == 1)
            {
                Easy();
                cout<<"Play again ? \n \n";
                cout<<"1----> Yes\n";
                cout<<"2----> No\n \n";
                cout<<"Choose : ";
                cin>>play;

            }else if (choice == 2)
            {
                Medium();
                cout<<"Play again ? \n \n";
                cout<<"1----> Yes\n";
                cout<<"2----> No\n \n";
                cout<<"Choose : ";
                cin>>play;
            }else if (choice == 5)
            {
                break ;
            }
        }
        
    }
    
    cout<<"Thanks For Playing !\n";
    cout<<"Goodbye!";

    return 0 ;
}
