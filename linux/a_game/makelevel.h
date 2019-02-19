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

room makelevel()
{
	room current;
	string answer = "";

	current.roomnum = getroomnum();

	cout << "Please enter a description for the room and then press enter:\n\n";

	getline(std::cin, answer);
	current.description = answer;

	return current;
}

