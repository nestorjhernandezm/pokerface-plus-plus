enum class Rank : std::uint8_t {Ace = 1, Two, Three, Four, Five, Six, Seven,
    Eight, Nine, Ten, Jack, Queen, King};
enum class Suit : std::uint8_t {Clubs, Hearts, Diamonds, Spades};

struct Card
{
    Rank m_rank;
    Suit m_suit;
};
