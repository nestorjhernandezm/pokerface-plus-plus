#include <iostream>
#include "deck.hpp"

Deck::Deck()
{
    for(int s = (int)Suit::Clubs; s != (int)Suit::Spades; ++s)
    {
        Card card(Rank::Ace, (Suit)s);
        std::cout << "Rank: " << static_cast<int>(card.rank()) << std::endl;
        std::cout << "Suit: " << static_cast<int>(card.suit()) << std::endl;
    }
}