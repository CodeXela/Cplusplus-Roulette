#pragma once


class Player
{
public:

	Player();

	//F�lle die Klasse mit anfangsdaten
	void initPlayer(double konto, unsigned int lvl, unsigned int exp, unsigned int lvlcap);


	//----------Auzskunft �ber Daten--------------->
	double holeKonto() { return _Konto; };
	unsigned int holeLVL() { return _LVL; };
	double holeEXP() { return _EXP; };
	//----------Auzskunft �ber Daten--------------->

	//-------Konto--------------->
	void setzeKonto(double& konto);
	void entferneKonto(double& konto);
	//-------Konto--------------->

	void setzeLVL(unsigned int& lvl);

	void setzeEXP(double& exp);

	~Player();

protected:

	void pruefeLVLCap();


protected:

	double _Konto{};
	unsigned int _LVL{};
	double _EXP{};
	unsigned int _LVLCap{};

private:

};

