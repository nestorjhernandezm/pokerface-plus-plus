#ifndef CARD_H
#define CARD_H

enum class Rank : unsigned int {Ace = 1, Two, Three, Four, Five, Six, Seven,
    Eight, Nine, Ten, Jack, Queen, King};
enum class Suit {Clubs, Hearts, Diamonds, Spades};

class Card
{
    public:
        Card();
        Card(Rank, Suit);

    private:
        Rank m_rank;
        Suit m_suit;
};

#endif /* CARD_H */