#include <iostream>
#include "card.hpp"

using namespace std;

int main()
{
    Card a_card;

    a_card.m_number = Seven;
    a_card.m_suit = Diamonds;

    cout << "Card number: " << a_card.m_number << endl;
    cout << "Card suit: " << a_card.m_suit << endl;

    return 0;
}
