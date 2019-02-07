#pragma once
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <sstream>
#include "quit.h"

using namespace std;

void intro()
{
	system("clear");
	cout << "Welcome to A Game!\n";
	cout << "Would you like to play A Game?\n";

	string answer = "";

	getline(cin, answer);

	if (answer != "no" && answer != "n")
	{
		system("clear");
		cout << "That doesn't seem like a no!\n";
		this_thread::sleep_for(chrono::seconds(2));
		system("clear");

		cout << "Loading the first room.\n";
		this_thread::sleep_for(chrono::seconds(1));
		system("clear");

		cout << "Loading the first room. .\n";
		this_thread::sleep_for(chrono::seconds(1));
		system("clear");

		cout << "Loading the first room. . .\n";
		this_thread::sleep_for(chrono::seconds(1));
		system("clear");
	}
	else
	{
		cout << "Would you like to make levels for A Game?\n";
		string answer = "";

		getline(cin, answer);

		if (answer != "no" && answer != "n")
		{
			system("clear");
			cout << "That doesn't seem like a no!\n";
			this_thread::sleep_for(chrono::seconds(1));
			system("clear");
		}
		else
			//temporary
			quit();
			//real function here will start the game
	}
	return;
}
