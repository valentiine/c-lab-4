#include "StandardDeck.h"
#include <stdexcept>
#include <random>
#include <iostream>

// CardsRemaining Method
int StandardDeck::CardsRemaining() const
{
    return size;
}

// DrawNextCard Method
PlayingCard StandardDeck::DrawNextCard()
{
    if (size == 0)
    {
        throw std::out_of_range("Deck is empty");
    }

    // Save the card at position [0]
    PlayingCard card = cards[0];

    // Shift the remaining cards to the left
    for (int i = 0; i < size - 1; i++)
    {
        cards[i] = cards[i + 1];
    }

    // Decrease the size of the deck
    size--;

    // Return the saved card
    return card;
}

PlayingCard StandardDeck::DrawRandomCard()
{
}

void StandardDeck::Shuffle()
{
}
