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

TEST(CardTest, CheckCardOperators)
{
    Card ace_of_diamonds(Rank::Ace, Suit::Diamonds);
    Card ace_of_clubs(Rank::Ace, Suit::Clubs);
    Card king_of_diamonds(Rank::King, Suit::Diamonds);

    EXPECT_EQ(ace_of_diamonds == ace_of_diamonds, true);
    EXPECT_EQ(ace_of_diamonds != ace_of_clubs, true);
    EXPECT_EQ(ace_of_diamonds != king_of_diamonds, true);
}
