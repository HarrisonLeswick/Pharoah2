#include <iostream>
using namespace std;


void oasisShop(int);
void sandyShop(int);

int main()
{
	int cash = 100;
	oasisShop(cash);

}

void oasisShop(int cash)
{
	char userAns;
	char userNumber;
	int pickPocket = 5;
	int healthPotion = 10;
	int sword = 20;
	bool userLoop = true;

	cout << "                              ^             ^               ^!^" << endl;
	cout << "                                 ^ _______________________________" << endl;
	cout << "                                  [=U=U=U=U=U=U=U=U=U=U=U=U=U=U=U=]" << endl;
	cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
	cout << "                                  |        +-+-+-+-+-+-+-         |" << endl;
	cout << "                                  |       |The Oasis Shop|        |" << endl;
	cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
	cout << "                                  |  _________  __ __  _________  |" << endl; 
	cout << "                                _ | |___   _  ||[]|[]||  _      | |" << endl;
	cout << "                               (!)||OPEN|_(!)_|| ,| ,||_(!)_____| |(!)" << endl;
	cout << "                              .T~T|:.....:T~T.:|__|__|:.T~T.:....:|T~T." << endl;
	cout << "                              ||_||||||||||_|||||||||||||_||||||||||_||" << endl;
	cout << "                              ~\=/~~~~~~~~\=/~~~~~~~~~~~\=/~~~~~~~~\=/~" << endl;
	cout << "                                | -------- | ----------- | -------- |" << endl;
	cout << "                              ~ |~^ ^~~^ ~~| ~^  ~~ ^~^~ |~ ^~^ ~~^ |^~" << endl;
	cout << endl;


	cout << "Hello, wellcome to the oasis shop." << endl;
	cout << "What would you like to purchase?" << endl;
	cout << endl;
	cout << "Your current gold is = " << cash << endl;

	cout << "1. Pick Pocket Glocket -- 5 Gold." << endl;
	cout << "~ Gives you the ability to steal gold/items form unconcious players ~" << endl;
	cout << endl;

	cout << "2. Health Potion -- 10 Gold." << endl;
	cout << "~ Instantly recovers your HP back to full ~ (Can store up to 3)" << endl;
	cout << endl;

	cout << "3. Iron Sword -- 20 Gold." << endl;
	cout << "~ When equipped will increase the player's damage by 3 points" << endl;

	cout << "4. Exit." << endl;

	do {
		cin >> userNumber;



		switch (userNumber)
		{
		case '1':
			if (cash >= pickPocket)
			{
				cash -= pickPocket;
				cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl; 
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
			else if (cash < pickPocket)
			{
				cout << "Sorry you dont have enough gold to purchase this item. " << endl;
			}
			break;
		case '2':
			if (cash >= healthPotion)
			{
				cash -= healthPotion;
				cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
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
			else if (cash < healthPotion)
			{
				cout << "Sorry you dont have enough gold to purchase this item. " << endl;
			}
			break;
		case '3':
			if (cash >= sword)
			{
				cash -= sword;
				cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
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
			else if (cash < sword)
			{
				cout << "Sorry you dont have enough gold to purchase this item. " << endl;
			}
			break;

		case '4':
			userLoop = false;
			break;
			
		}

	} while (userLoop == true);

	cout << endl;
	cout << "Clerk: Thank you for stopping by, have a nice day :) ";
}

void sandyShop(int cash)
{
	char userAns;
	char userNumber;
	int armour = 20;
	int jewelry = 50;
	int shovel = 8;
	bool userLoop = true;

	cout << "                              ^             ^               ^!^" << endl;
	cout << "                                 ^ _______________________________" << endl;
	cout << "                                  [=U=U=U=U=U=U=U=U=U=U=U=U=U=U=U=]" << endl;
	cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
	cout << "                                  |        +-+-+-+-+-+-+-         |" << endl;
	cout << "                                  |        |Sandy's Shop|         |" << endl;
	cout << "                                  |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|" << endl;
	cout << "                                  |  _________  __ __  _________  |" << endl;
	cout << "                                _ | |___   _  ||[]|[]||  _      | |" << endl;
	cout << "                               (!)||OPEN|_(!)_|| ,| ,||_(!)_____| |(!)" << endl;
	cout << "                              .T~T|:.....:T~T.:|__|__|:.T~T.:....:|T~T." << endl;
	cout << "                              ||_||||||||||_|||||||||||||_||||||||||_||" << endl;
	cout << "                              ~\=/~~~~~~~~\=/~~~~~~~~~~~\=/~~~~~~~~\=/~" << endl;
	cout << "                                | -------- | ----------- | -------- |" << endl;
	cout << "                              ~ |~^ ^~~^ ~~| ~^  ~~ ^~^~ |~ ^~^ ~~^ |^~" << endl;
	cout << endl;


	cout << "Hello, wellcome to the oasis shop." << endl;
	cout << "What would you like to purchase?" << endl;
	cout << endl;
	cout << "Your current gold is = " << cash << endl;

	cout << "1. Pick Pocket Glocket -- 5 Gold." << endl;
	cout << "~ Gives you the ability to steal gold/items form unconcious players ~" << endl;
	cout << endl;

	cout << "2. Health Potion -- 10 Gold." << endl;
	cout << "~ Instantly recovers your HP back to full ~ (Can store up to 3)" << endl;
	cout << endl;

	cout << "3. Iron Sword -- 20 Gold." << endl;
	cout << "~ When equipped will increase the player's damage by 3 points" << endl;

	cout << "4. Exit." << endl;

	do {
		cin >> userNumber;



		switch (userNumber)
		{
		case '1':
			if (cash >= armour)
			{
				cash -= armour;
				cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
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
			else if (cash < armour)
			{
				cout << "Sorry you dont have enough gold to purchase this item. " << endl;
			}
			break;
		case '2':
			if (cash >= jewelry)
			{
				cash -= jewelry;
				cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
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
			else if (cash < jewelry)
			{
				cout << "Sorry you dont have enough gold to purchase this item. " << endl;
			}
			break;
		case '3':
			if (cash >= shovel)
			{
				cash -= shovel;
				cout << "Thank you for your purchase! You currently have " << cash << " gold left. \n Would you like anything else?" << endl;
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
			else if (cash < shovel)
			{
				cout << "Sorry you dont have enough gold to purchase this item. " << endl;
			}
			break;

		case '4':
			userLoop = false;
			break;
		}

	} while (userLoop == true);

	cout << endl;
	cout << "Clerk: Thank you for stopping by, have a nice day :) ";



}


