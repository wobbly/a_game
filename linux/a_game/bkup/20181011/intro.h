#include <string>
#include <sstream>
#include "quit.h"
#include <stdlib.h>
#include <thread>
#include <chrono>

using namespace std;

void intro(){

	system ("clear");
	cout << "Welcome to A Game!\n";
	cout << "Would you like to play A Game?  ";

	string answer = "";

	getline (cin, answer);

	if (answer != "no" && answer != "n"){
		system ("clear");
		cout << "That doesn't seem like a no!\n";
		std::this_thread::sleep_for (std::chrono::seconds(1));
		system ("clear");
		cout << "Loading the first room. \n";
		std::this_thread::sleep_for (std::chrono::seconds(1));
		system ("clear");
		cout << "Loading the first room. . \n";
		std::this_thread::sleep_for (std::chrono::seconds(1));
		cout << "Loading the first room. . . \n";
		std::this_thread::sleep_for (std::chrono::seconds(1));
		cout << " \n";
		system ("clear");
	}
	else
		quit();
}
