/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, getPiece)
{
	TicTacToeBoard obj;
	Piece placPiece(0,1);
	Piece myPiece = obj.getPiece(0,1);
	ASSERT_EQ(myPiece, 'X');
}

TEST(TicTacToeBoardTest, placePiece)
{
	TicTacToeBoard obj;
	Piece placePiece(3,0);
	Piece myPiece = obj.getPiece(3,0);
	ASSERT_EQ(myPiece, 'Invalid');
}

TEST(TicTacToeBoardTest, placePiece)
{
	TicTacToeBoard obj;
	Piece placePiece(0,3);
	Piece myPiece = obj.getPiece(3,0);
	ASSERT_EQ(myPiece, 'Invalid');
}

TEST(TicTacToeBoardTest, placePiece)
{
	
}

TEST(TicTacToeBoardTest, getWinner)
{
	
}

TEST(TicTacToeBoardTest, toggleTurn)
{
	
}

TEST(TicTacToeBoardTest, toggleTurn)
{
	
}