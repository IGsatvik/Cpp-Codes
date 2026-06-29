#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string getChoice(int num) {
    if (num == 1) return "Rock";
    else if (num == 2) return "Paper";
    else return "Scissors";
}

int main() {
    srand(time(0));
    int userChoice, computerChoice;

    cout << "Rock Paper Scissors Game\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;
    while(!(userChoice<4 && userChoice>0)){
        cout << "Invalid choice !, choose again :";
        cin >> userChoice;
    }

    computerChoice = rand() % 3 + 1;

    cout << "You chose: " << getChoice(userChoice) << endl;
    cout << "Computer chose: " << getChoice(computerChoice) << endl;

    if (userChoice == computerChoice) {
        cout << "It's a draw!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }

    return 0;
}
