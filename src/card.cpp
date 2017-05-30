#include "card.hpp"

Card::Card()
{
}

Card::Card(Rank rank, Suit suit) : m_rank(rank), m_suit(suit)
{
}

Rank Card::rank() const
{
    return m_rank;
}

Suit Card::suit() const
{
    return m_suit;
}

bool Card::operator==(const Card& c)
{
    return m_rank == c.rank() && m_suit == c.suit();
}

bool Card::operator!=(const Card& c)
{
    return !Card::operator==(c);
}
