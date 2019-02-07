#pragma once
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <sstream>
#include "quit.h"
#include "makelevel.h"

using namespace std;

void intro()
{
	system("cls");
	cout << "Welcome to A Game!\n";
	cout << "Would you like to play A Game?\n";

	string answer = "";

	getline(cin, answer);

	if (answer != "no" && answer != "n")
	{
		system("cls");
		cout << "That doesn't seem like a no!";
		this_thread::sleep_for(chrono::seconds(1));
		system("cls");

		cout << "Loading the first room.";
		this_thread::sleep_for(chrono::seconds(1));
		system("cls");

		cout << "Loading the first room. .";
		this_thread::sleep_for(chrono::seconds(1));
		system("cls");

		cout << "Loading the first room. . .";
		this_thread::sleep_for(chrono::seconds(1));
		system("cls");
	}
	else
	{
		cout << "Would you like to make levels for A Game?\n";
		string answer = "";

		getline(cin, answer);

		if (answer != "no" && answer != "n")
		{
			system("cls");
			cout << "That doesn't seem like a no!";
			this_thread::sleep_for(chrono::seconds(1));
			system("cls");
		}
		else
			quit();
	}
}