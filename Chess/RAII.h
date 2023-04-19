#pragma once
#include <memory>
#include "Piece.h"
#include "ChessGrid.h"

class RAII {
public:
	RAII(std::shared_ptr<ChessGrid> grid);
	~RAII();
	void placePiece();
private:
	std::shared_ptr<PieceAbs> piece_;
	std::shared_ptr<ChessGrid> grid_;
};