#include <iostream>
#include <cstdlib>
#include <ctime>
  Void numberGuessing() 
   {
    srand(time(0));
    int numberguess = rand() % 100 + 1;
    int userguess;
    int attempts = 0;

    cout << "Number Guessing Game" << endl;
    cout << "guess the number between 1 to 100 :" << endl;

    do {
        cout << "Give the guess number: ";
        cin >> userguess;
        attempts++;

        if (userGuess > numberguess) 
          {
            cout << " Give a smaller number:" << endl;
          } 
        else if (userGuess < numberguess) 
          {
            cout << " Give a bigger number :" << endl;
          } 
        else 
          {
            cout << "\n You guessed the right number:" 
                 << numberguess << endl;
            cout << "Total attempts: " << attempts << endl;
          }
       }while (userGuess != numberguess);

    getch();
}