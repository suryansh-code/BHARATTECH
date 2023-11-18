#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// Function to roll a dice
int rollDice() {
    return rand() % 6 + 1;
}

// Function to play the Snake and Ladder game
void playGame() {
    int player1 = 0, player2 = 0; // Initial positions of players
    int currentPlayer = 1; // 1 for player 1, 2 for player 2

    while (player1 < 100 && player2 < 100) {
        cout << "Player " << currentPlayer << ", press Enter to roll the dice.";
        cin.ignore(); // Wait for user to press Enter
        int diceValue = rollDice(); // Roll the dice

        cout << "You rolled a " << diceValue << "." << endl;

        // Update the position based on the dice value
        if (currentPlayer == 1) {
            player1 += diceValue;
        } else {
            player2 += diceValue;
        }

        // Check for snakes and ladders
        if (player1 == 12) {
            player1 = 2;
            cout << "Oops! Snake bite for Player 1. You are now at position 2." << endl;
        } else if (player1 == 25) {
            player1 = 4;
            cout << "Oops! Snake bite for Player 1. You are now at position 4." << endl;
        } else if (player1 == 35) {
            player1 = 22;
            cout << "Oops! Snake bite for Player 1. You are now at position 22." << endl;
        } else if (player1 == 48) {
            player1 = 11;
            cout << "Oops! Snake bite for Player 1. You are now at position 11." << endl;
        } else if (player1 == 62) {
            player1 = 19;
            cout << "Oops! Snake bite for Player 1. You are now at position 19." << endl;
        } else if (player1 == 74) {
            player1 = 45;
            cout << "Oops! Snake bite for Player 1. You are now at position 45." << endl;
        } else if (player1 == 89) {
            player1 = 53;
            cout << "Oops! Snake bite for Player 1. You are now at position 53." << endl;
        } else if (player1 == 99) {
            player1 = 41;
            cout << "Oops! Snake bite for Player 1. You are now at position 41." << endl;
        } else if (player1 == 5) {
            player1 = 16;
            cout << "Great! You found a ladder. Player 1 is now at position 16." << endl;
        } else if (player1 == 15) {
            player1 = 27;
            cout << "Great! You found a ladder. Player 1 is now at position 27." << endl;
        } else if (player1 == 22) {
            player1 = 37;
            cout << "Great! You found a ladder. Player 1 is now at position 37." << endl;
        } else if (player1 == 41) {
            player1 = 56;
            cout << "Great! You found a ladder. Player 1 is now at position 56." << endl;
        } else if (player1 == 55) {
            player1 = 68;
            cout << "Great! You found a ladder. Player 1 is now at position 68." << endl;
        } else if (player1 == 75) {
            player1 = 88;
            cout << "Great! You found a ladder. Player 1 is now at position 88." << endl;
        } else if (player1 == 92) {
            player1 = 99;
            cout << "Great! You found a ladder. Player 1 is now at position 99." << endl;
        }

        // Switch to the next player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;

        // Display current positions
        cout << "Player 1 is at position " << player1 << "." << endl;
        cout << "Player 2 is at position " << player2 << "." << endl;
        cout << "-----------------------------" << endl;
    }

    // Determine the winner
    if (player1 >= 100) {
        cout << "Player 1 wins!" << endl;
    } else {
        cout << "Player 2 wins!" << endl;
    }
}

int main() {
    // Seed the random number generator
    srand(time(0));

    // Start the game
    playGame();

    return 0;
}
