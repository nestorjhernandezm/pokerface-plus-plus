#pragma once

enum class Rank : unsigned int {Ace = 1, Two, Three, Four, Five, Six, Seven,
    Eight, Nine, Ten, Jack, Queen, King};
enum class Suit {Clubs, Hearts, Diamonds, Spades};

class Card
{
    public:
        Card();
        Card(Rank, Suit);
        Rank get_rank() const;
        Suit get_suit() const;

    private:
        Rank m_rank;
        Suit m_suit;
};
