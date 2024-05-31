#include <iostream>
#include <string>

using namespace std;

void giveGold(int amount) {
    // Code to give the player gold
    cout << "Giving the player " << amount << " gold." << endl;
}

void giveLevels(int levels) {
    // Code to give the player levels
    cout << "Giving the player " << levels << " levels." << endl;
}

void giveItem(string itemName) {
    // Code to give the player an item
    cout << "Giving the player " << itemName << "." << endl;
}

int main() {
    int goldAmount;
    int levelAmount;
    string itemName;

    cout << "Welcome to the Dota 2 Cheat Menu!" << endl;
    cout << "1. Give Gold" << endl;
    cout << "2. Give Levels" << endl;
    cout << "3. Give Item" << endl;
    cout << "Enter the number of the option you want to select: ";

    int selection;
    cin >> selection;

    switch (selection) {
        case 1:
            cout << "Enter the amount of gold you want to give: ";
            cin >> goldAmount;
            giveGold(goldAmount);
            break;
        case 2:
            cout << "Enter the number of levels you want to give: ";
            cin >> levelAmount;
            giveLevels(levelAmount);
            break;
        case 3:
            cout << "Enter the name of the item you want to give: ";
            cin >> itemName;
            giveItem(itemName);
            break;
        default:
            cout << "Invalid selection. Exiting..." << endl;
            return 1;
    }

    return 0;
}