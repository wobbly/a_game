#include <iostream>
#include <cstdlib>
#include "intro.h"
#include "normal_case.h"

int main() 
{
	intro();
	
	//ending if it gets here without some other graceful exit
	system ("clear");
	std::cout << "By hook or by crook, A Game has ended!\n";
	std:this_thread::sleep_for (std::chrono::seconds(3));
	system ("clear");
	std::cout << "Goodbye!\n";
	return 0;
}

