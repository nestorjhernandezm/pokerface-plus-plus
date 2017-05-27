#pragma once

enum class Rank {Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine,
    Ten, Jack, Queen, King};
enum class Suit {Clubs, Hearts, Diamonds, Spades};

class Card
{
    public:
        Card();
        Card(Rank, Suit);
        Rank rank() const;
        Suit suit() const;

    private:
        Rank m_rank;
        Suit m_suit;
};
