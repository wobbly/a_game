#include <iostream>
#include <string>
#include <curses.h>
#include <ncurses.h>

using namespace std;

string getparag(string prompt)
{
	string parag = "";
	short keystroke = 0;
	char input;
	while (input != '\n')
	{
		cout << prompt << "\n\n";
		cout << parag;
		fflush(stdin);
		input = getch();
		parag[keystroke] = input;
		system ("clear");
		keystroke++;
	}
	return parag;
}


class room
{
	public:

	string description;
	short roomnum;

	void savetofile ()
	{

	}
};

short getroomnum()
{
	short roomnum;
	string path = "./rooms/";

	cout << "What room number would you like to edit? ";

	string answer = "";
	getline(std::cin, answer);
	roomnum = stoi(answer);

//check for existing room

	return roomnum;
}

string getroomdesc()
{
	string answer = getparag("Please enter the description for the room: ");
	return answer;
}

void makelevel()
{
	room current;

	current.roomnum = getroomnum();
	current.description = getroomdesc();
}
