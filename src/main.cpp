#include <deck.hpp>

#include <iostream>
#include <typeinfo>

int main()
{
    Deck test_deck;

    std::cout << "Deck size is: " << test_deck.size() << std::endl;

    Card c = test_deck.draw();

    std::cout << "Card rank: " << static_cast<int>(c.rank()) << std::endl;
    std::cout << "Card suit: " << static_cast<int>(c.suit()) << std::endl;
    std::cout << "Card rank typeid: " << typeid(c.suit()).name() << std::endl;

    std::cout << "New deck size is: " << test_deck.size() << std::endl;

    return 0;
}
