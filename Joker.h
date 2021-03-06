#pragma once
#include "Soldier.h"
#include "Bomb.h"

class Joker : public Movable{
private:
	Piece * myId;
public:
	bool revealed = false;
	bool moved = false;
	enum ID { R, P, S, B };
	Joker(Point _position, Player _player, ID _id,Board* gameBoard) : Movable(_position, _player,gameBoard), myId(nullptr) { SetID(_id); };

	virtual Piece::DefendResult Defend(Piece * enemy) override;

	void Attack(Piece * enemy) override;

	void SetID(ID newType);

	virtual char pieceInfo() override;

	virtual char ToChar(bool show) override;

	virtual string ToString() override;
};