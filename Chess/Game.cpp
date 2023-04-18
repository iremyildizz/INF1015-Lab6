/**
* Chess Game.
* \file   Game.cpp
* \author Irem Yildiz
* \date   14 avril 2023
* Cr�� le 10 avril 2023
*/
#include "Game.h"

std::vector<std::shared_ptr<PieceAbs>> Game::test1() {
	std::vector<std::shared_ptr<PieceAbs>> game;
	try {
		game.push_back(std::make_unique<King>(Team::Lilac, 0, 4));
		game.push_back(std::make_unique<King>(Team::Pink, 7, 4));
		game.push_back(std::make_unique<King>(Team::Pink, 5, 4));
	}
	catch(...) {}

	game.push_back(std::make_unique<Bishop>(Team::Lilac, 0, 2));
	game.push_back(std::make_unique<Bishop>(Team::Pink, 7, 2));
	game.push_back(std::make_unique<Rook>(Team::Lilac, 0, 0));
	game.push_back(std::make_unique<Rook>(Team::Lilac, 0, 7));
	game.push_back(std::make_unique<Rook>(Team::Pink, 7, 0));
	game.push_back(std::make_unique<Rook>(Team::Pink, 7, 7));

	return game;
}