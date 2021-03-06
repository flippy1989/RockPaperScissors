#pragma once
#include "Piece.h"

class Flag : public Piece
{
public:
	Flag(Point _pos, Player _player, Board* gameBoard) :Piece(_pos, _player, gameBoard) {}
	Piece::DefendResult Defend(Piece * enemy) override;
	virtual char ToChar(bool show) override;
	virtual char pieceInfo() override;
	virtual string ToString() override;
};
