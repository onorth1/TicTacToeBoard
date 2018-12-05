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
	obj.placPiece(0,1);
	Piece myPiece = obj.getPiece(0,1);
	ASSERT_EQ(myPiece, 'X');
}

TEST(TicTacToeBoardTest, getPiece)
{
	TicTacToeBoard obj;
	obj.toggleTurn();  //toggle to O
	obj.placPiece(0,1);
	Piece myPiece = obj.getPiece(0,1);
	ASSERT_EQ(myPiece, 'O');
}

TEST(TicTacToeBoardTest, getPiece)
{
	TicTacToeBoard obj;
	Piece myPiece = obj.getPiece(0,1);
	ASSERT_EQ(myPiece, 'Blank');
}

TEST(TicTacToeBoardTest, getPiece)
{
	TicTacToeBoard obj;
	obj.placPiece(0,1);
	Piece myPiece = obj.getPiece(0,3);
	ASSERT_EQ(myPiece, 'Invalid');
}

TEST(TicTacToeBoardTest, placePiece)
{
	TicTacToeBoard obj;
	ASSERT_EQ(obj.placePiece(3,0), 'Invalid');
}

TEST(TicTacToeBoardTest, placePiece)
{
	TicTacToeBoard obj;
	ASSERT_EQ(obj.placePiece(0,2), 'X');
	ASSERT_EQ(obj.turn, 'O');  //turn toggled
}

TEST(TicTacToeBoardTest, placePiece)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	ASSERT_EQ(obj.placePiece(0,2), 'O');
	ASSERT_EQ(obj.turn, 'X');  //turn toggled
}

TEST(TicTacToeBoardTest, placePiece)
{
	TicTacToeBoard obj;
	
}

//X wins Row 0
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.placPiece(0,0);	// X turn
	obj.placPiece(1,0);	//O turn
	obj.placPiece(0,1); // X turn
	obj.placePiec(1,1); // O turn
	obj.placePiece(1,2); // X turn, should win
	ASSERT_EQ(obj.getWinner(), 'X');
}

//X wins Row 1
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.placPiece(1,0);	// X turn
	obj.placPiece(0,0);	//O turn
	obj.placPiece(1,1); // X turn
	obj.placePiec(0,1); // O turn
	obj.placePiece(1,2); // X turn, should win
	ASSERT_EQ(obj.getWinner(), 'X');
}

//X wins Row 2
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.placPiece(2,0);	// X turn
	obj.placPiece(1,0);	//O turn
	obj.placPiece(2,1); // X turn
	obj.placePiec(1,1); // O turn
	obj.placePiece(2,2); // X turn, should win
	ASSERT_EQ(obj.getWinner(), 'X');
}

//X wins Column 0
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.placPiece(0,0);	// X turn
	obj.placPiece(0,1);	//O turn
	obj.placPiece(1,0); // X turn
	obj.placePiec(1,1); // O turn
	obj.placePiece(2,0); // X turn, should win
	ASSERT_EQ(obj.getWinner(), 'X');
}

//X wins Column 1
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.placPiece(0,1);	// X turn
	obj.placPiece(1,0);	//O turn
	obj.placPiece(1,1); // X turn
	obj.placePiec(1,2); // O turn
	obj.placePiece(2,1); // X turn, should win
	ASSERT_EQ(obj.getWinner(), 'X');
}

//X wins Column 2
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.placPiece(0,2);	// X turn
	obj.placPiece(1,0);	//O turn
	obj.placPiece(1,2); // X turn
	obj.placePiec(1,1); // O turn
	obj.placePiece(2,2); // X turn, should win
	ASSERT_EQ(obj.getWinner(), 'X');
}

//X wins diagonal left-right
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.placPiece(0,0);	// X turn
	obj.placPiece(1,0);	//O turn
	obj.placPiece(1,1); // X turn
	obj.placePiec(1,2); // O turn
	obj.placePiece(2,2); // X turn, should win
	ASSERT_EQ(obj.getWinner(), 'X');
}

//X wins diagonal right-left
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.placPiece(0,2);	// X turn
	obj.placPiece(1,0);	//O turn
	obj.placPiece(1,1); // X turn
	obj.placePiec(1,2); // O turn
	obj.placePiece(0,2); // X turn, should win
	ASSERT_EQ(obj.getWinner(), 'X');
}

//O wins Row 0
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.placPiece(0,0);	// O turn
	obj.placPiece(1,0);	//X turn
	obj.placPiece(0,1); // O turn
	obj.placePiec(1,1); // X turn
	obj.placePiece(1,2); // O turn, should win
	ASSERT_EQ(obj.getWinner(), 'O');
}

//O wins Row 1
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.placPiece(1,0);	// O turn
	obj.placPiece(0,0);	//X turn
	obj.placPiece(1,1); // O turn
	obj.placePiec(0,1); // X turn
	obj.placePiece(1,2); // O turn, should win
	ASSERT_EQ(obj.getWinner(), 'O');
}

//O wins Row 2
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.placPiece(2,0);	// O turn
	obj.placPiece(1,0);	//X turn
	obj.placPiece(2,1); // O turn
	obj.placePiec(1,1); // X turn
	obj.placePiece(2,2); // O turn, should win
	ASSERT_EQ(obj.getWinner(), 'O');
}

//O wins Column 0
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.placPiece(0,0);	// O turn
	obj.placPiece(0,1);	//X turn
	obj.placPiece(1,0); // O turn
	obj.placePiec(1,1); // X turn
	obj.placePiece(2,0); // O turn, should win
	ASSERT_EQ(obj.getWinner(), 'O');
}

//O wins Column 1
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.placPiece(0,1);	// O turn
	obj.placPiece(1,0);	//X turn
	obj.placPiece(1,1); // O turn
	obj.placePiec(1,2); // X turn
	obj.placePiece(2,1); // O turn, should win
	ASSERT_EQ(obj.getWinner(), 'O');
}

//O wins Column 2
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.placPiece(0,2);	// O turn
	obj.placPiece(1,0);	//X turn
	obj.placPiece(1,2); // O turn
	obj.placePiec(1,1); // X turn
	obj.placePiece(2,2); // O turn, should win
	ASSERT_EQ(obj.getWinner(), 'O');
}

//O wins diagonal left-right
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.placPiece(0,0);	// O turn
	obj.placPiece(1,0);	//X turn
	obj.placPiece(1,1); // O turn
	obj.placePiec(1,2); // X turn
	obj.placePiece(2,2); // O turn, should win
	ASSERT_EQ(obj.getWinner(), 'O');
}

//O wins diagonal right-left
TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.placPiece(0,2);	// O turn
	obj.placPiece(1,0);	//x turn
	obj.placPiece(1,1); // O turn
	obj.placePiec(1,2); // x turn
	obj.placePiece(0,2); // O turn, should win
	ASSERT_EQ(obj.getWinner(), 'O');
}

// NEED to Test Cat's Game and Game not over scenarios

TEST(TicTacToeBoardTest, toggleTurn)
{
	//X is default
	TicTacToeBoard obj;
	ASSERT_EQ(obj.toggleTurn(), 'O');
}

TEST(TicTacToeBoardTest, toggleTurn)
{
	//X is default
	TicTacToeBoard obj;
	obj.toggleTurn(); // becomes O
	ASSERT_EQ(obj.toggleTurn(), 'X');
}

