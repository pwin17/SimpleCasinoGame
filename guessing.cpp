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
        cout << "Before you start, here are the rules of this game:" << endl;
        cout << "You will have an initial amount of game credits to get started" << endl;
        cout << "You will bet any amount you prefer before the game starts" << endl;
        cout << "You are gussing a number between 1 and 10" << endl;
        cout << "Every time you have guessed the correct number, you will get 10 times the amount you bet!" << endl;
        cout << "If you lose, you will have a chance to bet and guess again." << endl;
        cout << "Easy, right?" << endl;
        cout << "\n\n Let's Get Started!!! \n\n" << endl;
        cout << "Enter the deposit amount to play: " << endl;
        cin >> amount;
    };
    
    do{
        cout << "Your current balance is: " << amount << endl;
        result = 1 + rand() % 10; 
        cout << "Enter your bet: ";
        cin >> bet;
        while (bet < 0 || bet > amount){
            cout << "Please enter a valid amount. Your current balance is: " << amount << endl;
        };

        cout << "Guess a number between 1 and 10: ";
        cin >> guess;
        
        while (guess < 0 || guess > 10){
            cout << "Please put a number within range of 0 to 10: ";
            cin >> guess;
        }

        if (guess == result){
            cout << "That's correct!" << endl;
            win = bet*10;
            amount = amount + win;
            
        } else{
            cout << "Sorry.. good luck next time" << endl;
            cout << "The correct number is:" << result << endl;
            amount = amount - bet;
            if (amount <= 0){
                cout << "Game over. You have run out of money" << endl;
                return 0;
            }
        };

        cout << "_________________________________" << endl;
        cout << typeid(amount).name() << endl;        
        cout << typeid(bet).name() << endl;
        cout << typeid(result).name() << endl;
        cout << typeid(guess).name() << endl;
        cout << "_________________________________" << endl;

        cout << "Make a choice again:\nplay (p)\nquit (q)\nChoice: " << endl;
        cin >> choice;
    }while(choice == "p");

    if (choice == "q"){
        cout << "Come back again! Thank you!\n";
        return 0; 
    } else{
        cout << "Invalid input. Plese press p to play or press q to quit.";
    };
    return 0;
}