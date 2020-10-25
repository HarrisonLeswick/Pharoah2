#include <iostream>
using namespace std;






//-Add things for each spot into array
//-Shop
//-Boss
//-Health
//-Attack

int combat(int role, int armor, int sword, int healthpotion, int health, int monHealth, int monDamage) {

    while (monHealth > 0 || health > 0) {

        int usePotion;

        int damage;
        cout << "your health is currently" << health;
        cout << "the monsters health is currently" << monHealth;
        cout << "press a button and then enter to roll for damage\n";
        int interact = 0;
        if (interact == 0) {
            cin >> interact;
        }
        interact = 0;
        if (role != 2) {
            damage = (rand() % 6) + 1; //makes both numbers random
            switch (damage) { //tells the user what the dice roll was
            case 1:
                cout << "You rolled a 1" << endl;
                cout << "_________\n|       |\n|   o   |\n|       |\n--------- \n";
                break;
            case 2:
                cout << "You rolled a 2" << endl;
                cout << "_________\n|  o    |\n|       |\n|     o |\n---------\n";
                break;
            case 3:
                cout << "You rolled a 3" << endl;
                cout << "_________\n|  o    |\n|   o   |\n|     o |\n---------\n";
                break;
            case 4:
                cout << "You rolled a 4" << endl;
                cout << "_________\n| o   o |\n|       |\n| o   o |\n---------\n";
                break;
            case 5:
                cout << "You rolled a 5" << endl;
                cout << "_________\n| o   o |\n|   o   |\n| o   o |\n---------\n";
                break;
            case 6:
                cout << "You rolled a 6" << endl;
                cout << "_________\n| o   o |\n| o   o |\n| o   o |\n---------\n";
                break;
            case 7:
                cout << "You rolled a 7" << endl;
                cout << "_________\n| o   o |\n| o o o |\n| o   o |\n---------\n";
                break;
            case 8:
                cout << "You rolled a 8" << endl;
                cout << "_________\n| o o o |\n| o   o |\n| o o o |\n---------\n";
                break;
            }
        }
        else {
            damage = (rand() % 8) + 1; // roll for soldier movement
            switch (damage) { //tells the user what the dice roll was
            case 1:
                cout << "You rolled a 1" << endl;
                cout << "_________\n|       |\n|   o   |\n|       |\n--------- \n";
                break;
            case 2:
                cout << "You rolled a 2" << endl;
                cout << "_________\n|  o    |\n|       |\n|     o |\n---------\n";
                break;
            case 3:
                cout << "You rolled a 3" << endl;
                cout << "_________\n|  o    |\n|   o   |\n|     o |\n---------\n";
                break;
            case 4:
                cout << "You rolled a 4" << endl;
                cout << "_________\n| o   o |\n|       |\n| o   o |\n---------\n";
                break;
            case 5:
                cout << "You rolled a 5" << endl;
                cout << "_________\n| o   o |\n|   o   |\n| o   o |\n---------\n";
                break;
            case 6:
                cout << "You rolled a 6" << endl;
                cout << "_________\n| o   o |\n| o   o |\n| o   o |\n---------\n";
                break;
            case 7:
                cout << "You rolled a 7" << endl;
                cout << "_________\n| o   o |\n| o o o |\n| o   o |\n---------\n";
                break;
            case 8:
                cout << "You rolled a 8" << endl;
                cout << "_________\n| o o o |\n| o   o |\n| o o o |\n---------\n";
                break;
            }
            cout << "You struck the beast with your mighty sword\n";
        }
        if (armor == 1) {


        }
        if (sword == 1) {
            damage = damage + 3;
        }

        monHealth = monHealth - damage;
        if (monHealth <= 0) {
            cout << "Congradulations you have slain the fearsome Ammit!\n You have been rewarded with the lions tail belt of JUSTICE!!!!!!";


            break;
        }
        health = health - monDamage;
        if (health <= 0) {
            cout << "you died git gud";
            break;


        }

        if (healthpotion == 1) {

            cout << "you have a health potion would you like to use it enter 1 for yes and 0 for no" << endl;
            cin >> usePotion;
            if (usePotion == 1) {
                health = health + 10;
                healthpotion = 0;
            }
            else {
                cout << "you did not use the health potion";
            }
        }

    }


    return health;
}
int diceRoll(int role) { //cant use class because it is a key word so am using role instead
    int interact = 0;
    if (interact == 0) {
        cout << "press any button and enter to roll";
        cin >> interact;
    }

    int diceRoll;
    if (role != 2) {
        diceRoll = (rand() % 6) + 1; //makes both numbers random
    }
    else {
        diceRoll = (rand() % 8) + 1; // roll for soldier movement
    }
    //updates the users postion with the roll

    switch (diceRoll) { //tells the user what the dice roll was
    case 1:
        cout << "You rolled a 1" << endl;
        cout << "_________\n|       |\n|   o   |\n|       |\n--------- \n";
        break;
    case 2:
        cout << "You rolled a 2" << endl;
        cout << "_________\n|  o    |\n|       |\n|     o |\n---------\n";
        break;
    case 3:
        cout << "You rolled a 3" << endl;
        cout << "_________\n|  o    |\n|   o   |\n|     o |\n---------\n";
        break;
    case 4:
        cout << "You rolled a 4" << endl;
        cout << "_________\n| o   o |\n|       |\n| o   o |\n---------\n";
        break;
    case 5:
        cout << "You rolled a 5" << endl;
        cout << "_________\n| o   o |\n|   o   |\n| o   o |\n---------\n";
        break;
    case 6:
        cout << "You rolled a 6" << endl;
        cout << "_________\n| o   o |\n| o   o |\n| o   o |\n---------\n";
        break;
    case 7:
        cout << "You rolled a 7" << endl;
        cout << "_________\n| o   o |\n| o o o |\n| o   o |\n---------\n";
        break;
    case 8:
        cout << "You rolled a 8" << endl;
        cout << "_________\n| o o o |\n| o   o |\n| o o o |\n---------\n";
        break;
    }
    return diceRoll;

}

