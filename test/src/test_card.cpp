#include "../../src/card.hpp"

#include <gtest/gtest.h>

TEST(CardTest, CreateCard)
{
    Card card(Rank::Ace, Suit::Spades);

    EXPECT_EQ(Rank::Ace, card.rank());
    EXPECT_EQ(Suit::Spades, card.suit());
}