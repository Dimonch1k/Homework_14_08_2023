#include <iostream>
#include <vector>
using namespace std;

#include "Bank.h"
#include "Klient.h"


int main()
{
	vector<Klient> Klients;
	string name;
	double balance = 0.0;
	double score = 0.0;

	// Give the Bank name, total balance and array without klients
	Bank bank("National", 2000, Klients);


	// Add first klient to the array
	cout << "\tEnter the parametrs for 1 Klient:\n";
	cout << "\tEnter the Klient's name: "; cin >> name;
	cout << "\tEnter the Klient's balance: "; cin >> balance;
	cout << "\tEnter the Klient's score: "; cin >> score;

	Klient klient1(name, balance, score);
	cout << bank.addKlient(klient1);


	// Add second klient to the array
	cout << "\tEnter the parametrs for 2 Klient:\n";
	cout << "\tEnter the Klient's name: "; cin >> name;
	cout << "\tEnter the Klient's balance: "; cin >> balance;
	cout << "\tEnter the Klient's score: "; cin >> score;

	Klient klient2(name, balance, score);
	cout << bank.addKlient(klient2);


	// Give the deposit for some klient
	int amount = 0;
	cout << "\tEnter the parametrs about Klient to give deposit:\n";
	cout << "\tEnter the Klient's name: "; cin >> name;
	cout << "\tEnter the Klient's balance: "; cin >> balance;
	cout << "\tEnter the Klient's score: "; cin >> score;
	cout << "\n\tEnter the amount of deposit: "; cin >> amount;

	Klient someKlient(name, balance, score);
	cout << bank.giveDeposit(amount, someKlient);



	// Pay off some klient's score
	cout << "\tEnter the parametrs about Klient to pay off the score:\n";
	cout << "\tEnter the Klient's name: "; cin >> name;
	cout << "\tEnter the Klient's balance: "; cin >> balance;
	cout << "\tEnter the Klient's score: "; cin >> score;

	Klient payOffScore(name, balance, score);
	cout << bank.payOffScore(payOffScore);



	// Remove some Klient from the Bank
	cout << "\tEnter the parametrs about Klient to remove his from the Bank:\n";
	cout << "\tEnter the Klient's name: "; cin >> name;
	cout << "\tEnter the Klient's balance: "; cin >> balance;
	cout << "\tEnter the Klient's score: "; cin >> score;

	Klient removeKlient(name, balance, score);
	cout << bank.removeKlient(removeKlient);

	// Print the total balance in the Bank and 
	bank.printAllKlients();

}