#pragma once

class Game
{
public:
	virtual ~Game() {};
private:

};

class Player
{
public:
	virtual ~Player() {};
	virtual Action MakeAction(State state) = 0;
};

class Action
{
public: 
	virtual ~Action() {};
};

class State
{
public:
	virtual ~State() {};
};

