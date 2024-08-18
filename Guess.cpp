#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));
    
    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int guess = 0;
    int exit;
    
    cout << "Welcome to the number guessing game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;
    
    // Loop until the user guesses the correct number
    while (guess != randomNumber) {
        
        cout << "If you want play then press (0) or For exit Press (1): ";
        cin >> exit;

        if (exit == 1) {
            cout << "The Random Number is " << randomNumber << endl;
            cout << "Thank you for playing the game" << endl;
            break;
            }

        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
        }
    }
    
    return 0;
}