#pragma once
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void quit()
{
	//exit A Game
	system("cls");
	cout << "Goodbye!\n";
	this_thread::sleep_for(chrono::seconds(1));
}