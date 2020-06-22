#include <iostream>
#include <string>
#include <string.h>
using namespace std;


//get command from player on console
class InputCmd {
public:
	string Entry;
	string Cmd;
	string Attribute;
	void ReadEntry() {
		getline(cin, Entry);
		//cout << Entry << endl;
				
	};
	void GetValues() { cout << "getvalues" << endl; };
	

};

//Room values
class Room {
public:
	int i;
	int j;
	string Description;

};

//control for ubication on map
class ubication{
public:
	Room Room;
	int dir;
	string Ubication;

	void IniVal() {
		Room.i = 0;
		Room.j = 0;
		dir = 0;
	};

	void Move(int dir){
						
		if (dir==1 && Room.i >= 0 && Room.i<=1) {
			cout << "You Move to right position" << endl;
			Room.i++;
		}
		else if (dir == 2 && Room.i >= 1 && Room.i <= 2) {
			cout << "You Move to left position" << endl;
			Room.i--;
		}
		else if (dir == 3 && Room.j >= 0 && Room.j <= 1) {
			cout << "You Move to up position" << endl;
			Room.j++;
			
		}
		else if (dir == 4 && Room.j >= 1 && Room.j <= 2) {
			cout << "You Move to down position" << endl;
			Room.j--;
		}
		else cout << "you can't move on that direction" << endl;
		//cout << Room.i << Room.j << endl;
		
	};
	void DispUbication() {

		if (Room.i == 0 && Room.j == 0) {
			Ubication = "Room of fungi";
		};
		if (Room.i == 1 && Room.j == 0) {
			Ubication = "Room of water";
		};
		if (Room.i == 2 && Room.j == 0) {
			Ubication = "Room of despair";
		};
		if (Room.i == 0 && Room.j == 1) {
			Ubication = "Room of glory";
		};
		if (Room.i == 1 && Room.j == 1) {
			Ubication = "Room of peace";
		};
		if (Room.i == 2 && Room.j == 1) {
			Ubication = "Room of fear";
		};
		if (Room.i == 0 && Room.j == 3) {
			Ubication = "Room of knowledge";
		};
		if (Room.i == 1 && Room.j == 3) {
			Ubication = "Room of spacy";
		};
		if (Room.i == 2 && Room.j == 3) {
			Ubication = "Room of final boss";
		};

		cout << "you are in room :" <<Ubication << endl;
	};
	
};


class Player : public ubication, public InputCmd{
};



int main()
{
	std::cout << "This is Eymard's World, right now you are in Yuggoth!\n";
	Player Plyr;//define player
	Plyr.IniVal();//initialize values for execution
	//read comand from console
	while (1) {
		Plyr.ReadEntry();
		if (Plyr.Entry.compare("move right") == 0) { 
			Plyr.Move(1);//move to righth
		}
		else if (Plyr.Entry.compare("move left") == 0) {
			Plyr.Move(2);//move to left
		}
		else if (Plyr.Entry.compare("move up") == 0) {
			Plyr.Move(3);//move to up
		}
		else if (Plyr.Entry.compare("move down") == 0) {
			Plyr.Move(4);//move to down
		}
		else {};
		Plyr.DispUbication();
	};
};
