#include "deck.hpp"

#include <algorithm>
#include <ctime>
#include <cstdlib>

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

void Deck::shuffle()
{
    std::srand(unsigned(std::time(0)));  // Seed for the random generator
    std::random_shuffle(m_cards.begin(), m_cards.end());
}

Card Deck::draw()
{
    Card top = m_cards.front();
    m_cards.erase(m_cards.begin());

    return top;
}

int Deck::size()
{
    return m_cards.size();
}