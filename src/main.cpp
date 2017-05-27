#include <iostream>
#include <string>

#include <card.hpp>

using namespace std;

int main()
{
    Card a_card(Rank::Seven, Suit::Diamonds);

    cout << "a_card rank: " << static_cast<int>(a_card.rank()) << endl;
    cout << "a_card suit: " << static_cast<int>(a_card.suit()) << endl;
    return 0;
}
