#include <iostream>
#include <cstdlib>
#include <string>
#include "card.hpp"

using namespace std;

int main()
{
    Card a_card;

    a_card.m_rank = Rank::Seven;
    a_card.m_suit = Suit::Diamonds;

    cout << "Card number: " << static_cast<int>(a_card.m_rank) << endl;
    cout << "Card suit: " << static_cast<int>(a_card.m_suit) << endl;

    return 0;
}
