#pragma once

#include <vector>

enum class Rank {Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
    Jack, Queen, King};

const std::vector<Rank> all_ranks = {Rank::Ace, Rank::Two, Rank::Three,
    Rank::Four, Rank::Five, Rank::Six, Rank::Seven, Rank::Eight, Rank::Nine,
    Rank::Ten, Rank::Jack, Rank::Queen, Rank::King}; // For iteration

enum class Suit {Clubs, Hearts, Diamonds, Spades};

const std::vector<Suit> all_suits = {Suit::Clubs, Suit::Hearts,
    Suit::Diamonds, Suit::Spades};  // For iteration

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
