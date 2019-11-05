#include <iostream>
#include <string>
using namespace std;



int main(){
    int i;
    string choice;
    string amountString;
    int amount; //Player's amount 
    
    cout << "\n\n\nWelcome to the Betting Casino!\n\n\n";
    cout << "Choose one option: \
     press p to play \
     press q to quit \
     Choice: \n
    ";
    getline(cin, choice);
    if (choice == "p"){
        cout << "Enter the deposit amount to play: ";
        getline(cin, amountString);
    }
    stringstream(amountString) >> amount;

    //Game rules
    cout << "Before you start, here are the rules of the game:\n";
    cout << "";

    do{

        

        printf("Guess a number between 1 and 100\n");
        scanf("%d", &i);
        result = 1 + rand() % 100

        while (i!=result){
            if (i<1 || i>100){
                printf("Put a number between 1 and 100 \
                Number: ")
            }
            if (i == "quit")
                break;
        }
    }while(choice == "p");

    if (choice == "q"){
        cout << "Come back again! Thank you!";
        return 0; 
    }
    else{
        cout << "Invalid input. Plese press p to play or press q to quit."
    }
    
    

    return 0;
}