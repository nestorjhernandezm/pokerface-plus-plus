#include "deck.hpp"

Deck::Deck()
{
    for(Suit suit : all_suits)
    {
        for(Rank rank : all_ranks)
        {
            Card c(rank, suit);
            m_cards.push_back(c);
        }
    }
}
