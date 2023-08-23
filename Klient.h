#pragma once
#include <iostream>
using namespace std;

class Klient
{
private:
	string name;
	double balance;
	double score;

public:
	Klient(string name, double balance, double score);

	void deposit(int amount);
	void withDraw();


	string getName();
	double getBalance();
	double getScore();

};