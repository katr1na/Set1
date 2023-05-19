/* CSCI 200: Assignment 1: A1 - Rock Paper Scissor Throw Down!
 *
 * Author: Katrina Ngo
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     // list here any outside assistance you used/received while following the
 *     // CS@Mines Collaboration Policy and the Mines Academic Code of Honor
 *
 * A simple Rock, Paper, Scissors game where the player chooses which move 
 * to play and the computer plays a random move in return. 
 * Mutliple matches can be played and stats are recorded.
 */

#include <iostream> // For cin, cout, etc.
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    string playerMove;
    string playerAnswer;
    string winningMove;
    string losingMove;
    bool playAgain;
    int gamesWon = 0;
    int gamesLost = 0;
    int gamesTied = 0;

// prompt user for rock, paper, or scissors move
    do {
        cout << "Let's play a quick game of Rock, Paper, Scissors!" << endl;
        cout << "Type P, R, or S to play a move." << endl;
        cout << "Your turn: ";
        cin >> playerMove;
        cout << endl;

// assigns user input of r, p, or s to a variable that contains their move
        if (playerMove == "P" || playerMove == "p") {
            playerMove = "Paper";
        } else if (playerMove == "R" || playerMove == "r") {
            playerMove = "Rock";
        } else if (playerMove == "S" || playerMove == "s") {
            playerMove = "Scissors";
        } 
        cout << "You choose " << playerMove << endl;

// generates a random value between 0 and 2 that corresponds to a move the computer will play
        int moveNum = rand() % 3;
        string compMove;
        if (moveNum == 0) {
            compMove = "Rock";
        } else if (moveNum == 1) {
            compMove = "Paper";
        } else {
            compMove = "Scissors";
        }
        cout << "Computer chooses " << compMove << endl;
        cout << endl;

// check to see which player won based on the moves they played and increment the count of the games won, lost and tied accordingly
        bool playerWon = false;
        bool isTie = false;
        if (playerMove == "Rock") {
            if (compMove == "Scissors") {
                playerWon = true;
                winningMove = playerMove;
                losingMove = compMove;
                gamesWon++;
            } else if (compMove == "Rock") {
                isTie = true;
                gamesTied++;
            } else {
                gamesLost++;
                winningMove = compMove;
                losingMove = playerMove;
            }
        } else if (playerMove == "Paper") {
            if (compMove == "Rock") {
                playerWon = true;
                winningMove = playerMove;
                losingMove = compMove;
                gamesWon++;
            } else if (compMove == "Paper") {
                isTie = true;
                gamesTied++;
            } else {
                gamesLost++;
                winningMove = compMove;
                losingMove = playerMove;
            }
        } else if (playerMove == "Scissors") {
            if (compMove == "Paper") {
                playerWon = true;
                winningMove = playerMove;
                losingMove = compMove;
                gamesWon++;
            } else if (compMove == "Scissors") {
                isTie = true;
                gamesTied++;
            } else {
                gamesLost++;
                winningMove = compMove;
                losingMove = playerMove;
            }
        }

// print the results of the match
        if (isTie) {
            cout << "It's a Tie!" << endl;
        } else {
            cout << winningMove << " beats " << losingMove << endl;
        }

        if (playerWon) {
            cout << "You Win!" << endl;
        } else if (playerWon == false && isTie == false) {
            cout << "Computer Wins!" << endl;
        }

//prompt user for answer to continue playing game
        cout << "Do you want to play again? (Type Y and N): ";
        cin >> playerAnswer;
        cout << endl;
        if (playerAnswer == "Y" || playerAnswer == "y") {
            playAgain = true;
        } else {
            playAgain = false;
        }
    }
    while (playAgain);
    
//print the stats of the game with how many games are won, lost, and tied
    cout << "Thanks for playing!" << endl << "You won " << gamesWon << " game(s), lost " << gamesLost << " game(s), and tied " << gamesTied << " game(s). Good job!"<< endl;

  return 0; // signals the operating system that our program ended OK.
}