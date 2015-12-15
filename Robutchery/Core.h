#pragma once


struct Action
{
};

struct State
{
};

class Player
{
public:
	virtual ~Player() {};
	virtual Action MakeAction(State state) = 0;
};


class Game
{
public:
	virtual ~Game() {};
	virtual void Start(std::vector<Player>& players) = 0;
private:

};