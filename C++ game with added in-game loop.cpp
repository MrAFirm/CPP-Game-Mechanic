#include <iostream>
#include <cstdlib> //for random number of damage
#include <ctime>
using namespace std;
//class
class myClass {
private:
public:
};
int main() {
    myClass myObj;
    bool isPlaying = true; //set up for in-game loop
    int playerHealth = 100; //player health
    int enemyHealth = 100; //enemy health


    cout << "🔥Crown of Aethel🔥\n\n";
    //multidimensional arrays for graphics
    string Player[16][16] {
        {".", "@", ".", "§\n"},
        {"/", "|", "✓", "\n"},
        {"", " |", "", "\n"},
        {"√", " ", "]", "\n"},
    };
    //to loop through each argument in the strings
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            cout << Player[i][j];
        }
    }
    //To ask for user input of name
    string Name;
    cout << "What is your name? \n";
    cin >> Name;
    cout << "\nGreetings " << Name << "! Welcome to Aethel!\n\n";
    cout << "Type \"Ok\" to continue.\n";
    string okay;
    cin >> okay;
    if (okay == "Ok") {
        cout << "While you were strolling about in the town, you stumbled across a creature...\n\n";
        cout << "Type \"Ok\" to continue.\n";
        cin >> okay;
        if (okay == "Ok") {
            string Player2[16][16] {
                {".", "@", ".", "§", "", "  ", "", " ¥", "\n"},
                {"/", "|", "✓", " ", "", "  ", "}", "|", "{\n"},
                {"", " |", "", " ", "", "  ", " ", " |", " 🔥\n"},
                {"/", " ", "|", " ", "", "  ", " ", "£", "\n"},
            };
            for (int i = 0; i < 16; i++) {
                for (int j = 0; j < 16; j++) {
                    cout << Player2[i][j];
                }
            }
        }
        //In-game loop!
        while (isPlaying) {
            string Action;
            cout << "\n\nAttack or Run? \n";
            cin >> Action;
            if (Action == "Attack") {
                srand(time(0));
                int randomNumber = rand() % 10 + 1;
                cout << "Damage: " << randomNumber << endl;
                if (randomNumber <= 5) {
                    cout << "\nHit!\n";
                    enemyHealth -= randomNumber;
                    cout << enemyHealth;
                } else if (randomNumber > 5) {
                    cout << "\nCritical Hit!\n";
                    enemyHealth -= randomNumber;
                    cout << enemyHealth;
                }
                //to stop the loop
            } else if (Action == "Run") {
                isPlaying = false;
                cout << "Ran away!";
                //to proceed with the loop
            } else {
                cout << "Error. Invalid Response.";
            }
        }
    }
    return 0;
}