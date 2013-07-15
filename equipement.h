#include <string>

#include "general.h"

#pragma once



class equipement

{

public:

	equipement(void);

	equipement(int pi_idEquipement) ;

	~equipement(void);

	int getIdEquipement (void) const;

	en_idEmplacement getEmplacement (void) const;

	std::string getName (void) const;

	int getPower (void) const;

	int getPowerM (void) const;

	int getSkin (void) const;

	en_idBonusEquipement getIdBonusOne (void) const;

	int getValueBonusOne (void) const;

	en_idBonusEquipement getIdBonusTwo (void) const;

	int getValueBonusTwo (void) const;

private:



	int mi_idEquipement;

	en_idEmplacement men_emplacement;

	std::string ms_name;

	int mi_power;

	int mi_powerM;

	int mi_skin;

	en_idBonusEquipement men_idBonusEquipementOne;

	int mi_valueBonusOne;

	en_idBonusEquipement men_idBonusEquipementTwo;

	int mi_valueBonusTwo;

	

};



