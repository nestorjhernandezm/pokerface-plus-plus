#include <deck.hpp>

#include <algorithm>
#include <gtest/gtest.h>

TEST(DeckTest, CreateDeck)
{
    Deck deck;

    bool good_deck = true;

    for (int i = 0; i < deck.size(); ++i)
    {
        Card c = deck.draw();

        auto rank_iter = std::find(all_ranks.begin(), all_ranks.end(),
            c.rank());

        auto suit_iter = std::find(all_suits.begin(), all_suits.end(),
            c.suit());

        if (rank_iter == all_ranks.end() || suit_iter == all_suits.end())
        {
            good_deck = false;
            break;
        }
    }

    EXPECT_EQ(good_deck, true);
}


TEST(DeckTest, DeckSize)
{
    Deck deck;

    EXPECT_EQ(deck.size(), 52);
}
