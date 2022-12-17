#include <ctime>
#include <iostream>
#include "StandardDeck.h"

// Name : Valentine Sah
// ID : 100757000
// File : Main.cpp
// Date : Oct 19th, 2022

void Pause() 
{
	std::cout << "\nPress \'ENTER\' to continue..." << std::endl;
	std::cin.ignore();	fflush(stdin);
}

int main()
{
	/*	Your main() function should demonstrate each of the features of the StandardDeck class*/
	srand(time(nullptr)); // seed the random number generator

	// create a deck
	StandardDeck deck;
	
	// Show the deck object as initialized
	deck.Initialize();
	
	// Draw the next card and show it
	PlayingCard topCard = deck.DrawNextCard();

	// Draw a random card and show it
	PlayingCard randomCard = deck.DrawRandomCard();
	
	// Show the deck with the remaining cards
	std::cout << "Cards remaining in the deck: " << deck.CardsRemaining() << std::endl;

	// Shuffle the deck and show the result
	deck.Shuffle();
	std::cout << "Cards remaining in the deck: " << deck.CardsRemaining() << std::endl;

	// Reset the deck and show the result
	deck.Initialize();
	std::cout << "Number of cards after shuffling: " << deck.CardsRemaining() << std::endl;

	return 0;
}


