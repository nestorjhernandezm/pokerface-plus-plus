#include "card.hpp"

Card::Card()
{
}

Card::Card(Rank rank, Suit suit) : m_rank(rank), m_suit(suit)
{
}

Rank Card::get_rank()
{
    return m_rank;
}

Suit Card::get_suit()
{
    return m_suit;
}