#pragma once
#include <string>
#include <iostream>

using FString = std::string;
using int32 = int;


struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};


class FBullCowGame {
public:
	FBullCowGame(); // Constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	int32 GetHiddenWordLength() const;

	bool IsGameWon() const;
	bool CheckGuessValidity(FString) const; //TODO make a more rich return value

	void Reset(); //TODO make a more rich return value
	FBullCowCount SubmitGuess(FString);

private:
	//see constructor for initialization. 
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};


