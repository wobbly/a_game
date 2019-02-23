#include <iostream>
#include <string>

using namespace std;

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
	string answer = "";
	system("clear");
	short keystroke = 0;
	char *input;
	while (char input != "\n")
	{
		cout << "Please enter a description for the room and then press enter:\n\n";
		get (cin, input);
		answer[keystroke]=input;
		keystroke++;
	}
	getline(cin, answer);
	return answer;
}

void makelevel()
{
	room current;

	current.roomnum = getroomnum();
	current.description = getroomdesc();
}
