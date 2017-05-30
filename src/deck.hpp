#pragma once

#include <card.hpp>

#include <vector>

class Deck
{
    public:
        Deck();
        void shuffle();
        Card draw();
        int size();

    private:
        std::vector<Card> m_cards;
};
