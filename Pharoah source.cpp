#include <iostream>
using namespace std;




/*
To Do:
-Priest blessing
-Create position array
-Add things for each spot into array
-Shop
-Boss
-Health 
-Attack
*/




    int diceRoll(int position, int role) { //cant use class because it is a key word so am using role instead
        int diceRoll;
        if (role != 2) {
            diceRoll = (rand() % 6) + 1; //makes both numbers random
        }
        else {
            diceRoll = (rand() % 8) + 1;
        }
        postion = postion + diceRoll; //updates the users postion with the roll

        switch (diceRoll) { //tells the user what the dice roll was
        case 1:
            cout << "You rolled a 1" << endl;
            break;
        case 2:
            cout << "You rolled a 2" << endl;
            break;
        case 3:
            cout << "You rolled a 3" << endl;
            break;
        case 4:
            cout << "You rolled a 4" << endl;
            break;
        case 5:
            cout << "You rolled a 5" << endl;
            break;
        case 6:
            cout << "You rolled a 6" << endl;
            break;
        case 7:
            cout << "You rolled a 7" << endl;
            break;
        case 8:
            cout << "You rolled a 8" << endl;
            break;
        }
        return position;

    }

    int blessRoll(int role, int bless1, int bless2) {
        int blessRoll;
        int fullSelect;
        int priestBless1;
        int priestBless2;
        int priestBless3;
        int priestSelect;
        if (role != 4) {
            blessRoll = (rand() % 9) + 1;
            switch (blessRoll) {
            case 1:
                cout << "You got Thoth The God of Wisdom!" << endl << "You can choose one of the values on your dice to be your next roll!" << endl;
                break;
            case 2:
                cout << "You got Set The God of Violence!" << endl << "You can deal 3 damage to a player of your choosing!" << endl;
                break;
            case 3:
                cout << "You got Bastet The Goddess of Wisdom!" << endl << "The next hazard or attack will do zero damage to you!" << endl;
                break;
            case 4:
                cout << "You got Nekhbet The Goddess of Vultures!" << endl << "You can take one item from an unconscious player anywhere on the board!" << endl;
                break;
            case 5:
                cout << "You got Anhur The God of War!" << endl << "In your next fight againest a creature you will attack twice before they attack once!" << endl;
                break;
            case 6:
                cout << "You got Osiris The God of Death!" << endl << "If you are about to be killed instead of being knocked out you move one space forward instead!" << endl;
                break;
            case 7:
                cout << "You got Nehebkau The God of Snakes!" << endl << "You can make one player of your choicing skip their turn!" << endl;
                break;
            case 8:
                cout << "You got Ra The God of The Sun!" << endl << "You can nullify 1 blessing card that is used against you!" << endl;
                break;
            case 9:
                cout << "You got Horus The God of The Sky!" << endl << "You can now teleport to any neutral square you want!" << endl;
                break;
            }
            if (bless1 == 0) {
                bless1 = blessRoll;
            }

            if (bless1 != 0 && bless2 == 0) {
                bless2 = blessRoll;
            }

            if (bless1 != 0 && bless2 != 0) {
                cout << "You already have 2 blessings. If you like this blessing better you may type 1 to replace your first blessing with this one and you may type 2 to replace your second blessing with this" << endl;
                cout << "If you would like to discard it input 3" << endl;
                cin >> fullSelect;
                if (fullSelect == 1) {
                    bless1 = blessRoll;

                }
                if (fullSelect == 2) {
                    bless2 = blessRoll;
                }
            }                                                                                                                                         
        }
        ////////////////////////////////////////////                                                               Blessing select for Priest                                                               ////////////////////////////////////////////  
        if (role == 4) {
            priestBless1 = (rand() % 9) + 1;
            cout << "Your first card is " //since the priest gets 3 cards this tells the user the first one they got
            switch (priestBless1) {  
            case 1:
                cout << "Thoth The God of Wisdom!" << endl << "You can choose one of the values on your dice to be your next roll!" << endl;
                break;
            case 2:
                cout << "Set The God of Violence!" << endl << "You can deal 3 damage to a player of your choosing!" << endl;
                break;
            case 3:
                cout << "Bastet The Goddess of Wisdom!" << endl << "The next hazard or attack will do zero damage to you!" << endl;
                break;
            case 4:
                cout << "Nekhbet The Goddess of Vultures!" << endl << "You can take one item from an unconscious player anywhere on the board!" << endl;
                break;
            case 5:
                cout << "Anhur The God of War!" << endl << "In your next fight againest a creature you will attack twice before they attack once!" << endl;
                break;
            case 6:
                cout << "Osiris The God of Death!" << endl << "If you are about to be killed instead of being knocked out you move one space forward instead!" << endl;
                break;
            case 7:
                cout << "Nehebkau The God of Snakes!" << endl << "You can make one player of your choicing skip their turn!" << endl;
                break;
            case 8:
                cout << "Ra The God of The Sun!" << endl << "You can nullify 1 blessing card that is used against you!" << endl;
                break;
            case 9:
                cout << "Horus The God of The Sky!" << endl << "You can now teleport to any neutral square you want!" << endl;
                break;
            }
            priestBless1=2 = (rand() % 9) + 1;
            cout << endl << "Your second card is "; //this tells the user the secont one
            switch (priestBless2) {
            case 1:
                cout << "Thoth The God of Wisdom!" << endl << "You can choose one of the values on your dice to be your next roll!" << endl;
                break;
            case 2:
                cout << "Set The God of Violence!" << endl << "You can deal 3 damage to a player of your choosing!" << endl;
                break;
            case 3:
                cout << "Bastet The Goddess of Wisdom!" << endl << "The next hazard or attack will do zero damage to you!" << endl;
                break;
            case 4:
                cout << "Nekhbet The Goddess of Vultures!" << endl << "You can take one item from an unconscious player anywhere on the board!" << endl;
                break;
            case 5:
                cout << "Anhur The God of War!" << endl << "In your next fight againest a creature you will attack twice before they attack once!" << endl;
                break;
            case 6:
                cout << "Osiris The God of Death!" << endl << "If you are about to be killed instead of being knocked out you move one space forward instead!" << endl;
                break;
            case 7:
                cout << "Nehebkau The God of Snakes!" << endl << "You can make one player of your choicing skip their turn!" << endl;
                break;
            case 8:
                cout << "Ra The God of The Sun!" << endl << "You can nullify 1 blessing card that is used against you!" << endl;
                break;
            case 9:
                cout << "Horus The God of The Sky!" << endl << "You can now teleport to any neutral square you want!" << endl;
                break;
            }
            priestBless3 = 2 = (rand() % 9) + 1;
            cout << endl << "Your third card is "; //this tells the user the third
            switch (priestBless3) {
            case 1:
                cout << "Thoth The God of Wisdom!" << endl << "You can choose one of the values on your dice to be your next roll!" << endl;
                break;
            case 2:
                cout << "Set The God of Violence!" << endl << "You can deal 3 damage to a player of your choosing!" << endl;
                break;
            case 3:
                cout << "Bastet The Goddess of Wisdom!" << endl << "The next hazard or attack will do zero damage to you!" << endl;
                break;
            case 4:
                cout << "Nekhbet The Goddess of Vultures!" << endl << "You can take one item from an unconscious player anywhere on the board!" << endl;
                break;
            case 5:
                cout << "Anhur The God of War!" << endl << "In your next fight againest a creature you will attack twice before they attack once!" << endl;
                break;
            case 6:
                cout << "Osiris The God of Death!" << endl << "If you are about to be killed instead of being knocked out you move one space forward instead!" << endl;
                break;
            case 7:
                cout << "Nehebkau The God of Snakes!" << endl << "You can make one player of your choicing skip their turn!" << endl;
                break;
            case 8:
                cout << "Ra The God of The Sun!" << endl << "You can nullify 1 blessing card that is used against you!" << endl;
                break;
            case 9:
                cout << "Horus The God of The Sky!" << endl << "You can now teleport to any neutral square you want!" << endl;
                break;
            }

            if (bless1 != 0 && bless2 != 0) { //this cheecks to see if you have no extra slots and if you do you can delete one card
                cout << "You already have 2 blessings. if you want to discard your 1st blessing, type 1. If you want to discard the second, type 2" << endl;
                cout << "If you dont want to replace anythhing input 3" << endl;
                cin >> fullSelect;
                if (fullSelect == 1) {
                    bless1 = 0;
                }
                if (fullSelect == 2) {
                    bless2 = 0;
                }
            }

            if (bless1 == 0) { //lets u choose which of the 3 cards to use and puts it in slot one
                cout << endl << "Which card would you like to keep?" << endl << "Type 1 for the frist blessing, 2 for the second and 3 for the third.";
                cin >> priestSelect;
                switch (priestSelect) {
                case 1:
                    bless1 = priestBless1;
                    break;
                case 2:
                    bless1 = priestBless2;
                    break;
                case 3:
                    bless1 = priestBless3;
                    break;
                }
            }

            if (bless1 != 0 && bless2 == 0) { //puts ur choice in slot 2
                cout << endl << "Which card would you like to keep?" << endl << "Type 1 for the frist blessing, 2 for the second and 3 for the third.";
                cin >> priestSelect;
                switch (priestSelect) {
                case 1:
                    bless2 = priestBless1;
                    break;
                case 2:
                    bless2 = priestBless2;
                    break;
                case 3:
                    bless2 = priestBless3;
                    break;
                }
            }


        }
        return bless1; //gives back your blessing with the new value
        return bless2;
    }
