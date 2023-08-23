#include "Klient.h"

// Initialization constructor
Klient::Klient(string name, double balance, double score)
{
	this->name = name;
	this->balance = balance;
	this->score = score;
}

// Add the deposit and to the Klient's balance and score
void Klient::deposit(int deposit)
{
	balance += deposit;
	score += deposit;
}

// Do the operation subtract between balance and score and cancels score
void Klient::withDraw()
{
	balance -= score;
	score = 0;
}

// Return Klient's name
string Klient::getName()
{
	return name;
}

// Return Klient's balance
double Klient::getBalance()
{
	return balance;
}

// Return Klient's score
double Klient::getScore()
{
	return score;
}