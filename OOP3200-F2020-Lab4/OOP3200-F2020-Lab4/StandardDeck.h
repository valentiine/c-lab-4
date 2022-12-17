/** OOP3200. F2020. StandardDeck.h
 *
 *  In this lab you will create your own collection class called StandardDeck, which
 *	will 'contain' objects of the PlayingCard class.  The intent of the class is to
 *	represent a standard deck of 52 cards that might be useful in a card game type
 *	application.  
 *
 *	@author		Thom MacDonald
 *	@author		Tom Tsiliopoulos
 *	@version	2020.10
 *	@since		Jul 2018
 *	@see		Bronson, G. (2012). A First Book of C++ (4th ed.). Boston, MA: Course Technology.
*/

#pragma once
#ifndef __STANDARD_DECK__
#define __STANDARD_DECK__

#include "PlayingCard.h"
#include <iostream>

class StandardDeck
{
public:
    // Default Constructor
    StandardDeck();

    // Destructor
    ~StandardDeck();

    // Copy Constructor
    StandardDeck(const StandardDeck& other);

    // Overloaded Assignment Operator
    StandardDeck& operator=(const StandardDeck& other);

    // Initialize Method
    virtual void Initialize();

    // CardsRemaining Method
    int CardsRemaining() const;

    // DrawNextCard Method
    PlayingCard DrawNextCard();

    // DrawRandomCard Method
    PlayingCard DrawRandomCard();

    // Shuffle Method
    void Shuffle();

private:
    PlayingCard* cards;  // pointer to an array of PlayingCard objects
    int size;  // number of cards in the deck
};

#endif /* defined (__STANDARD_DECK__) */

