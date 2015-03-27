#include <iostream>
#include <list>
#include <ctime>
#include <cstdlib>

#define GAME_RUN_DELAY 1000

#define LEFT 10
#define RIGHT 11
#define SPACE 12

void init();

class InputManager;
class GameManager;
class BlockGenerator;
class Board;
class Block;

// ------------------------ Block --------------------------

class Block {
	int height;
public:
	Block() { height = 20; }
	void moveLeft();
	void moveRight();
	void moveDrop();
	virtual void draw() = 0;
	
	void updateBlock();
	int getHeight() { return height; }
};

void Block::moveLeft()
{
	std::cout << "Block Right Move" << std::endl;
}
void Block::moveRight()
{
	std::cout << "Block Left Move" << std::endl;
}
void Block::moveDrop()
{
	std::cout << "Block Drop Move" << std::endl;
}

void Block::updateBlock()
{
	height --;
}

class Tetrimino_Straight : public Block {
public:
	void draw() { std::cout << "Tetrimino :: Straight" << std::endl; }
};

class Tetrimino_Square : public Block {
public:
	void draw() { std::cout << "Tetrimino :: Square" << std::endl; }

};

class Tetrimino_T : public Block {
public:
	void draw() { std::cout << "Tetrimino :: T" << std::endl; }
};

class Tetrimino_J : public Block {
public:
	void draw() { std::cout << "Tetrimino :: J" << std::endl; }
};

class Tetrimino_L : public Block {
public:
	void draw() { std::cout << "Tetrimino :: L" << std::endl; }
};

class Tetrimino_S : public Block {
public:
	void draw() { std::cout << "Tetrimino :: S" << std::endl; }
};

class Tetrimino_Z : public Block {
public:
	void draw() { std::cout << "Tetrimino :: Z" << std::endl; }
};

// ------------------------ InputManager --------------------------

class InputManager {
	int input;
public:
	InputManager() {}
	int getInput();
};

int InputManager::getInput()
{
	static time_t currentTime = clock();
	if(1000 < clock() - currentTime){
		currentTime = clock();
		switch(rand() % 3){
		case 0:
			return LEFT;
			break;
		case 1:
			return RIGHT;
			break;
		case 2:
			return SPACE;
			break;
		}
	}
	return NULL;
};

// ------------------------ BlockGanerator --------------------------

class BlockGenerator {
private:

public:
	BlockGenerator(){}

	Block* createBlock();
};

Block* BlockGenerator::createBlock()
{
	switch(rand() % 7){
	case 0:
		return new Tetrimino_Straight();
	case 1:
		return new Tetrimino_Square();
	case 2:
		return new Tetrimino_J();
	case 3:
		return new Tetrimino_L();
	case 4:
		return new Tetrimino_T();
	case 5:
		return new Tetrimino_S();
	case 6:
		return new Tetrimino_Z();
	default:
		return NULL;
	}
}

// ------------------------ Board --------------------------

class Board {
private:
	std::list<Block*> block_list;
	Block* currentBlock;
public:
	Board(Block* _startBlock){ 
		block_list.push_back(_startBlock);
		currentBlock = block_list.back();
	}
	void moveLeftActiveBlock();
	void moveRightActiveBlock();
	void dropActiveBlock();
	void insertBlock(Block* _block);
	void updateBoard();
	void draw();

	Block* getCurrentBlock() { return currentBlock; }
};

void Board::moveLeftActiveBlock()
{
	currentBlock->moveLeft();
}

void Board::moveRightActiveBlock()
{
	currentBlock->moveRight();
}

void Board::dropActiveBlock()
{
	currentBlock->moveDrop();
}

void Board::insertBlock(Block* _block)
{
	block_list.push_back(_block);
	currentBlock = block_list.back();
}

void Board::updateBoard()
{
	currentBlock->updateBlock();
}

void Board::draw()
{
	Block* currentBlock = block_list.back();
	currentBlock->draw();
	std::cout << "Current Block Height : " << currentBlock->getHeight() << std::endl;
}

// ------------------------ GameManager --------------------------

class GameManager {
private:
	InputManager *input;
	BlockGenerator *blockGener;
	Board *gameBoard;

	GameManager() {
		srand((unsigned int)time(NULL));
		input = new InputManager();
		blockGener = new BlockGenerator();

		// first start
		Block* temp = blockGener->createBlock();
		gameBoard = new Board(temp);
	}

public:
	static GameManager* Instance() {
		static GameManager instance;
		return &instance;
	}

	void gameStart();

	InputManager* getInputManager() { return input; }
	BlockGenerator* getBlockGenerator() { return blockGener; }
	Board* getBoard() { return gameBoard; }
};

void GameManager::gameStart() 
{
	static time_t currentTime = clock();
	
	if(GAME_RUN_DELAY < clock() - currentTime){
		currentTime = clock();
		gameBoard->updateBoard();
		gameBoard->draw();
		Block* currentBlock = gameBoard->getCurrentBlock();
		
		if(currentBlock->getHeight() <= 0){
			Block* newBlock = blockGener->createBlock();
			gameBoard->insertBlock(newBlock);
		}

		switch(input->getInput()){
		case LEFT:
			gameBoard->moveLeftActiveBlock();
			break;
		case RIGHT:
			gameBoard->moveRightActiveBlock();
			break;
		case SPACE:
			{
				gameBoard->dropActiveBlock();
				Block* newBlock = blockGener->createBlock();
				gameBoard->insertBlock(newBlock);
			}
			break;
		}
		std::cout << std::endl;
	}
}

int main() 
{
	std::cout << "2010180020 박성경의 테트리스 클래스 입니다." << std::endl;
	std::cout << "개발자 연락처 : 010-2562-3928" << std::endl;

	while(1){
		GameManager::Instance()->gameStart(); // single tone object call
	}

	return 0;
}