int blessRoll(int role, int bless1, int bless2) {
    int blessRoll;
    int fullSelect;
    int priestBless1;
    int priestBless2;
    int priestBless3;
    int priestSelect;
    int blessgiven = 0;
    cout << "You landed on a blessing square! \n \n";
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
        if (bless1 == 0 && blessgiven == 0) {
            bless1 = blessRoll;
            blessgiven = 1;
        }

        if (bless1 != 0 && bless2 == 0 && blessgiven == 0) {
            bless2 = blessRoll;
            blessgiven = 1;
        }


    }
    ////////////////////////////////////////////                                                               Blessing select for Priest                                                               ////////////////////////////////////////////  
    if (role == 4) {
        priestBless1 = (rand() % 9) + 1;
        cout << "Your first card is "; //since the priest gets 3 cards this tells the user the first one they got
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
        priestBless2 = (rand() % 9) + 1;
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
        priestBless3 = (rand() % 9) + 1;
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

        if (bless1 == 0 && blessgiven == 0) { //lets u choose which of the 3 cards to use and puts it in slot one
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
            blessgiven = 1;
        }

        if (bless1 != 0 && bless2 == 0 && blessgiven == 0) { //puts ur choice in slot 2
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
            blessgiven = 1;
        }


    }
    return bless1; //gives back your blessing with the new value
    return bless2;
}

