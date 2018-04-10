#include "SFPlayer.h"

SFPlayer::SFPlayer(int Health, int Charge) : Health(Health), Charge(Charge) {}

int SFPlayer::GetCharge() const { 
	return Charge;
} 

int SFPlayer::GetHealth() const {
	return Health;
}

const char* SFPlayer::GetPlayerSprite() {
	if (Charge < 60) {
		return "assets/player0.png";
	} 
	else if (Charge >= 60 && Charge < 120) {
		return "assets/player1.png";
	}
	else if (Charge >= 120 && Charge < 180) {
		return "assets/player2.png";
	} else if (Charge >= 180 && Charge < 240) {
		return "assets/player3.png";
	} else if (Charge >= 240) {
		return "assets/player4.png";
	}
}

void SFPlayer::ResetCharge() {
	Charge = 0;
}

void SFPlayer::IncrementCharge() {
	if (Charge < 240) {
		Charge++;
	}
}


