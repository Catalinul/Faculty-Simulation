#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED

#include<string>

class Room
{
public:
	Room(std::string);
	std::string getName();
private:
	std::string mName;
};


#endif // ROOM_H_INCLUDED
