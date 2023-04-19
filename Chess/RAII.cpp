#include "RAII.h"

RAII::RAII(std::shared_ptr<ChessGrid> grid): grid_(grid)  {
	piece_ = std::make_unique<Bishop>(Team::Lilac, 4, 2);
}

void RAII::placePiece() {
	grid_->findCase(piece_->getX(),piece_->getY())->setPiece(piece_);
}

RAII::~RAII() {
	grid_->findCase(piece_->getX(), piece_->getY())->deletePiece();
}