#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Klient.h"
class Bank
{
private:
	string name;
	double totalBalance;
	vector<Klient> klients;

public:
	Bank(string name, double totalBalance, vector<Klient> klients);

	string addKlient(Klient klient);

	string removeKlient(Klient klient);
	string giveDeposit(int amount, Klient klient);
	string payOffScore(Klient klient);
	void printAllKlients();

	string getName();
	double getTotalBalance();
};
