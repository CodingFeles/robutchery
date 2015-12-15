#pragma once

enum Hand
{
	None = 0,
	Rock = 1,
	Paper = 2,
	Scissors = 3
};

struct RPSState : State
{
public:
	size_t Winner;
	Hand FirstHand;
	Hand SecondHand;
};

struct RPSAction : Action
{
	Hand PlayerHand;
};


class RPSGame : Game
{
	public:
		void Start(std::vector<Player>& players) override
		{
			RPSState state;
			state.Winner = 0;
			state.FirstHand = None;
			state.SecondHand = None;

			state.FirstHand = static_cast<RPSAction*>(&players[0].MakeAction(state))->PlayerHand;
			state.SecondHand = static_cast<RPSAction*>(&players[1].MakeAction(state))->PlayerHand;
			state.Winner = 1 ? (state.FirstHand < state.SecondHand || state.FirstHand == Rock && state.SecondHand == Scissors) : 2;
		}
};