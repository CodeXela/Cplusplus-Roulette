#include "Spieler.h" //hole spieler prototypen



Spieler::Spieler():Player()  //KonstruKtor (baut auf) wird am anfang gerufen
{



}

Spieler::~Spieler() //Dekonstrukture (baut zur�ck) meistenst beim beeenen
{


}


void Spieler::setzeSpielerName(string SN) // spieler name wird hier �bergeben
{
	
	_spielerName = SN; // spielername wird in die private variable eingetragen

}