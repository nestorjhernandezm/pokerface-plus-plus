#include <card.hpp>

#include <gtest/gtest.h>

TEST(CardTest, CheckCardPropertyContainers)
{
    EXPECT_EQ(all_ranks.size(), 13);
    EXPECT_EQ(all_suits.size(), 4);
}

TEST(CardTest, CreateCard)
{
    Card card(Rank::Ace, Suit::Spades);

    EXPECT_EQ(Rank::Ace, card.rank());
    EXPECT_EQ(Suit::Spades, card.suit());
}
