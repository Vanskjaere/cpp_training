#include "equipement.h"
#include <string>
using namespace std;


equipement::equipement(void)
{
}

equipement::equipement(int pi_idEquipement) : mi_idEquipement(pi_idEquipement)
{
}


equipement::~equipement(void)
{
}


int equipement::getIdEquipement(void) const 
{
	return mi_idEquipement;
}

en_idEmplacement equipement::getEmplacement (void) const
{
	return men_emplacement;
}

string equipement::getName (void) const
{
	return ms_name;
}

int equipement::getPower (void) const
{
	return mi_power;
}

int equipement::getPowerM (void) const
{
	return mi_powerM;
}

int equipement::getSkin (void) const
{
	return mi_skin;
}

en_idBonusEquipement equipement::getIdBonusOne (void) const
{
	return men_idBonusEquipementOne;
}

int equipement::getValueBonusOne (void) const
{
	return mi_valueBonusOne;
}

en_idBonusEquipement equipement::getIdBonusTwo (void) const
{
	return men_idBonusEquipementTwo;
}

int equipement::getValueBonusTwo (void) const
{
	return mi_valueBonusTwo;
}
