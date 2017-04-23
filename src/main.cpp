#include <iostream>
#include <string>
#include "card.hpp"

using namespace std;

int main()
{
    cout << "Card to be created" << endl;
    Card a_card(Rank::Seven, Suit::Diamonds);
    cout << "Card created" << endl;

    return 0;
}
