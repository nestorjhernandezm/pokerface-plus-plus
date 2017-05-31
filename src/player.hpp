#pragma once

#include <deck.hpp>
#include <vector>

class Player
{
    public:
        Player();
        void deal_card(Deck&, Player&);
        void get_card(const Card&);
        void checks();
        void calls();
        void raises();
        void bets();

    private:
        std::vector<Card> m_cards;
};
