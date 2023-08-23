#include "Bank.h"


// Initialization ñonstructor 
Bank::Bank(string name, double totalBalance, vector<Klient> klients)
{
	this->name = name;
	this->totalBalance = totalBalance;
	klients = vector<Klient>();
}


// Add Klient to the array
string Bank::addKlient(Klient klient)
{
	klients.push_back(klient);
	return  "\n\tThe Klient added successfully!\n\n\n";
}


// Remove Klient from the array
string Bank::removeKlient(Klient klient)
{
	for (int i = 0; i < klients.size(); i++)
	{
		if (klient.getName() == klients[i].getName()
			&& klient.getScore() == klients[i].getScore()
			&& klient.getBalance() == klients[i].getBalance())
		{
			totalBalance -= klients[i].getBalance();
			klients.erase(klients.begin() + i);
			return "\tKlient deleted successfully from the Bank base!\n\n\n";
		}
	}
	return "\tThere is no Klient with this parametrs!\n\n\n";
}


// Give deposit some Klient
string Bank::giveDeposit(int deposit, Klient klient)
{
	if (deposit < getTotalBalance())
	{
		for (int i = 0; i < klients.size(); i++)
		{
			if (klient.getName() == klients[i].getName()
				&& klient.getScore() == klients[i].getScore()
				&& klient.getBalance() == klients[i].getBalance())
			{
				totalBalance -= deposit;
				klients[i].deposit(deposit);
				return "\tThe deposit has been successfully issued to the Klient\n\n";
			}
		}
		return "\tThere is no Klient with this parametrs!\n\n\n";
	}
	return "\tThere are no enough money in the Bank!!!\n\n\n";
}


// Pay off the Klient's score
string Bank::payOffScore(Klient klient)
{
	for (int i = 0; i < klients.size(); i++)
	{
		if (klient.getName() == klients[i].getName()
			&& klient.getScore() == klients[i].getScore()
			&& klient.getBalance() == klients[i].getBalance())
		{
			if (klient.getBalance() >= klient.getScore())
			{
				totalBalance += klient.getScore();
				klients[i].withDraw();
				return "\tThe operation has been successfully done\n\n\n";
			}
			return "\tThe Klient hasn't enough money to paid off its score!\n\n\n";
		}
	}
	return "\tThere is no Klient with this parametrs!\n\n\n";
}


// Print the Name and Balance of the Bank and all Klients with their Parametrs
void Bank::printAllKlients()
{
	cout << "\t" << getName() << " Bank:\n";
	cout << "\tTotal Balance is: " << getTotalBalance() << "\n\n";

	for (int i = 0; i < klients.size(); i++)
	{
		cout << "\tKlient " << i + 1 << ": \n";
		cout << "\tName: " << klients[i].getName() << "\n";
		cout << "\tBalance: " << klients[i].getBalance() << "\n";
		cout << "\tScore: " << klients[i].getScore() << "\n\n\n";
	}
}



// Return name
string Bank::getName()
{
	return name;
}

// Return total Balance of the Bank
double Bank::getTotalBalance()
{
	return totalBalance;
}