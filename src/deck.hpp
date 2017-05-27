#pragma once

#include <vector>
#include <card.hpp>

class Deck
{
    public:
        Deck();
        void shuffle();
        Card draw();

    private:
        std::vector<Card> m_cards;
};
