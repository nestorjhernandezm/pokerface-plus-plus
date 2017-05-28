#include <iostream>
#include "deck.hpp"

Deck::Deck()
{
    for(int suit = (int) Suit::Clubs; suit <= (int) Suit::Spades; ++suit)
    {
        for(int rank = (int) Rank::Ace; rank <= (int) Rank::King; ++rank)
        {
            Card c((Rank) rank, (Suit) suit);
            std::cout << "Rank: " << static_cast<int>(c.rank()) << std::endl;
            std::cout << "Suit: " << static_cast<int>(c.suit()) << std::endl;
        }

        std::cout << std::endl;
    }
}