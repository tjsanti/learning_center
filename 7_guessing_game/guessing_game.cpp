#include <iostream>

using namespace std;

int get_guess() {
    cout << "Guess a number between 1 and 100: ";
    int guess;
    cin >> guess;
    
    return guess;
};

int main() {
    int secret = 47, remaining_guesses = 10;

    while (remaining_guesses > 0) {
        int guess = get_guess();
        if (guess == secret) {
            cout << "You win!";
            break;
        } else if (guess > secret) {
            cout << "Lower." << endl;
        } else {
            cout << "Higher." << endl;
        };
        remaining_guesses -= 1;
    };

    if (remaining_guesses == 0) {
        cout << "Sorry, you lose.";
    };
};