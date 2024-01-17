#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(NULL));

    int player = 0;
    int computer = 0;

    cout << "It's a Rock Paper Scissors Game" << endl;
    cout << "Choose 1 for Rock" << endl;
    cout << "Choose 2 for Paper" << endl;
    cout << "Choose 3 for Scissors" << endl;

    cin >> player;

    if (player == 1) {
        cout << "You chose Rock" << endl;
    } else if (player == 2) {
        cout << "You chose Paper" << endl;
    } else if (player == 3) {
        cout << "You chose Scissors" << endl;
    } else {
        cout << "Invalid choice" << endl;
        return 1; // Exit the program with an error code
    }

    computer = rand() % 3 + 1;

    string arr[3] = {"Rock", "Paper", "Scissors"};

    cout << "Computer chose " << arr[computer - 1] << endl;

    if (player == computer) {
        cout << "It's a draw! Both chose the same!" << endl;
    } else if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2)) {
        cout << "You won the round!" << endl;
    } else {
        cout << "Computer won the round!" << endl;
    }

    return 0;
}