int main() {
    //variables for role selection
    int role = 0;
    int unsurerole;
    int RUSure;
    int roleselection = 0;
    //variables for character stats
    int position = 63;
    int money = 0;
    int damage;
    int health;
    int bless1 = 0;
    int bless2 = 0;
    //bools for if you have one of the exodia pieces
    bool crook = 0;
    bool flail = 0;
    bool robe = 0;
    bool hat = 0;
    bool belt = 0;
    bool jewelry = 0;
    //variable to end the game
    int gameend = 0;
    //variables to make the players think they are doing something lmao clown
    int interact;
    //variables for moving
    int dice = 0;
    int leftRight = 0;
    // items
    bool shovel = 0;
    bool pickpocket = 0;
    bool sword = 0;
    bool armor = 0;
    bool healthpotion = 0;


    //this is character selection 
    cout << "Please select your class:" << endl << endl;
    cout << "1. Slave: You start off with 10hp, immunity to fire ants and the ability to pickpocket without the pickpocket tool" << endl;
    cout << "2. Soldier: You start off with 14hp, you move with a 8 sided dice and you deal a extra 2 damage with every attack" << endl;
    cout << "3. Noble: You start off with 8hp, and start the game with 10 gold" << endl;
    cout << "4. Priest: You start off with 8hp, when you draw a blessing you can draw from the top 3 cards" << endl;
    cout << "5. Merchant: You start off with 10hp, you can haggle down the price of each store item by 5 gold" << endl;
    cout << endl << "PLease type in the number of the role you would like:  ";
    cin >> role;
    cout << endl;
    switch (role) {
    case 1:
        cout << "Congradulations! you are now a Slave!" << endl << endl;
        health = 10;
        break;
    case 2:
        cout << "Congradulations! you are now a Soldier!" << endl << endl;
        health = 14;
        break;
    case 3:
        cout << "Congradulations! you are now a Noble!" << endl << endl;
        health = 8;
        break;
    case 4:
        cout << "Congradulations! you are now a Priest!" << endl << endl;
        health = 8;
        break;
    case 5:
        cout << "Congradulations! you are now a Merchant!" << endl << endl;
        health = 10;
        break;
    }

    //the loop for what happens depending on what square you are on
    if (gameend == 0) {
        //this is if the player is in position 1
        if (position == 1) {
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                cout << "Welcome to Pharoah ";
                cout << endl << "Your goal is to go around the map and collect all of the artifacts in order to become the next Pharoah ";
                cout << endl << "You can collect artifacts by fighting monsters and buying them in the stores";
                cout << endl << "Once youve gotten all artifacts you'll need to get back to the central pyramid";
                cout << endl << "The first one there with all the artifacts becomes the next pharoah";
                cout << " \n \n Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                position = position + dice;


            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                cout << endl << "Congratulations!!!";
                cout << endl << "You have collected all 5 artifacts and are now the Pharoah!!! ";
                cout << endl << "As pharoah you are now exempted from all taxes and laws!!!";
                cout << endl << "You now have total controll over all of egypt and can now laugh at your friends!!!";
                cout << endl << "GG's Thanks for playing <3";
                gameend = 1;
            }
        }


        //     This is if the player is in position 2
        if (position == 2) {
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                cout << "Press any button and enter to roll the dice:";

                if (interact == 0) {
                    cin >> interact;
                }
                interact = 0;
                dice = diceRoll(role);
                if (dice <= 7) {
                    position = position + dice;
                }
                if (dice == 8) {
                    cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = position + dice;
                    }
                    else {
                        position = position + dice + 57;
                    }
                }
            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                cout << "Press any button and enter to roll the dice:";
                if (interact == 0) {
                    cin >> interact;
                }
                interact = 0;
                dice = diceRoll(role);
                if (dice == 1) {
                    position = position - dice;
                }
                else {
                    cout << "You must land directly on top of the throne. You are one space away. /n Please wait to roll again";
                }
            }
        }


        //     This is if the player is in position 3
        if (position == 3) {
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                cout << "Press any button and enter to roll the dice:";
                if (interact == 0) {
                    cin >> interact;
                }
                interact = 0;
                dice = diceRoll(role);
                if (dice <= 6) {
                    position = position + dice;
                }
                if (dice >= 7) {
                    cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = position + dice;
                    }
                    else {
                        position = position + dice + 57;
                    }
                }
            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                cout << "Press any button and enter to roll the dice:";
                if (interact == 0) {
                    cin >> interact;
                }
                interact = 0;
                dice = diceRoll(role);
                if (dice == 2) {
                    position = position - dice;
                }
                else {
                    cout << "You must land directly on top of the throne. You are two spaces away. /n Please wait to roll again";
                }
            }
        }


        //     This is if the player is in position 4
        if (position == 4) {
            money = money + 3;
            cout << "Congrats! You found 3 gold coins buried in the sand!";
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                cout << "Press any button and enter to roll the dice:";
                if (interact == 0) {
                    cin >> interact;
                }
                interact = 0;
                dice = diceRoll(role);
                if (dice <= 5) {
                    position = position + dice;
                }
                if (dice >= 6) {
                    cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = position + dice;
                    }
                    else {
                        position = position + dice + 57;
                    }
                }
            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                cout << "Press any button and enter to roll the dice:";
                if (interact == 0) {
                    cin >> interact;
                }
                interact = 0;
                dice = diceRoll(role);
                if (dice <= 3) {
                    position = position - dice;
                }
                else {
                    cout << "You must land directly on top of the throne. You are three spaces away. /n Please wait to roll again";
                }
            }
        }


        //     This is if the player is in position 5
        if (position == 5) {
            money = money + 2;
            cout << "Congrats! You found 2 gold coins under a rock!";
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                cout << "Press any button and enter to roll the dice:";
                if (interact == 0) {
                    cin >> interact;
                }
                interact = 0;
                dice = diceRoll(role);
                if (dice <= 4) {
                    position = position + dice;
                }
                if (dice >= 5) {
                    cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = position + dice;
                    }
                    else {
                        position = position + dice + 57;
                    }
                }
            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                cout << "Press any button and enter to roll the dice:";
                if (interact == 0) {
                    cin >> interact;
                }
                interact = 0;
                dice = diceRoll(role);
                if (dice <= 4) {
                    position = position - dice;
                }
                else {
                    cout << "You must land directly on top of the throne. You are three spaces away. /n Please wait to roll again";
                }
            }
        }


        //     This is if the player is in position 6
        if (position == 6) {
            if (shovel == 1) {
                money = money + 30;
                cout << "You found a buried treasure chest and managed to pry it open with your shovel! \n You found 30 gold coins!";
                shovel = 0;
            }
            else {
                cout << "There is a buried treasure chest at your feet come back with a shovel to claim its contents!";
            }
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                cout << "Press any button and enter to roll the dice:";
                if (interact == 0) {
                    cin >> interact;
                }
                interact = 0;
                dice = diceRoll(role);
                if (dice <= 3) {
                    position = position + dice;
                }
                if (dice >= 4) {
                    cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = position + dice;
                    }
                    else {
                        position = position + dice + 57;
                    }
                }
            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                cout << "Press any button and enter to roll the dice:";
                if (interact == 0) {
                    cin >> interact;
                }
                interact = 0;
                dice = diceRoll(role);
                if (dice <= 5) {
                    position = position - dice;
                }
                else {
                    cout << "You must land directly on top of the throne. You are three spaces away. /n Please wait to roll again";
                }
            }
        }


        //     This is if the player is in position 7
        if (position == 7) {
            cout << "This is a neutral square.";

            cout << "Press any button and enter to roll the dice:";
            if (interact == 0) {
                cin >> interact;
            }
            interact = 0;
            dice = diceRoll(role);
            if (dice <= 2) {
                position = position + dice;
            }
            if (dice >= 3) {
                cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    position = position + dice;
                }
                else {
                    position = position + dice + 57;
                }

            }
        }


        //     This is if the player is in position 8
        if (position == 8) {
            money = money + 2;
            cout << "Congrats! You found 2 gold coins stuck in a wall.";

            cout << "Press any button and enter to roll the dice:";
            if (interact == 0) {
                cin >> interact;
            }
            interact = 0;
            dice = diceRoll(role);
            if (dice == 1) {
                position = position + dice;
            }
            if (dice >= 2) {
                cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    position = position + dice;
                }
                else {
                    position = position + dice + 57;
                }

            }
        }



        //     This is if the player is in position 9
        if (position == 9) {
            bless2, bless1 = blessRoll(role, bless1, bless2);
            cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
            cin >> leftRight;
            cout << "Press any button and enter to roll the dice:";
            if (interact == 0) {
                cin >> interact;
            }
            interact = 0;
            dice = diceRoll(role);
            if (leftRight == 0) {
                position = position + dice;
            }
            else {
                position = position + dice + 57;
            }

            if (position == 51) {
                int  monDamage;

            }
        }
        if (position == 63) {
            cout << "SCaly MAN kill it";
            cout << R"(

                    .---.     .---.
            ...---' .---. ---'-.   .
  ~ -~ -.-''.--' .'( | ).  .  `. :
 -. .'_-' .--'' .`---'.-.  .   -.
  ~ ~_~-~-~_ ~ -._ -._``---. -.    -.   `.
    ~- ~ ~ - -~ ~ -..    ..- .  -.``--.._
     -~ ~- ~ ~-~ ~ -~ ~~-~ -.  -.  -. -.`--.._.--''. ~ -~_
         ~~ -~_-~ _~- _~~ _~-_~ ~-_~~ ~-.___    -._  -.   . . ~ -~
            ~~ ~- - -~  ~- ~ - - _~~ ~---...     . . . ~-~
                ~ ~- - -~ ~- ~-~ ~-~ ~- ~~-~  ~--.....--~ -~ ~
                     ~ ~ - ~  ~  - -  - ~-  ~ -~ ~ ~ -~~-  ~- ~-~








       )" << endl;
            int monHealth = 10;
            int monDamage = 6;
            health = combat(role, armor, sword, healthpotion, health, monHealth, monDamage);

            if (health <= 0) {


                position = 64;
                health = 1;
            }
            else {
                belt = 1;
            }

        }


















    }
}