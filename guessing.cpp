#include <iostream>
#include <string>
using namespace std;



int main(){
    int i;
    string choice;
    string amountString;
    string betString;
    string guessString;
    int amount; //Player's amount 
    int bet; //Player's bet
    int guess; //Player's guess
    int result; // Actual result
    bool correct = false; //Player guessed?
    int win;
    string statement = "You won";
    
    cout << "\n\n\nWelcome to the Betting Casino!\n\n\n";
    cout << "Choose one option:\npress p to play \npress q to quit \nChoice: \n";
    getline(cin, choice);
    if (choice == "p"){
        //Game rules
        cout << "Before you start, here are the rules of the game:" << endl;
        cout << "You will have an initial amount of game credits to get started" << endl;
        cout << "You will bet any amount you prefer before the game starts" << endl;
        cout << "You are gussing a number between 1 and 100" << endl;
        cout << "Every time you have guessed the correct number, you will get 10 times the amount you bet!" << endl;
        cout << "If you lose, you will have a chance to bet and guess again." << endl;
        cout << "Easy, right?" << endl;
        cout << "\n\n Let's Get Started!!! \n\n" << endl;
        cout << "Enter the deposit amount to play: " << endl;
        getline(cin, amountString);
        stringstream geek(amountString);
        geek >> amount;        
    };
    
    do{
        if (correct)
            result = 1 + rand() % 100; 
        cout << "Enter your bet: ";
        getline(cin, betString);
        stringstream geek(betString) >> bet;

        cout << "Guess a number between 1 and 100: ";
        getline(cin, guessString);
        stringstream geek(guessString);
        geek >> guess;
        
        if (guess == result){
            cout << "That's correct!" << endl;
            win = bet*10;
            amount = amount + win;
            cout << "Your current amount is: " << amount << endl;
        } else{
            cout << "Sorry.. good luck next time" << endl;
        };
        cout << "Make a choice again:\nplay (p)\nquit (q)\nChoice: " << endl;
        getline(cin, choice);
        cout << "Enter your bet: " << endl;
        getline(cin, betString);
        stringstream geek(betString);
        geek >> bet;
    }while(choice == "p");

    if (choice == "q"){
        cout << "Come back again! Thank you!";
        return 0; 
    } else{
        cout << "Invalid input. Plese press p to play or press q to quit.";
    };
    return 0;
}