#include <iostream>
#include <random>
#include <ctime>
#include <string>
using namespace std;






//-Add things for each spot into array
//-Shop
//-Boss
//-Health
//-Attack

int mummy(int role, int sword, int healthpotion, int health, int maxhealth, int monHealth, int monDamage) {
    std::cout << "The fearsome undead Mummy, Carlton!\n He rises from his sarcophagus and growls at the site of a puny mortal like you! ";
    while (monHealth > 0 && health > 0) {

        int usePotion;
        string interact;
        int damage;
        srand(time(0));


        std::cout << R"(

             <\
           _=(|)==__
         /\>:)|(|///\
        /\\\-VV---///\
       /== --   ---\==\
      /=("-<a   a>--")=\
     /===.          .===\
    |=====\   '  / /=====|
     \=====\ <->  /=====/
      \===== ___/ =====/__
     |%|====| && |====|| %|
     |>|====| && |====|||<|
     |>||===|_&&_|====|||<|
     |>||===|-&&-|===||||<|
     |>||===|&&&-|===||||<|
     \\  \__|----|__/ / ///
      \\  ===========  ///
       \\============= //
        \AAAAAAAAAAAAAA/
         """""""""""""""



)" << endl;
        std::cout << "Your health is currently " << health << endl;
        std::cout << "The spiders health is currently " << monHealth << endl;
        std::cout << "Press a button and then enter to roll for damage " << endl;

        cin >> interact;

        if (role != 2) {
            damage = rand() % 6 + 1;//return random number //makes both numbers random
        }
        else {
            damage = rand() % 8 + 1;//return random number // roll for soldier movement
        }
        switch (damage) { //tells the user what the dice roll was
        case 1:
            std::cout << "You rolled a 1" << endl;
            std::cout << "_________\n|       |\n|   o   |\n|       |\n--------- \n";
            break;
        case 2:
            std::cout << "You rolled a 2" << endl;
            std::cout << "_________\n|  o    |\n|       |\n|     o |\n---------\n";
            break;
        case 3:
            std::cout << "You rolled a 3" << endl;
            std::cout << "_________\n|  o    |\n|   o   |\n|     o |\n---------\n";
            break;
        case 4:
            std::cout << "You rolled a 4" << endl;
            std::cout << "_________\n| o   o |\n|       |\n| o   o |\n---------\n";
            break;
        case 5:
            std::cout << "You rolled a 5" << endl;
            std::cout << "_________\n| o   o |\n|   o   |\n| o   o |\n---------\n";
            break;
        case 6:
            std::cout << "You rolled a 6" << endl;
            std::cout << "_________\n| o   o |\n| o   o |\n| o   o |\n---------\n";
            break;
        case 7:
            std::cout << "You rolled a 7" << endl;
            std::cout << "_________\n| o   o |\n| o o o |\n| o   o |\n---------\n";
            break;
        case 8:
            std::cout << "You rolled a 8" << endl;
            std::cout << "_________\n| o o o |\n| o   o |\n| o o o |\n---------\n";
            break;
        }

        if (sword == 1) {
            damage = damage + 3;
            std::cout << "You slash with your sword leaving a gash across your foes chest dealing" << damage << " damage. \n"; //your damage phase
        }
        else if (sword == 0) {
            std::cout << "Using a rock you smash the mummy in the side of his head dealing " << damage << " damage. \n"; //your damage phase
        }

        monHealth = monHealth - damage; //monster dead check
        if (monHealth <= 0) {
            std::cout << "\nCongratulations you have slain the legendary Mummy! \nYou have been rewarded with the Pharoah's headdress!!!!!!";
        }
        else if (monHealth >= 1) {
            health = health - monDamage; //monster attack phase
            if (health >= 1) {
                std::cout << "The mummy casts a spell launching a fireball at you dealing " << monDamage << " damage. \n\n";
                if (healthpotion == 1) { //loop to use a health potion

                    std::cout << "You are currently " << health <<" health.\nWould you like to use a potion andrestore 10 health you lost. Enter 1 for yes and 0 for no: " << endl;
                    cin >> usePotion;
                    if (usePotion == 1) { //if u use the potion
                        if (health + 10 >= maxhealth) { //if you have less than 10 health missing
                            health = maxhealth;
                            healthpotion = 0;
                        }
                        else { //if you can get the full 10 health bacl
                            health = health + 10;
                            healthpotion = 0;
                        }
                        std::cout << "You used the potion and now have " << health << " health. \n\n"; //tells user their new health
                    }
                    else {
                        std::cout << "You did not use the health potion. \n\n"; //statement for if they didnt use it
                    }
                }
            }

            else if (health <= 0) {
                std::cout << "\n\nyou died git gud\n\n";
            }


        }

    }

    return healthpotion;
    return health;
}
int spider(int role, int sword, int healthpotion, int health, int maxhealth, int monHealth, int monDamage) {
    std::cout << "The mostrous spider, Net appeared!\nThe 33 foot talk spider towers over you and flashes his fangs! ";
    while (monHealth > 0 && health > 0) {

        int usePotion;
        string interact;
        int damage;
        srand(time(0));


        std:: cout << R"(

           ____                      ,
          /---.'.__             ____//
               '--.\           /.---'
          _______  \\         //
        /.------.\  \|      .'/  ______
       //  ___  \ \ ||/|\  //  _/_----.\__
      |/  /.-.\  \ \:|< >|// _/.'..\   '--'
         //   \'. | \'.|.'/ /_/ /  \\
        //     \ \_\/" ' ~\-'.-'    \\
       //       '-._| :H: |'-.__     \\
      //           (/'==='\)'-._\     ||
      ||                        \\    \|
      ||                         \\    '
      |/                          \\
                                   ||
                                   ||
                                   \\
                                    '
)" << endl;
        std::cout << "Your health is currently " << health << endl;
        std::cout << "The spiders health is currently " << monHealth << endl;
        std::cout << "Press a button and then enter to roll for damage " << endl;

        cin >> interact;

        if (role != 2) {
            damage = rand() % 6 + 1;//return random number //makes both numbers random
        }
        else {
            damage = rand() % 8 + 1;//return random number // roll for soldier movement
        }
        switch (damage) { //tells the user what the dice roll was
        case 1:
            std::cout << "You rolled a 1" << endl;
            std::cout << "_________\n|       |\n|   o   |\n|       |\n--------- \n";
            break;
        case 2:
            std::cout << "You rolled a 2" << endl;
            std::cout << "_________\n|  o    |\n|       |\n|     o |\n---------\n";
            break;
        case 3:
            std::cout << "You rolled a 3" << endl;
            std::cout << "_________\n|  o    |\n|   o   |\n|     o |\n---------\n";
            break;
        case 4:
            std::cout << "You rolled a 4" << endl;
            std::cout << "_________\n| o   o |\n|       |\n| o   o |\n---------\n";
            break;
        case 5:
            std::cout << "You rolled a 5" << endl;
            std::cout << "_________\n| o   o |\n|   o   |\n| o   o |\n---------\n";
            break;
        case 6:
            std::cout << "You rolled a 6" << endl;
            std::cout << "_________\n| o   o |\n| o   o |\n| o   o |\n---------\n";
            break;
        case 7:
            std::cout << "You rolled a 7" << endl;
            std::cout << "_________\n| o   o |\n| o o o |\n| o   o |\n---------\n";
            break;
        case 8:
            std::cout << "You rolled a 8" << endl;
            std::cout << "_________\n| o o o |\n| o   o |\n| o o o |\n---------\n";
            break;
        }

        if (sword == 1) {
            damage = damage + 3;
            std::cout << "You slash at one of Net's massive legs with your mighty sword dealing " << damage << " damage. \n"; //your damage phase
        }
        else if (sword == 0) {
            std::cout << "You toss a stone at one of Net's many eyeballs and deal " << damage << " damage. \n"; //your damage phase
        }

        monHealth = monHealth - damage; //monster dead check
        if (monHealth <= 0) {
            std::cout << "\nCongratulations you have slain the fearsome beast! \nYou have been rewarded with the Pharoah's silk robe!!!!!!";
        }
        else if (monHealth >= 1) {
            health = health - monDamage; //monster attack phase
            if (health >= 1) {
                std::cout << "Net shoots a string of web at you dealing " << monDamage << " damage. \n\n";
                if (healthpotion == 1) { //loop to use a health potion

                    std::cout << "You are currently " << health << " health.\nWould you like to use a potion andrestore 10 health you lost. Enter 1 for yes and 0 for no: " << endl;
                    cin >> usePotion;
                    if (usePotion == 1) { //if u use the potion
                        if (health + 10 >= maxhealth) { //if you have less than 10 health missing
                            health = maxhealth;
                            healthpotion = 0;
                        }
                        else { //if you can get the full 10 health bacl
                            health = health + 10;
                            healthpotion = 0;
                        }
                        std::cout << "You used the potion and now have " << health << " health. \n\n"; //tells user their new health
                    }
                    else {
                        std::cout << "You did not use the health potion. \n\n"; //statement for if they didnt use it
                    }
                }
            }

            else if (health <= 0) {
                std::cout << "\n\nyou died git gud\n\n";
            }


        }

    }

    return healthpotion;
    return health;
}
int gustave(int role, int sword, int healthpotion, int health, int maxhealth, int monHealth, int monDamage) {
    std::cout << "The mythical Gustave, the Ammit appeared!\nHe part lion, part crocodile, part hippo and all danger. ";
    while (monHealth > 0 && health > 0) {

        int usePotion;
        string interact;
        int damage;
        srand(time(0));


        std::cout << R"(

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
        std::cout << "Your health is currently " << health << endl;
        std::cout << "The monsters health is currently " << monHealth << endl;
        std::cout << "Press a button and then enter to roll for damage " << endl;

        cin >> interact;

        if (role != 2) {
            damage = rand() % 6 + 1;//return random number //makes both numbers random
        }
        else {
            damage = rand() % 8 + 1;//return random number // roll for soldier movement
        }
        switch (damage) { //tells the user what the dice roll was
        case 1:
            std::cout << "You rolled a 1" << endl;
            std::cout << "_________\n|       |\n|   o   |\n|       |\n--------- \n";
            break;
        case 2:
            std::cout << "You rolled a 2" << endl;
            std::cout << "_________\n|  o    |\n|       |\n|     o |\n---------\n";
            break;
        case 3:
            std::cout << "You rolled a 3" << endl;
            std::cout << "_________\n|  o    |\n|   o   |\n|     o |\n---------\n";
            break;
        case 4:
            std::cout << "You rolled a 4" << endl;
            std::cout << "_________\n| o   o |\n|       |\n| o   o |\n---------\n";
            break;
        case 5:
            std::cout << "You rolled a 5" << endl;
            std::cout << "_________\n| o   o |\n|   o   |\n| o   o |\n---------\n";
            break;
        case 6:
            std::cout << "You rolled a 6" << endl;
            std::cout << "_________\n| o   o |\n| o   o |\n| o   o |\n---------\n";
            break;
        case 7:
            std::cout << "You rolled a 7" << endl;
            std::cout << "_________\n| o   o |\n| o o o |\n| o   o |\n---------\n";
            break;
        case 8:
            std::cout << "You rolled a 8" << endl;
            std::cout << "_________\n| o o o |\n| o   o |\n| o o o |\n---------\n";
            break;
        }

        if (sword == 1) {
            damage = damage + 3;
            std::cout << "You struck the beast with your mighty sword dealing " << damage << " damage. \n"; //your damage phase
        }
        else if (sword == 0) {
            std::cout << "You attacked Gustave and dealt " << damage << " damage. \n"; //your damage phase
        }

        monHealth = monHealth - damage; //monster dead check
        if (monHealth <= 0) {
            std::cout << "\nCongratulations you have slain the fearsome Monster! \nYou have been rewarded with the lions tail belt of JUSTICE!!!!!!";
        }
        else if (monHealth >= 1) {
            health = health - monDamage; //monster attack phase
            if (health >= 1) {
                std::cout << "The monster liked your cut and dealt " << monDamage << " damage. \n\n";
                    if (healthpotion == 1) { //loop to use a health potion

                        std::cout << "You are currently " << health << " health.\nWould you like to use a potion andrestore 10 health you lost. Enter 1 for yes and 0 for no: " << endl;
                        cin >> usePotion;
                        if (usePotion == 1) { //if u use the potion
                            if (health + 10 >= maxhealth) { //if you have less than 10 health missing
                                health = maxhealth;
                                healthpotion = 0;
                            }
                            else { //if you can get the full 10 health bacl
                                health = health + 10;
                                healthpotion = 0;
                            }
                            std::cout << "You used the potion and now have " << health << " health. \n\n"; //tells user their new health
                        }
                        else {
                            std::cout << "You did not use the health potion. \n\n"; //statement for if they didnt use it
                        }
                    }
            }

            else if (health <= 0) {
                std::cout << "\n\nyou died git gud\n\n";
            }


        }

    }

    return healthpotion;
    return health;
}

int diceRoll(int role) { //cant use class because it is a key word so am using role instead

    int rollDice;
    srand(time(0));
    if (role != 2) {
        rollDice = rand() % 6 + 1;//return random number //makes both numbers random
    }
    else {
        rollDice = rand() % 8 + 1;//return random number // roll for soldier movement
    }
    switch (rollDice) { //tells the user what the dice roll was
    case 1:
        std::cout << "You rolled a 1" << endl;
        std::cout << "_________\n|       |\n|   o   |\n|       |\n--------- \n";
        break;
    case 2:
        std::cout << "You rolled a 2" << endl;
        std::cout << "_________\n|  o    |\n|       |\n|     o |\n---------\n";
        break;
    case 3:
        std::cout << "You rolled a 3" << endl;
        std::cout << "_________\n|  o    |\n|   o   |\n|     o |\n---------\n";
        break;
    case 4:
        std::cout << "You rolled a 4" << endl;
        std::cout << "_________\n| o   o |\n|       |\n| o   o |\n---------\n";
        break;
    case 5:
        std::cout << "You rolled a 5" << endl;
        std::cout << "_________\n| o   o |\n|   o   |\n| o   o |\n---------\n";
        break;
    case 6:
        std::cout << "You rolled a 6" << endl;
        std::cout << "_________\n| o   o |\n| o   o |\n| o   o |\n---------\n";
        break;
    case 7:
        std::cout << "You rolled a 7" << endl;
        std::cout << "_________\n| o   o |\n| o o o |\n| o   o |\n---------\n";
        break;
    case 8:
        std::cout << "You rolled a 8" << endl;
        std::cout << "_________\n| o o o |\n| o   o |\n| o o o |\n---------\n";
        break;
    }
    return rollDice;

}
int blessRoll(int role, int bless1, int bless2) {
    int blessRoll;
    int fullSelect;
    int priestBless1;
    int priestBless2;
    int priestBless3;
    int priestSelect;
    int blessgiven = 0;
    srand(time(0));
    std::cout << "You landed on a blessing square! \n \n";
    if (role != 4) {
        blessRoll = rand() % 9 + 1;
        switch (blessRoll) {
        case 1:
            std::cout << "You got Thoth The God of Wisdom!" << endl << "You can choose one of the values on your dice to be your next roll!" << endl;
            break;
        case 2:
            std::cout << "You got Set The God of Violence!" << endl << "You can deal 3 damage to a player of your choosing!" << endl;
            break;
        case 3:
            std::cout << "You got Bastet The Goddess of Wisdom!" << endl << "The next hazard or attack will do zero damage to you!" << endl;
            break;
        case 4:
            std::cout << "You got Nekhbet The Goddess of Vultures!" << endl << "You can take one item from an unconscious player anywhere on the board!" << endl;
            break;
        case 5:
            std::cout << "You got Anhur The God of War!" << endl << "In your next fight againest a creature you will attack twice before they attack once!" << endl;
            break;
        case 6:
            std::cout << "You got Osiris The God of Death!" << endl << "If you are about to be killed instead of being knocked out you move one space forward instead!" << endl;
            break;
        case 7:
            std::cout << "You got Nehebkau The God of Snakes!" << endl << "You can make one player of your choicing skip their turn!" << endl;
            break;
        case 8:
            std::cout << "You got Ra The God of The Sun!" << endl << "You can nullify 1 blessing card that is used against you!" << endl;
            break;
        case 9:
            std::cout << "You got Horus The God of The Sky!" << endl << "You can now teleport to any neutral square you want!" << endl;
            break;
        }
        if (bless1 != 0 && bless2 != 0) {
            std::cout << "You already have 2 blessings. If you like this blessing better you may type 1 to replace your first blessing with this one and you may type 2 to replace your second blessing with this" << endl;
            std::cout << "If you would like to discard it input 3" << endl;
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
        priestBless1 = rand() % 9 + 1;
        std::cout << "Your first card is "; //since the priest gets 3 cards this tells the user the first one they got
        switch (priestBless1) {
        case 1:
            std::cout << "Thoth The God of Wisdom!" << endl << "You can choose one of the values on your dice to be your next roll!" << endl;
            break;
        case 2:
            std::cout << "Set The God of Violence!" << endl << "You can deal 3 damage to a player of your choosing!" << endl;
            break;
        case 3:
            std::cout << "Bastet The Goddess of Wisdom!" << endl << "The next hazard or attack will do zero damage to you!" << endl;
            break;
        case 4:
            std::cout << "Nekhbet The Goddess of Vultures!" << endl << "You can take one item from an unconscious player anywhere on the board!" << endl;
            break;
        case 5:
            std::cout << "Anhur The God of War!" << endl << "In your next fight againest a creature you will attack twice before they attack once!" << endl;
            break;
        case 6:
            std::cout << "Osiris The God of Death!" << endl << "If you are about to be killed instead of being knocked out you move one space forward instead!" << endl;
            break;
        case 7:
            std::cout << "Nehebkau The God of Snakes!" << endl << "You can make one player of your choicing skip their turn!" << endl;
            break;
        case 8:
            std::cout << "Ra The God of The Sun!" << endl << "You can nullify 1 blessing card that is used against you!" << endl;
            break;
        case 9:
            std::cout << "Horus The God of The Sky!" << endl << "You can now teleport to any neutral square you want!" << endl;
            break;
        }
        priestBless2 = rand() % 9 + 1;
        std::cout << endl << "Your second card is "; //this tells the user the secont one
        switch (priestBless2) {
        case 1:
            std::cout << "Thoth The God of Wisdom!" << endl << "You can choose one of the values on your dice to be your next roll!" << endl;
            break;
        case 2:
            std::cout << "Set The God of Violence!" << endl << "You can deal 3 damage to a player of your choosing!" << endl;
            break;
        case 3:
            std::cout << "Bastet The Goddess of Wisdom!" << endl << "The next hazard or attack will do zero damage to you!" << endl;
            break;
        case 4:
            std::cout << "Nekhbet The Goddess of Vultures!" << endl << "You can take one item from an unconscious player anywhere on the board!" << endl;
            break;
        case 5:
            std::cout << "Anhur The God of War!" << endl << "In your next fight againest a creature you will attack twice before they attack once!" << endl;
            break;
        case 6:
            std::cout << "Osiris The God of Death!" << endl << "If you are about to be killed instead of being knocked out you move one space forward instead!" << endl;
            break;
        case 7:
            std::cout << "Nehebkau The God of Snakes!" << endl << "You can make one player of your choicing skip their turn!" << endl;
            break;
        case 8:
            std::cout << "Ra The God of The Sun!" << endl << "You can nullify 1 blessing card that is used against you!" << endl;
            break;
        case 9:
            std::cout << "Horus The God of The Sky!" << endl << "You can now teleport to any neutral square you want!" << endl;
            break;
        }
        priestBless3 = rand() % 9 + 1;
        std::cout << endl << "Your third card is "; //this tells the user the third
        switch (priestBless3) {
        case 1:
            std::cout << "Thoth The God of Wisdom!" << endl << "You can choose one of the values on your dice to be your next roll!" << endl;
            break;
        case 2:
            std::cout << "Set The God of Violence!" << endl << "You can deal 3 damage to a player of your choosing!" << endl;
            break;
        case 3:
            std::cout << "Bastet The Goddess of Wisdom!" << endl << "The next hazard or attack will do zero damage to you!" << endl;
            break;
        case 4:
            std::cout << "Nekhbet The Goddess of Vultures!" << endl << "You can take one item from an unconscious player anywhere on the board!" << endl;
            break;
        case 5:
            std::cout << "Anhur The God of War!" << endl << "In your next fight againest a creature you will attack twice before they attack once!" << endl;
            break;
        case 6:
            std::cout << "Osiris The God of Death!" << endl << "If you are about to be killed instead of being knocked out you move one space forward instead!" << endl;
            break;
        case 7:
            std::cout << "Nehebkau The God of Snakes!" << endl << "You can make one player of your choicing skip their turn!" << endl;
            break;
        case 8:
            std::cout << "Ra The God of The Sun!" << endl << "You can nullify 1 blessing card that is used against you!" << endl;
            break;
        case 9:
            std::cout << "Horus The God of The Sky!" << endl << "You can now teleport to any neutral square you want!" << endl;
            break;
        }

        if (bless1 != 0 && bless2 != 0) { //this cheecks to see if you have no extra slots and if you do you can delete one card
            std::cout << "You already have 2 blessings. if you want to discard your 1st blessing, type 1. If you want to discard the second, type 2" << endl;
            std::cout << "If you dont want to replace anythhing input 3" << endl;
            cin >> fullSelect;
            if (fullSelect == 1) {
                bless1 = 0;
            }
            if (fullSelect == 2) {
                bless2 = 0;
            }
        }

        if (bless1 == 0 && blessgiven == 0) { //lets u choose which of the 3 cards to use and puts it in slot one
            std::cout << endl << "Which card would you like to keep?" << endl << "Type 1 for the frist blessing, 2 for the second and 3 for the third.";
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
            std::cout << endl << "Which card would you like to keep?" << endl << "Type 1 for the frist blessing, 2 for the second and 3 for the third.";
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
    //time
    srand(time(0));
    //variables for role selection
    int role = 0;
    int unsurerole;
    int RUSure;
    int roleselection = 0;
    //variables for character stats
    int position = 51;
    int money = 0;
    int damage;
    int health;
    int maxhealth;
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
    //variables for moving
    int dice = 0;
    int leftRight = 0;
    // items
    bool shovel = 0;
    bool pickpocket = 0;
    bool sword = 0;
    bool armor = 0;
    bool healthpotion = 1;


    //this is character selection 
    std::cout << "Please select your class:" << endl << endl;
    std::cout << "1. Slave: You start off with 10hp, immunity to fire ants and the ability to pickpocket without the pickpocket tool" << endl;
    std::cout << "2. Soldier: You start off with 14hp, you move with a 8 sided dice and you deal a extra 2 damage with every attack" << endl;
    std::cout << "3. Noble: You start off with 8hp, and start the game with 10 gold" << endl;
    std::cout << "4. Priest: You start off with 8hp, when you draw a blessing you can draw from the top 3 cards" << endl;
    std::cout << "5. Merchant: You start off with 10hp, you can haggle down the price of each store item by 5 gold" << endl;
    std::cout << endl << "PLease type in the number of the role you would like:  ";
    cin >> role;
    std::cout << endl;
    switch (role) {
    case 1:
        std::cout << "Congradulations! you are now a Slave!" << endl << endl;
        maxhealth = 10;
        health = 10;
        break;
    case 2:
        std::cout << "Congradulations! you are now a Soldier!" << endl << endl;
        maxhealth = 14;
        health = 14;
        break;
    case 3:
        std::cout << "Congradulations! you are now a Noble!" << endl << endl;
        maxhealth = 8;
        health = 8;
        break;
    case 4:
        std::cout << "Congradulations! you are now a Priest!" << endl << endl;
        maxhealth = 8;
        health = 8;
        break;
    case 5:
        std::cout << "Congradulations! you are now a Merchant!" << endl << endl;
        maxhealth = 10;
        health = 10;
        break;
    }

    //the loop for what happens depending on what square you are on 
    while (gameend == 0) {
        string interact;
        //this is if the player is in position 1
        if (position == 1) {
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Welcome to Pharoah ";
                std::cout << endl << "Your goal is to go around the map and collect all of the artifacts in order to become the next Pharoah ";
                std::cout << endl << "You can collect artifacts by fighting monsters and buying them in the stores";
                std::cout << endl << "Once youve gotten all artifacts you'll need to get back to the central pyramid";
                std::cout << endl << "The first one there with all the artifacts becomes the next pharoah";
                std::cout << " \n \n Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                position = position + dice;


            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                std::cout << endl << "Congratulations!!!";
                std::cout << endl << "You have collected all 5 artifacts and are now the Pharoah!!! ";
                std::cout << endl << "As pharoah you are now exempted from all taxes and laws!!!";
                std::cout << endl << "You now have total controll over all of egypt and can now laugh at your friends!!!";
                std::cout << endl << "GG's Thanks for playing <3";
                gameend = 1;
            }
        }


        //     This is if the player is in position 2
        else if (position == 2) {
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Press any button and enter to roll the dice:";

                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 7) {
                    position = position + dice;
                }
                if (dice == 8) {
                    std::cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
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
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice == 1) {
                    position = position - dice;
                }
                else {
                    std::cout << "You must land directly on top of the throne. You are one space away. /n Please wait to roll again";
                }
            }
        }


        //     This is if the player is in position 3
        else if (position == 3) {
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 6) {
                    position = position + dice;
                }
                if (dice >= 7) {
                    std::cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
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
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice == 2) {
                    position = position - dice;
                }
                else {
                    std::cout << "You must land directly on top of the throne. You are two spaces away. /n Please wait to roll again";
                }
            }
        }


        //     This is if the player is in position 4
        else if (position == 4) {
            money = money + 3;
            std::cout << "Congrats! You found 3 gold coins buried in the sand!";
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 5) {
                    position = position + dice;
                }
                if (dice >= 6) {
                    std::cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
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
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 3) {
                    position = position - dice;
                }
                else {
                    std::cout << "You must land directly on top of the throne. You are three spaces away. /n Please wait to roll again";
                }
            }
        }


        //     This is if the player is in position 5
        else if (position == 5) {
            money = money + 2;
            std::cout << "Congrats! You found 2 gold coins under a rock!";
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 4) {
                    position = position + dice;
                }
                if (dice >= 5) {
                    std::cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
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
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 4) {
                    position = position - dice;
                }
                else {
                    std::cout << "You must land directly on top of the throne. You are four spaces away. /n Please wait to roll again";
                }
            }
        }


        //     This is if the player is in position 6
        else if (position == 6) {
            if (shovel == 1) {
                money = money + 30;
                std::cout << "You found a buried treasure chest and managed to pry it open with your shovel! \n You found 30 gold coins!";
                shovel = 0;
            }
            else {
                std::cout << "There is a buried treasure chest at your feet come back with a shovel to claim its contents!";
            }
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 3) {
                    position = position + dice;
                }
                if (dice >= 4) {
                    std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
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
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 5) {
                    position = position - dice;
                }
                else {
                    std::cout << "You must land directly on top of the throne. You are three spaces away. /n Please wait to roll again";
                }
            }
        }


        //     This is if the player is in position 7
        else if (position == 7) {
            std::cout << "This is a neutral square.";

            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice <= 2) {
                position = position + dice;
            }
            if (dice >= 3) {
                std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
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
        else if (position == 8) {
            money = money + 2;
            std::cout << "Congrats! You found 2 gold coins stuck in a wall.";

            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice == 1) {
                position = position + dice;
            }
            if (dice >= 2) {
                std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
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
        else if (position == 9) {
            bless2, bless1 = blessRoll(role, bless1, bless2);
            std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
            cin >> leftRight;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (leftRight == 0) {
                position = position + dice;
            }
            else {
                position = position + dice + 57;
            }
        }

        //     This is if the player is in position 30
        else if (position == 30) {

        int monHealth = 15;
        int monDamage = 4;
        health, healthpotion = mummy(role, sword, healthpotion, health, maxhealth, monHealth, monDamage);

        if (health <= 0) {


            position = 31;
            health = 1;
        }
        else {
            position = 31;
            belt = 1;
        }

        }

        //     This is if the player is in position 51
        else if (position == 51) {

        int monHealth = 24;
        int monDamage = 3;
        health, healthpotion = spider(role, sword, healthpotion, health, maxhealth, monHealth, monDamage);

        if (health <= 0) {


            position = 52;
            health = 1;
        }
        else {
            position = 52;
            belt = 1;
        }

        }


        //     This is if the player is in position 63
        else if (position == 63) {

            int monHealth = 10;
            int monDamage = 6;
            health, healthpotion = gustave(role, sword, healthpotion, health, maxhealth, monHealth, monDamage);

            if (health <= 0) {


                position = 64;
                health = 1;
            }
            else {
                position = 64;
                belt = 1;
            }

        }


















    }
}