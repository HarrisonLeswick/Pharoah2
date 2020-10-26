#include <iostream>
#include <random>
#include <ctime>
#include <string>
using namespace std;

//Bosses
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
        std::cout << "The mummys health is currently " << monHealth << endl;
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
int spider(int role, int sword, int healthpotion, int health, int maxhealth, int monHealth, int monDamage) {
    std::cout << "The mostrous spider, Net appeared!\nThe 33 foot talk spider towers over you and flashes his fangs! ";
    while (monHealth > 0 && health > 0) {

        int usePotion;
        string interact;
        int damage;
        srand(time(0));


        std::cout << R"(

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

//Oasis shops
void oasisShop(int& cash, bool& pickpocket, bool& healthPotion, bool& sword) {
    char userAns;
    char userNumber;
    int pickPocketPrice = 5;
    int healthPotionPrice = 10;
    int swordPrice = 20;
    bool userLoop = true;

    std::cout << "                              ^             ^               ^!^" << endl;
    std::cout << "                                 ^ _______________________________" << endl;
    std::cout << "                                  [=U=U=U=U=U=U=U=U=U=U=U=U=U=U=U=]" << endl;
    std::cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
    std::cout << "                                  |        +-+-+-+-+-+-+-         |" << endl;
    std::cout << "                                  |       |The Oasis Shop|        |" << endl;
    std::cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
    std::cout << "                                  |  _________  __ __  _________  |" << endl;
    std::cout << "                                _ | |___   _  ||[]|[]||  _      | |" << endl;
    std::cout << "                               (!)||OPEN|_(!)_|| ,| ,||_(!)_____| |(!)" << endl;
    std::cout << "                              .T~T|:.....:T~T.:|__|__|:.T~T.:....:|T~T." << endl;
    std::cout << "                              ||_||||||||||_|||||||||||||_||||||||||_||" << endl;
    std::cout << "                              ~\=/~~~~~~~~\=/~~~~~~~~~~~\=/~~~~~~~~\=/~" << endl;
    std::cout << "                                | -------- | ----------- | -------- |" << endl;
    std::cout << "                              ~ |~^ ^~~^ ~~| ~^  ~~ ^~^~ |~ ^~^ ~~^ |^~" << endl;
    std::cout << endl;


    std::cout << "Hello, wellcome to the oasis shop." << endl;
    std::cout << "What would you like to purchase?" << endl;
    std::cout << endl;
    std::cout << "Your current gold is = " << cash << endl;

    std::cout << "1. Pick Pocket Glocket -- 5 Gold." << endl;
    std::cout << "~ Gives you the ability to steal gold/items form unconcious players ~" << endl;
    std::cout << endl;

    std::cout << "2. Health Potion -- 10 Gold." << endl;
    std::cout << "~ Instantly recovers your HP back to full ~" << endl;
    std::cout << endl;

    std::cout << "3. Iron Sword -- 20 Gold." << endl;
    std::cout << "~ When equipped will increase the player's damage by 3 points" << endl;
    std::cout << endl;

    std::cout << "4. Exit." << endl;
    do {
        cin >> userNumber;

        switch (userNumber)
        {
        case '1':
            if (pickpocket == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= pickPocketPrice)
            {
                cash -= pickPocketPrice;
                pickpocket = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }


            }
            else if (cash < pickPocketPrice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;
        case '2':
            if (healthPotion == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= healthPotionPrice)
            {
                cash -= healthPotionPrice;
                healthPotion = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }

            }
            else if (cash < healthPotionPrice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;
        case '3':

            if (sword == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= swordPrice)
            {
                cash -= swordPrice;
                sword = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }

            }
            else if (cash < swordPrice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;

        case '4':
            userLoop = false;
            break;

        }

    } while (userLoop == true);

    std::cout << endl;
    std::cout << "Clerk: Thank you for stopping by, have a nice day :) " << endl;
    std::cout << endl;
}
void oasisShopMerc(int& cash, bool& pickpocket, bool& healthPotion, bool& sword) {
    char userAns;
    char userNumber;
    int pickPocketPrice = 4;
    int healthPotionPrice = 6;
    int swordPrice = 12;
    bool userLoop = true;

    std::cout << "                              ^             ^               ^!^" << endl;
    std::cout << "                                 ^ _______________________________" << endl;
    std::cout << "                                  [=U=U=U=U=U=U=U=U=U=U=U=U=U=U=U=]" << endl;
    std::cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
    std::cout << "                                  |        +-+-+-+-+-+-+-         |" << endl;
    std::cout << "                                  |       |The Oasis Shop|        |" << endl;
    std::cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
    std::cout << "                                  |  _________  __ __  _________  |" << endl;
    std::cout << "                                _ | |___   _  ||[]|[]||  _      | |" << endl;
    std::cout << "                               (!)||OPEN|_(!)_|| ,| ,||_(!)_____| |(!)" << endl;
    std::cout << "                              .T~T|:.....:T~T.:|__|__|:.T~T.:....:|T~T." << endl;
    std::cout << "                              ||_||||||||||_|||||||||||||_||||||||||_||" << endl;
    std::cout << "                              ~\=/~~~~~~~~\=/~~~~~~~~~~~\=/~~~~~~~~\=/~" << endl;
    std::cout << "                                | -------- | ----------- | -------- |" << endl;
    std::cout << "                              ~ |~^ ^~~^ ~~| ~^  ~~ ^~^~ |~ ^~^ ~~^ |^~" << endl;
    std::cout << endl;


    std::cout << "Hello, wellcome to the oasis shop." << endl;
    std::cout << "What would you like to purchase?" << endl;
    std::cout << endl;
    std::cout << "Your current gold is = " << cash << endl;

    std::cout << "1. Pick Pocket Glocket -- 4 Gold." << endl;
    std::cout << "~ Gives you the ability to steal gold/items form unconcious players ~" << endl;
    std::cout << endl;

    std::cout << "2. Health Potion -- 6 Gold." << endl;
    std::cout << "~ Instantly recovers your HP back to full ~" << endl;
    std::cout << endl;

    std::cout << "3. Iron Sword -- 12 Gold." << endl;
    std::cout << "~ When equipped will increase the player's damage by 3 points" << endl;
    std::cout << endl;

    std::cout << "4. Exit." << endl;

    do {
        cin >> userNumber;

        switch (userNumber)
        {
        case '1':
            if (pickpocket == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= pickPocketPrice)
            {
                cash -= pickPocketPrice;
                pickpocket = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }


            }
            else if (cash < pickPocketPrice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;
        case '2':
            if (healthPotion == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= healthPotionPrice)
            {
                cash -= healthPotionPrice;
                healthPotion = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }

            }
            else if (cash < healthPotionPrice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;
        case '3':

            if (sword == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= swordPrice)
            {
                cash -= swordPrice;
                sword = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }

            }
            else if (cash < swordPrice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;

        case '4':
            userLoop = false;
            break;

        }

    } while (userLoop == true);

    std::cout << endl;
    std::cout << "Clerk: Thank you for stopping by, have a nice day :) " << endl;
    std::cout << endl;
}

//Sandy shops
void sandyShop(int& cash, bool& shovel, bool& armor, bool& jewelry, int& maxhealth) {
    char userAns;
    char userNumber;
    int shovelprice = 8;
    int armorPrice = 20;
    int jewelryPrice = 50;
    bool userLoop = true;

    std::cout << "                              ^             ^               ^!^" << endl;
    std::cout << "                                 ^ _______________________________" << endl;
    std::cout << "                                  [=U=U=U=U=U=U=U=U=U=U=U=U=U=U=U=]" << endl;
    std::cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
    std::cout << "                                  |        +-+-+-+-+-+-+-         |" << endl;
    std::cout << "                                  |       |The Sandy Shop|        |" << endl;
    std::cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
    std::cout << "                                  |  _________  __ __  _________  |" << endl;
    std::cout << "                                _ | |___   _  ||[]|[]||  _      | |" << endl;
    std::cout << "                               (!)||OPEN|_(!)_|| ,| ,||_(!)_____| |(!)" << endl;
    std::cout << "                              .T~T|:.....:T~T.:|__|__|:.T~T.:....:|T~T." << endl;
    std::cout << "                              ||_||||||||||_|||||||||||||_||||||||||_||" << endl;
    std::cout << "                              ~\=/~~~~~~~~\=/~~~~~~~~~~~\=/~~~~~~~~\=/~" << endl;
    std::cout << "                                | -------- | ----------- | -------- |" << endl;
    std::cout << "                              ~ |~^ ^~~^ ~~| ~^  ~~ ^~^~ |~ ^~^ ~~^ |^~" << endl;
    std::cout << endl;


    std::cout << "Hello, wellcome to the Sandy shop." << endl;
    std::cout << "What would you like to purchase?" << endl;
    std::cout << endl;
    std::cout << "Your current gold is = " << cash << endl;

    std::cout << "1. Shovel -- 8 Gold." << endl;
    std::cout << "~ Gives you the ability to dig up buried treasure chests hidden around the map ~" << endl;
    std::cout << endl;

    std::cout << "2. Armor -- 20 Gold." << endl;
    std::cout << "~ When equipped will increase the player's max health by 5 points ~" << endl;
    std::cout << endl;

    std::cout << "3. Jewelry -- 50 Gold." << endl;
    std::cout << "~ This is one of the pieces required to become Pharoah ~" << endl;
    std::cout << endl;

    std::cout << "4. Exit." << endl;

    do {
        cin >> userNumber;

        switch (userNumber)
        {
        case '1':
            if (shovel == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= shovelprice)
            {
                cash -= shovelprice;
                shovel = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }


            }
            else if (cash < shovelprice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;
        case '2':
            if (armor == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= armorPrice)
            {
                cash -= armorPrice;
                armor = 1;
                maxhealth = maxhealth + 5;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {

                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }

            }
            else if (cash < armorPrice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;
        case '3':

            if (jewelry == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= jewelryPrice)
            {
                cash -= jewelryPrice;
                jewelry = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }

            }
            else if (cash < jewelryPrice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;

        case '4':
            userLoop = false;
            break;

        }

    } while (userLoop == true);

    std::cout << endl;
    std::cout << "Clerk: Thank you for stopping by, have a nice day :) " << endl;
    std::cout << endl;
}
void sandyShopMerc(int& cash, bool& shovel, bool& armor, bool& jewelry, int& maxhealth) {
    char userAns;
    char userNumber;
    int shovelprice = 5;
    int armorPrice = 12;
    int jewelryPrice = 35;
    bool userLoop = true;

    std::cout << "                              ^             ^               ^!^" << endl;
    std::cout << "                                 ^ _______________________________" << endl;
    std::cout << "                                  [=U=U=U=U=U=U=U=U=U=U=U=U=U=U=U=]" << endl;
    std::cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
    std::cout << "                                  |        +-+-+-+-+-+-+-         |" << endl;
    std::cout << "                                  |       |The Sandy Shop|        |" << endl;
    std::cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
    std::cout << "                                  |  _________  __ __  _________  |" << endl;
    std::cout << "                                _ | |___   _  ||[]|[]||  _      | |" << endl;
    std::cout << "                               (!)||OPEN|_(!)_|| ,| ,||_(!)_____| |(!)" << endl;
    std::cout << "                              .T~T|:.....:T~T.:|__|__|:.T~T.:....:|T~T." << endl;
    std::cout << "                              ||_||||||||||_|||||||||||||_||||||||||_||" << endl;
    std::cout << "                              ~\=/~~~~~~~~\=/~~~~~~~~~~~\=/~~~~~~~~\=/~" << endl;
    std::cout << "                                | -------- | ----------- | -------- |" << endl;
    std::cout << "                              ~ |~^ ^~~^ ~~| ~^  ~~ ^~^~ |~ ^~^ ~~^ |^~" << endl;
    std::cout << endl;


    std::cout << "Hello, wellcome to the Sandy shop." << endl;
    std::cout << "What would you like to purchase?" << endl;
    std::cout << endl;
    std::cout << "Your current gold is = " << cash << endl;

    std::cout << "1. Shovel -- 5 Gold." << endl;
    std::cout << "~ Gives you the ability to dig up buried treasure chests hidden around the map ~" << endl;
    std::cout << endl;

    std::cout << "2. Armor -- 12 Gold." << endl;
    std::cout << "~ When equipped will increase the player's max health by 5 points ~" << endl;
    std::cout << endl;

    std::cout << "3. Jewelry -- 35 Gold." << endl;
    std::cout << "~ This is one of the pieces required to become Pharoah ~" << endl;
    std::cout << endl;

    std::cout << "4. Exit." << endl;

    do {
        cin >> userNumber;

        switch (userNumber)
        {
        case '1':
            if (shovel == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= shovelprice)
            {
                cash -= shovelprice;
                shovel = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }


            }
            else if (cash < shovelprice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;
        case '2':
            if (armor == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= armorPrice)
            {
                cash -= armorPrice;
                maxhealth = maxhealth + 5;
                armor = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }

            }
            else if (cash < armorPrice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;
        case '3':

            if (jewelry == 1) {
                std::cout << "Sorry you already have this item in your inventory" << endl;
            }
            else if (cash >= jewelryPrice)
            {
                cash -= jewelryPrice;
                jewelry = 1;
                std::cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
                cin >> userAns;

                if (userAns == 'Yes' || userAns == 'yes' || userAns == 'y' || userAns == 'Y')
                {
                    break;
                }
                else if (userAns == 'No' || userAns == 'no' || userAns == 'n' || userAns == 'N')
                {
                    userLoop = false;
                    break;
                }

            }
            else if (cash < jewelryPrice)
            {
                std::cout << "Sorry you dont have enough gold to purchase this item. " << endl;
            }
            break;

        case '4':
            userLoop = false;
            break;

        }

    } while (userLoop == true);

    std::cout << endl;
    std::cout << "Clerk: Thank you for stopping by, have a nice day :) " << endl;
    std::cout << endl;
}

//Dice mechanics
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
//Blessing system
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
    int turns = 0;
    //variables for role selection
    int role = 0;
    int unsurerole;
    int RUSure;
    int roleselection = 0;
    //variables for character stats
    int position = 29;
    int money = 10;
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
    int bridgeDecision = 0;
    // items
    bool shovel = 0;
    bool pickpocket = 0;
    bool sword = 0;
    bool armor = 0;
    bool healthpotion = 0;


    //this is character selection 
    std::cout << "Please select your class:" << endl << endl;
    std::cout << "1. Slave: You start off with 10hp, immunity to fire ants and the ability to pickpocket without the pickpocket tool" << endl;
    std::cout << "2. Soldier: You start off with 14hp, you move with a 8 sided dice and you deal a extra 2 damage with every attack" << endl;
    std::cout << "3. Noble: You start off with 8hp, and start the game with an extra 10 gold" << endl;
    std::cout << "4. Priest: You start off with 8hp, when you draw a blessing you can draw from the top 3 cards" << endl;
    std::cout << "5. Merchant: You start off with 10hp, you can haggle down the price of each store item by some gold" << endl;
    std::cout << endl << "PLease type in the number of the role you would like:  ";
    cin >> role;
    std::cout << endl;
    switch (role) {
    case 1:
        std::cout << "Congradulations! you are now a Slave!" << endl << endl;
        maxhealth = 10;
        health = 10;
        pickpocket = 1;
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
        money = money + 10;
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
        turns = turns + 1;
        if (health <= 0) {
            health = maxhealth;
            position = 1;
            money = money - 5;
            if (money <= 0) {
                money = 0;
            }
            health = maxhealth;
            turns = turns + 3;
            std::cout << "\n\nA servant found you unconscious and brought you back to the pyramid. You lost 15 dollars and were asleep for 3 nights\n\n";

        }
        std::cout << "\n\nTurns: " << turns << "       Position: " << position << "       Gold: " << money << "       Health: " << health << "\n\n";


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
                std::cout << "You found a buried treasure chest and managed to pry it open with your shovel! \n You found 30 gold coins!\n";
                shovel = 0;
            }
            else {
                std::cout << "There is a buried treasure chest at your feet come back with a shovel to claim its contents!\n";
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

        //     This is if the player is in position 10
        else if (position == 10) {
            money = money + 2;
            std::cout << "Congrats! You found 2 gold coins hidden in a bush!";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }

        //     This is if the player is in position 11
        else if (position == 11) {
            money = money + 3;
            std::cout << "Congrats! You found 3 gold coins hidden in your shoe";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 7) {
                position = 18;
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 12
        else if (position == 12) {
            std::cout << "This is a neutral square.";

            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 6) {
                position = 18;
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 13
        else if (position == 13) {
            money = money - 1;
            std::cout << " 1 gold coin fell into the hole in the ground.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);

            if (dice >= 5) {
                position = 18;
            }
            else {
                position = position + dice;
            }
        }

        //      This is if the player is in postion 14
        else if (position == 14) {
            bless2, bless1 = blessRoll(role, bless1, bless2);
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 4) {
                position = 18;
            }
            else {
                position = position + dice;
            }

        }

        //      This is if the okayer is in postion 15
        else if (position == 15) {
            money = money + 3;
            std::cout << "Congrats! You found 1 gold coins hidden in a tree";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 3) {
                position = 18;
            }
            else {
                position = position + dice;
            }
        }

        //      This is if the player is in postion 16
        else if (position == 16) {
            health = health - 1;
            std::cout << "Some fire ants bit your foot and you lost 1 hp";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 2) {
                position = 18;
            }
            else {
                position = position + dice;
            }
        }

        //      This is if the player is in postion 17
        else if (position == 17) {
            money = money + 1;
            std::cout << "Congrats! You found 1 gold coins in a flower pot.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = 18;
        }

        //      This is if the player is in position 18
        else if (position == 18) {
            if (role == 5) {
                oasisShopMerc(money, pickpocket, healthpotion, sword);
            }
            else {
                oasisShop(money, pickpocket, healthpotion, sword);
            }
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 3) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go down to the middle bridge enter 1, if you would like to go to the bottom bridge enter 2: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice + 56;
                }
                else if (bridgeDecision == 2) {
                    position = position + dice + 21;
                }
            }
            else {
                position = position + dice;
            }
        }


        //      This is if the player is in position 19
        else if (position == 19) {

            health -= 1;
            std::cout << R"( 
      ,_      _,
        '.__.'
   '-,   (__)   ,-'
     '._ .::. _.'
       _'(^^)'_
    _,` `>\/<` `,_
   `  ,-` )( `-,  `
      |  /==\  |
    ,-'  |=-|  '-,
         )-=(
         \__/ )" << endl;
            std::cout << "Some fire ants bit your foot and you lost 1Hp." << endl;

            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 2) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go down to the middle bridge enter 1, if you would like to go to the bottom bridge enter 2: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice + 56;
                }
                else if (bridgeDecision == 2) {
                    position = position + dice + 21;
                }
            }
            else
            {
                position = position + dice;
            }
        }
        //      This is if the player is on position 20
        else if (position == 20) {
            money = money + 2;
            std::cout << "Congrats! You found 2 gold coins " << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 1) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go down to the middle bridge enter 1, if you would like to go to the bottom bridge enter 2: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice + 56;
                }
                else if (bridgeDecision == 2) {
                    position = position + dice + 21;
                }
            }

        }
        //      This is if the player is on position 21
        else if (position == 21)
        {
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }


        //      This is if the player is on position 22
        else if (position == 22)
        {
            money = money + 1;
            std::cout << "Congrats! You found 1 gold coins under a rock" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice == 8)
            {
                position = 30;
            }
            else
            {
                position = position + dice;
            }

        }
        //      This is if the player is on position 23
        else if (position == 23)
        {
            std::cout << "This is a neutral square." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 7)
            {
                position = 30;
            }
            else
            {
                position = position + dice;
            }
        }
        //      This is if the player is on position 24
        else if (position == 24)
        {
            money = money + 2;
            std::cout << "Congrats! You found 2 gold coins beside a fork. " << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 6)
            {
                position = 30;
            }
            else
            {
                position = position + dice;
            }
        }
        //      This is if the player is on position 25
        else if (position == 25) {

            bless2, bless1 = blessRoll(role, bless1, bless2);
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 5)
            {
                position = 30;
            }
            else
            {
                position = position + dice;
            }
        }
        //      This is if the player is on position 26
        else if (position == 26)
        {
            std::cout << "This is a neutral square." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 4)
            {
                position = 30;
            }
            else
            {
                position = position + dice;
            }
        }
        //      This is if the player is on position 27 (Need to Change this as a game over spot)
        else if (position == 27)
        {
            std::cout << "This is a neutral square." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 3)
            {
                position = 30;
            }
            else
            {
                position = position + dice;
            }
        }
        //      This is if the player is on position 28
        else if (position == 28)
        {
            money = money - 2;
            std::cout << "You tripped and a camel ate 2 of your gold coins!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 2)
            {
                position = 30;
            }
            else
            {
                position = position + dice;
            }
        }
        //      This is if the player is on postion 29
        else if (position == 29)
        {
            money = money + 3;
            std::cout << "Congrats! You found 3 gold coins inside a small pond." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 1)
            {
                position = 30;
            }
            else
            {
                position = position + dice;
            }
        }










        //     This is if the player is in position 30
        else if (position == 30) {
            int x;
            int monHealth = 15;
            int monDamage = 4;
            health, healthpotion = mummy(role, sword, healthpotion, health, maxhealth, monHealth, monDamage);
            cin >> x;
            if (health <= 0) {


                position = 1;
                health = 0;
            }
            else {
                position = 31;
                hat = 1;
            }

        }

        else if (position == 31)
        {
            std::cout << "This is a neutral square." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);

            position = position + dice;
        }
        //      This is if the player is in position 32
        else if (position == 32)
        {
            money = money + 3;
            std::cout << "Congrats! You found 2 gold coins inside the clothes of a dead body!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }
        //      This is if the player is in position 33
        else if (position == 33)
        {
            money = money - 1;
            std::cout << "While walking throught the desert at night you take a quick nap. You wake up to find one of your gold coins missing!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }

        //      This is if the player is in position 34
        else if (position == 34)
        {
            money = money + 1;
            std::cout << "Congrats! You found 1 gold coin laying on the ground!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }

        //      This is if the player is in position 35
        else if (position == 35)
        {
            money = money + 2;
            std::cout << "You spot a lady in distress trying to grab her wallet that is being guarded by a wild snake!" << endl;
            std::cout << "You quickly run over and snatch the wallet before the snake could bite you." << endl;
            std::cout << "As a reward the lady gave you 2 gold coins!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }
        //      This is if the player is in position 36
        else if (position == 36)
        {
            money = money - 1;
            std::cout << "You notice a small hole is in your pocket! You have lost one gold coin!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }
        //      This is if the player is in position 37
        else if (position == 37)
        {
            money = money + 3;
            std::cout << "You encouter an abandoned house." << endl;
            std::cout << "You take a look inside, and discover a cool looking jar." << endl;
            std::cout << "Inside lies some rotten treats but also 3 gold coins!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 8)
            {
                position = position + dice;
            }
            if (dice >= 8)
            {
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
        //      This is if the player is in position 38
        else if (position == 38)
        {
            bless2, bless1 = blessRoll(role, bless1, bless2);
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 7)
            {
                position = position + dice;
            }
            if (dice >= 7)
            {
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
        //      This is if the player is in position 39
        else if (position == 39)
        {
            money = money - 1;
            std::cout << "You meet up with a traveling merchant." << endl;
            std::cout << "The merchant is willing to sell a small water canister, you're pretty thirsty so you accept the offer for 1 gold coin." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 6)
            {
                position = position + dice;
            }
            if (dice >= 6)
            {
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
        //      This is if the player is in position 40
        else if (position == 40)
        {
            health = health - 1;

            std::cout << "You take a break and sit down, unfortunately for you some ants bite your butt and you lose 1 HP!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 5)
            {
                position = position + dice;
            }
            else if (dice >= 5)
            {
                std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    //vehdsKVbfdsyukvzgdyuvsdbhuzldvgkbyjvgdybuzdvkzdjhdgvjudhku fd
                    if (dice < 8)
                    {
                        position = position + dice;
                    }
                    if (dice >= 8)
                    {
                        std::cout << "There is another fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                        cin >> leftRight;
                        if (leftRight == 0) {
                            position = position + dice;
                        }
                        else {
                            position = position + dice + 39;
                        }
                    }
                }
                else {
                    if (dice >= 7) {
                        position = 104;
                    }
                    else {
                        position = position + dice + 57;
                    }
                }
            }

        }
        //      This is if the player is in position 41
        else if (position == 41)
        {
            money = money + 2;
            std::cout << "While looking in a bush to find some berries you spot something shiny." << endl;
            std::cout << "You dig into the bush to discover 2 gold coins!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 4)
            {
                position = position + dice;
            }
            else if (dice >= 4)
            {
                std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {

                    if (dice < 7)
                    {
                        position = position + dice;
                    }
                    if (dice >= 7)
                    {
                        std::cout << "There is another fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                        cin >> leftRight;
                        if (leftRight == 0) {
                            position = position + dice;
                        }
                        else {
                            position = position + dice + 39;
                        }
                    }
                }
                else {
                    if (dice >= 6) {
                        position = 104;
                    }
                    else {
                        position = position + dice + 57;
                    }
                }
            }
        }

        //      This is if the player is in position 42
        else if (position == 42)
        {
            std::cout << "This is a neutral square." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);

            if (dice < 3)
            {
                position = position + dice;
            }
            else if (dice >= 3)
            {
                std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    //vehdsKVbfdsyukvzgdyuvsdbhuzldvgkbyjvgdybuzdvkzdjhdgvjudhku fd
                    if (dice < 6)
                    {
                        position = position + dice;
                    }
                    if (dice >= 6)
                    {
                        std::cout << "There is another fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                        cin >> leftRight;
                        if (leftRight == 0) {
                            position = position + dice;
                        }
                        else {
                            position = position + dice + 39;
                        }
                    }
                }
                else {
                    if (dice >= 5) {
                        position = 104;
                    }
                    else {
                        position = position + dice + 57;
                    }
                }
            }

        }

        //      This is if the player is in position 43
        else if (position == 43)
        {
            std::cout << "This is a neutral square." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);

            if (dice < 2)
            {
                position = position + dice;
            }
            else if (dice >= 2)
            {
                std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    //vehdsKVbfdsyukvzgdyuvsdbhuzldvgkbyjvgdybuzdvkzdjhdgvjudhku fd
                    if (dice < 5)
                    {
                        position = position + dice;
                    }
                    if (dice >= 5)
                    {
                        std::cout << "There is another fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                        cin >> leftRight;
                        if (leftRight == 0) {
                            if (dice > 7) {
                                position = 51;
                            }
                            else
                                position = position + dice;
                        }
                        else {
                            position = position + dice + 39;
                        }
                    }
                }
                else {
                    if (dice >= 4) {
                        position = 104;
                    }
                    else {
                        position = position + dice + 57;
                    }
                }
            }

        }

        //      This is if the player is in position 44
        else if (position == 44)
        {
            bless2, bless1 = blessRoll(role, bless1, bless2);

            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);


                if (dice >= 1)
                {
                    std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {

                        if (dice < 4)
                        {
                            position = position + dice;
                        }
                        if (dice >= 4)
                        {
                            std::cout << "There is another fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                            cin >> leftRight;
                            if (leftRight == 0) {
                                if (dice >= 7) {
                                    position = 51;
                                }
                                else
                                    position = position + dice;
                            }
                            else {
                                position = position + dice + 39;
                            }
                        }
                    }
                    else {
                        if (dice >= 3) {
                            position = 104;
                        }
                        else {
                            position = position + dice + 57;
                        }
                    }

                }
            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 6) {
                    position = position + 57;
                }
                else if (dice == 7) {
                    position = 6;
                }
                else if (dice == 8) {
                    position = 5;
                }

            }
        }

        //      This is if the player is in position 45
        else if (position == 45)
        {
            money = money - 1;

            std::cout << "While flipping a gold coin in the sky you accidentially flip it too high and lost it some where on the ground." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 3)
            {
                position = position + dice;
            }
            if (dice >= 3)
            {
                std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    if (dice >= 6) {
                        position = 51;
                    }
                    else
                        position = position + dice;
                }
                else {
                    position = position + dice + 39;
                }
            }

        }

        //      This is if the player is in position 46
        else if (position == 46)
        {
            money = money + 3;
            std::cout << "You see an old well." << endl;
            std::cout << "You take a look inside, and discover not a single drop of water." << endl;
            std::cout << "But you scrape up 3 gold coins from the bottom!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 2)
            {
                position = position + dice;
            }
            if (dice >= 2)
            {
                std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    if (dice >= 5) {
                        position = 51;
                    }
                    else
                        position = position + dice;
                }
                else {
                    position = position + dice + 39;
                }
            }
        }

        //      This is if the player is in position 47
        else if (position == 47)
        {
            bless2, bless1 = blessRoll(role, bless1, bless2);
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 1)
            {
                position = position + dice;
            }
            if (dice >= 1)
            {
                std::cout << "You are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    if (dice >= 4) {
                        position = 51;
                    }
                    else
                        position = position + dice;
                }
                else {
                    position = position + dice + 39;
                }
            }
        }

        //This is if the player is in position 48
        else if (position == 48)
        {
            money = money - 1;

            std::cout << "While walking for so long you throw a coin as far as you can into the pond to decrease your boredom." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 3) {
                position = 51;
            }
            else
                position = position + dice;
        }
        //      This is if the player is in position 49
        else if (position == 49)
        {
            std::cout << "This is a neutral square." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);

            if (dice >= 2) {
                position = 51;
            }
            else
                position = position + dice;

        }
        //      This is if the player is in position 50
        else if (position == 50)
        {
            money = money + 2;
            std::cout << "You see a blue blur go into a wall." << endl;
            std::cout << "It was sonic and he dropped 2 gold coins that you quickly pick up!" << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 1) {
                position = 51;
            }
            else
                position = position + dice;
        }




        //     This is if the player is in position 51
        else if (position == 51) {

            int monHealth = 24;
            int monDamage = 3;
            health, healthpotion = spider(role, sword, healthpotion, health, maxhealth, monHealth, monDamage);

            if (health <= 0) {


                position = 52;
                health = 0;
            }
            else {
                position = 52;
                robe = 1;
            }

        }

        //     This is if the player is in position 52
        else if (position == 52) {
            std::cout << "This is a neutral square.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }

        //     This is if the player is in position 53
        else if (position == 53) {
            money = money - 3;
            std::cout << "The wind picks up and a duststorm whips you, you drop 3 coins.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }

        //     This is if the player is in position 54
        else if (position == 54) {
            money = money + 2;
            std::cout << "A couple of coins were stuck in your boot! Score!";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }

        //     This is if the player is in position 55
        else if (position == 55) {
            if (shovel == 1) {
                money = money + 30;
                std::cout << "You found a buried treasure chest and managed to pry it open with your shovel! \n You found 30 gold coins!";
                shovel = 0;
            }
            else {
                std::cout << "There is a buried treasure chest at your feet come back with a shovel to claim its contents!";
            }
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }

        //     This is if the player is in position 56
        else if (position == 56) {
            money = money + 1;
            std::cout << "You find a coin attached to a letter and a ballon! The letter is illegible, you take the coin.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice == 8) {
                position = 63;
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 57
        else if (position == 57) {
            std::cout << "This is a neutral square.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 7) {
                position = 63;
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 58
        else if (position == 58) {
            money = money - 2;
            std::cout << "You stumble over yourself and trip, you accidentally drop two coins into a rocketship which takes off without you.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 6) {
                position = 63;
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 59
        else if (position == 59) {
            money = money + 1;
            std::cout << "You bump into a sickly old man and soothe him in his last few moments on earth. You became the sole benefactor on his will. He owned 1 coin.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 5) {
                position = 63;
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 60
        else if (position == 60) {
            bless2, bless1 = blessRoll(role, bless1, bless2);
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 4) {
                position = 63;
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 61
        else if (position == 61) {
            money = money + 2;
            std::cout << "A rocketship lands directly on your head, a couple of coins fall out of it!";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 3) {
                position = 63;
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 62
        else if (position == 62) {
            money = money + 3;
            std::cout << "Someone mistakes you for a C-list celebrity! They pay you 3 coins for an autograph!";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = 63;
        }

        //     This is if the player is in position 63
        else if (position == 63) {

            int monHealth = 10;
            int monDamage = 6;
            health, healthpotion = gustave(role, sword, healthpotion, health, maxhealth, monHealth, monDamage);

            if (health <= 0) {


                position = 64;
                health = 0;
            }
            else {
                position = 64;
                belt = 1;
            }

        }

        //     This is if the player is in position 64
        else if (position == 64) {
            std::cout << "This is a neutral square.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 7) {
                position = 18;
            }
            if (dice >= 3) {
                position = position - 53 + dice;
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 65
        else if (position == 65) {
            money = money + 3;
            std::cout << "Someone mistakes you for a beggar! They generously toss three coins your way...";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 6) {
                position = 18;
            }
            if (dice >= 2) {
                position = position - 53 + dice;
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 66
        else if (position == 66) {
            std::cout << "This is a neutral square.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 6) {
                position = 18;
            }
            position = position - 53 + dice;
        }

        //     This is if the player is in position 67
        else if (position == 67) {
            money = money - 2;
            std::cout << "You manouever yourself between some greenery in a very cool way! You drop a couple coins but don't pick them up because you're too cool for that!";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }

        //     This is if the player is in position 68
        else if (position == 68) {
            health = health - 3;
            std::cout << "A cat leaps from the shadows and scratches you before running off... Ow... You lose three health.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }

        //     This is if the player is in position 69
        else if (position == 69) {
            money = money + 5;
            std::cout << "All of your friends and family die from unknown causes! You inherit 5 coins! Awesome!";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 8) {
                position = position + dice;
            }
            if (dice == 8) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go to the bottom bridge enter 1: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice - 35;
                }
            }
        }

        //     This is if the player is in position 70
        else if (position == 70) {
            std::cout << "This is a neutral square. (Quicksand placeholder)";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 7) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go to the bottom bridge enter 1: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice - 35;
                }
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 71
        else if (position == 71) {
            std::cout << "This is a neutral square.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 6) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go to the bottom bridge enter 1: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice - 35;
                }
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 72
        else if (position == 72) {
            bless2, bless1 = blessRoll(role, bless1, bless2);
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 5) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go to the bottom bridge enter 1: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice - 35;
                }
            }
            else {
                position = position + dice;
            }
        }

        //     This is if the player is in position 73
        else if (position == 73) {
            std::cout << "A cat leaps from the shadows and scratches you before running off... Ow... You lose three health.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 4) {
                position = position + dice;
            }
            if (dice >= 4) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go to the bottom bridge enter 1: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice - 35;
                }
            }
        }

        //     This is if the player is in position 74
        else if (position == 74) {
            money = money + 5;
            std::cout << "You trip over a corpse. Hm... After a brief moral debate in your mind, you decide to loot the body. You get 5 coins.";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 3) {
                position = position + dice;
            }
            if (dice >= 3) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go to the bottom bridge enter 1: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice - 35;
                }
            }
        }

        //     This is if the player is in position 75
        else if (position == 75) {
            money = money + 3;
            std::cout << "You find a sofa covered in sand! You check under the cushions and find three coins!";
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice < 2) {
                position = position + dice;
            }
            if (dice >= 2) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go to the bottom bridge enter 1: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice - 35;
                }
            }
        }

        //     This is if the player is in position 76
        else if (position == 76) {
            bless2, bless1 = blessRoll(role, bless1, bless2);
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);

            if (dice >= 1) {
                std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go to the bottom bridge enter 1: ";
                cin >> bridgeDecision;
                if (bridgeDecision == 0) {
                    position = position + dice;
                }
                else if (bridgeDecision == 1) {
                    position = position + dice - 35;
                }
            }
        }

        //  This is if player is in position 77
        else if (position == 77) {
            std::cout << "You are at a bridge, if you would like to pass normally enter 0, if you would like to go to the bottom bridge enter 1: ";
            cin >> bridgeDecision;
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (bridgeDecision == 0) {
                position = position + dice;
            }
            else if (bridgeDecision == 1) {
                position = position + dice - 35;
            }

        }

        //  This is if player is in position
        else if (position == 78) {
            flail = true;
            std::cout << "You have stumbled across the LEGENDARY FLAIL! It's kinda fun shaking it around...";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = position + dice;
        }

        //  This is if player is in position
        else if (position == 79) {
            money = money + 2;
            std::cout << "Oh god what's happening... you begin to shake. Your chest is burning, suddenly two coins burst out through your ribcage. It's the most excruciating pain you've ever felt. +2 coins.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 8) {
                position = position - 49 + dice;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 80) {
            money = money - 1;
            std::cout << "Nice a vending machine! It has a legendary sword in it! You put in a coin and input the code. Whoops wrong code, a pack of twizzlers get stuck in the machine...";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 7) {
                position = position - 49 + dice;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 81) {
            money = money + 3;
            std::cout << "An ATM! You decide to check your savings account! One hundred coins! You withdraw all of your savings, subtracting the withdrawal fee you gain a total of 3 coins.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 6) {
                position = position - 49 + dice;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 82) {
            if (shovel == 1) {
                money = money + 30;
                std::cout << "You found a buried treasure chest and managed to pry it open with your shovel! \n You found 30 gold coins!";
                shovel = 0;
            }
            else {
                std::cout << "There is a buried treasure chest at your feet come back with a shovel to claim its contents!";
            }
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 5) {
                position = position - 49 + dice;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 83) {
            std::cout << "This is a neutral square.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 4) {
                position = position - 49 + dice;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 84) {
            turns = turns + 1;
            std::cout << "Quicksand! It takes you a whole turn to wiggle out... Your wiggling skill went up by 1!";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 3) {
                position = position - 49 + dice;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 85) {
            money = money + 1;
            std::cout << "You reach an epiphany. You write tirelessly for months about your philosophies and your emotional journey. You release your auto-biography and sell one copy. +1 coin.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 2) {
                position = position - 49 + dice;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 86) {
            money = money + 2;
            std::cout << "A street magician walks up to you and pulls a couple coins out of your ears! You knock him unconscious and take the coins.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 1) {
                position = position - 49 + dice;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 87) {
            money = money - 1;
            std::cout << "Your significant other hands you divorce papers, you hire a lawyer to look over them. -1 coin.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 8) {
                std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    position = position + dice;
                }
                else {
                    position = position + dice + 4;
                }

            }
        }

        //  This is if player is in position
        else if (position == 88) {
            money = money + 2;
            std::cout << "Your divorce hearing went over well! You got the dog! Wuf waf! +2 coins!";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 7) {
                std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    position = position + dice;
                }
                else {
                    position = position + dice + 4;
                }

            }
        }

        //  This is if player is in position
        else if (position == 89) {
            std::cout << "This is a neutral square.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 6) {
                std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    position = position + dice;
                }
                else {
                    position = position + dice + 4;
                }

            }
        }

        //  This is if player is in position
        else if (position == 90) {
            money = money + 1;
            std::cout << "'This is a neutral square.' Reads the street sign. There's a coin on the ground. You pick it up.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 5) {
                std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    position = position + dice;
                }
                else {
                    if (dice == 8) {
                        position = position + dice - 94;
                    }
                    else {
                        position = position + dice + 4;
                    }
                }

            }
        }

        //  This is if player is in position
        else if (position == 91) {
            money = money + 3;
            std::cout << "Some guy in a labcoat offers to buy a lock of your hair. You accept. He gave you three coins.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 4) {
                std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    if (dice == 8) {
                        position = position + dice - 39;
                    }
                    else {
                        position = position + dice;
                    }
                }
                else {
                    if (dice >= 8) {
                        if (dice >= 6) {
                            std::cout << "\nYou are at another fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                            cin >> leftRight;
                            if (leftRight == 0) {
                                position = position + dice - 94;
                            }
                            else {
                                position = position + dice - 37;
                            }
                        }
                        else {
                            position = position + dice - 94;
                        }
                    }
                    else {
                        position = position + dice + 4;
                    }
                }

            }
        }

        //  This is if player is in position
        else if (position == 92) {
            std::cout << "This is a neutral square.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 3) {
                std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    if (dice >= 7) {
                        position = position + dice - 39;
                    }
                    else {
                        position = position + dice;
                    }
                }
                else {
                    if (dice >= 6) {
                        if (dice >= 8) {
                            std::cout << "\nYou are at another fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                            cin >> leftRight;
                            if (leftRight == 0) {
                                position = position + dice - 94;
                            }
                            else {
                                position = position + dice - 37;
                            }
                        }
                        else {
                            position = position + dice - 94;
                        }
                    }
                    else {
                        position = position + dice + 4;
                    }
                }

            }
        }

        //  This is if player is in position
        else if (position == 93) {
            money = money - 1;
            std::cout << "It's a clone of you! They're naked and you pity them. You give them one coin.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 2) {
                std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    if (dice >= 6) {
                        position = position + dice - 39;
                    }
                    else {
                        position = position + dice;
                    }
                }
                else {
                    if (dice >= 5) {
                        if (dice >= 7) {
                            std::cout << "\nYou are at another fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                            cin >> leftRight;
                            if (leftRight == 0) {
                                position = position + dice - 94;
                            }
                            else {
                                position = position + dice - 37;
                            }
                        }
                        else {
                            position = position + dice - 94;
                        }
                    }
                    else {
                        position = position + dice + 4;
                    }
                }

            }
        }

        //  This is if player is in position
        else if (position == 94) {
            bless2, bless1 = blessRoll(role, bless1, bless2);
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 1) {
                std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    if (dice >= 5) {
                        position = position + dice - 39;
                    }
                    else {
                        position = position + dice;
                    }
                }
                else {
                    if (dice >= 4) {
                        if (dice >= 6) {
                            std::cout << "\nYou are at another fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                            cin >> leftRight;
                            if (leftRight == 0) {
                                position = position + dice - 94;
                            }
                            else {
                                position = position + dice - 37;
                            }
                        }
                        else {
                            position = position + dice - 94;
                        }
                    }
                    else {
                        position = position + dice + 4;
                    }
                }

            }
        }

        //  This is if player is in position
        else if (position == 95) {
            money = money - 1;
            std::cout << "Some paparazzi catches you with your mistress! This could jeopardize your political career! You hurriedly pay him 1 coin to keep quiet.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice == 8) {
                position = 63;
            }
            if (dice >= 4) {
                position = position + dice - 39;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 96) {
            money = money + 2;
            std::cout << "An innocent passerby! You mug them and take 2 coins off them.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 7) {
                position = 63;
            }
            if (dice >= 3) {
                position = position + dice - 39;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 97) {
            crook = true;
            std::cout << "You've acquired the LEGENDARY CROOK! Not a criminal, a staff with a hook at the end!";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 6) {
                position = 63;
            }
            if (dice >= 2) {
                position = position + dice - 39;
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 98) {
            std::cout << "This is a neutral square.";
            std::cout << "\nPress any button and enter to roll the dice:";

            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 6) {
                position = 63;
            }
            position = position + dice - 39;
        }

        //  This is if player is in position
        else if (position == 99) {
            money = money + 3;
            std::cout << "You stumble upon an Elvis impersonator! You do your best Elvis impersonation at him! It is perfect! He is humiliated and gives you his wallet. +3 coins.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 3) {
                if (dice >= 5) {
                    std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = position + dice - 94;
                    }
                    else {
                        position = position + dice - 37;
                    }
                }
                else {
                    position = position + dice - 94;
                }
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 100) {
            money = money + 2;
            std::cout << "Someone is jaywalking! You pretend you are a cop and ask for a bribe. He gives you 2 coins.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 2) {
                if (dice >= 4) {
                    std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = position + dice - 94;
                    }
                    else {
                        position = position + dice - 37;
                    }
                }
                else {
                    position = position + dice - 94;
                }
            }
            else {
                position = position + dice;
            }
        }

        //  This is if player is in position
        else if (position == 101) {
            money = money - 1;
            std::cout << "Someone is jaywalking! You pretend you are a cop and ask for a bribe. He is a cop, you are fined 1 coin for impersonating a police officer.";
            std::cout << "\nPress any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 3) {
                std::cout << "\nYou are at a fork in the path, if you would like to head left enter 0 to head right enter 1: ";
                cin >> leftRight;
                if (leftRight == 0) {
                    position = position + dice - 94;
                }
                else {
                    position = position + dice - 37;
                }
            }
            else {
                position = position + dice - 94;
            }
        }
        else if (position == 102) {
            health -= 3;
            std::cout << R"(
         ("`-''-/").___..--''"`-._ 
          `6_ 6  )   `-.  (     ).`-.__.`) 
          (_Y_.)'  ._   )  `._ `. ``-..-' 
            _..`--'_..-_/  /--'_.'
           ((((.-''  ((((.'  (((.-' 
         )" << endl;
            std::cout << "A cat jumped out of a bush and attacked you dealing 3 damage." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            if (dice >= 2) {
                position = 104;
            }
            else {
                position = 103;

            }
        }

        //STILL NEED 102 & 103
        else if (position == 103) {
            health -= 1;
            std::cout << R"( 
      ,_      _,
        '.__.'
   '-,   (__)   ,-'
     '._ .::. _.'
       _'(^^)'_
    _,` `>\/<` `,_
   `  ,-` )( `-,  `
      |  /==\  |
    ,-'  |=-|  '-,
         )-=(
         \__/ )" << endl;
            std::cout << "Some fire ants bit your foot and you lost 1Hp." << endl;
            std::cout << "Press any button and enter to roll the dice:";
            cin >> interact;
            dice = diceRoll(role);
            position = 104;
        }


        //     This is if the player is in position 104
        else if (position == 104) {
            if (role == 5) {
                sandyShopMerc(money, shovel, armor, jewelry, maxhealth);
            }
            else {
                sandyShop(money, shovel, armor, jewelry, maxhealth);
            }
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Press any button and enter to roll the dice:";

                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 3) {
                    position = position + dice;
                }
                else if (dice <= 7) {
                    position = position - 102 + dice;
                }
                else if (dice == 8) {
                    std::cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = 10;
                    }
                    else {
                        position = 67;
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
                else if (dice >= 4) {
                    position = 10 - dice;
                }
            }
        }

        //     This is if the player is in position 105
        else if (position == 105) {
            bless2, bless1 = blessRoll(role, bless1, bless2);
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Press any button and enter to roll the dice:";

                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 2) {
                    position = position + dice;
                }
                else if (dice <= 6) {
                    position = position - 102 + dice;
                }
                else if (dice <= 8) {
                    std::cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = position - 102 + dice;
                    }
                    else {
                        position = position - 45 + dice;
                    }
                }
            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 2) {
                    position = position + dice;
                }
                else if (dice >= 4) {
                    position = 9 - dice;
                }
            }
        }

        //     This is if the player is in position 106
        else if (position == 106) {
            std::cout << "Oh, no! You got your leg stuck in quiksand and it took you one turn to get out!";
            turns = turns = 1;
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Press any button and enter to roll the dice:";

                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 1) {
                    position = position + dice;
                }
                else if (dice <= 5) {
                    position = position - 102 + dice;
                }
                else if (dice <= 8) {
                    std::cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = position - 102 + dice;
                    }
                    else {
                        position = position - 45 + dice;
                    }
                }
            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 1) {
                    position = position + dice;
                }
                else if (dice >= 7) {
                    position = 8 - dice;
                }
                else {
                    std::cout << "You must land directly on top of the throne. You are one space away. /n Please wait to roll again";
                }
            }
        }

        //     This is if the player is in position 107
        else if (position == 107) {
            health = health - 2;
            std::cout << "You reach down to scratch your arm and you realize it was a snake the whole time! It bites you and you take 2 damage";
            if (crook == 0 || flail == 0 || robe == 0 || hat == 0 || belt == 0 || jewelry == 0) { // if you are just starting
                std::cout << "Press any button and enter to roll the dice:";

                cin >> interact;
                dice = diceRoll(role);
                if (dice <= 5) {
                    position = position - 102 + dice;
                }
                else if (dice <= 8) {
                    std::cout << "You are at a fork in the path if you would like to head left enter 0 to head right enter 1: ";
                    cin >> leftRight;
                    if (leftRight == 0) {
                        position = position - 102 + dice;
                    }
                    else {
                        position = position - 45 + dice;
                    }
                }
            }
            if (crook == 1 && flail == 1 && robe == 1 && hat == 1 && belt == 1 && jewelry == 1) { //for if you are ending the game
                std::cout << "Press any button and enter to roll the dice:";
                cin >> interact;
                dice = diceRoll(role);
                if (dice >= 6) {
                    position = 7 - dice;
                }
                else {
                    std::cout << "You must land directly on top of the throne. You are one space away. /n Please wait to roll again";
                }
            }
        }

    }

}