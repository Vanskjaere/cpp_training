#include <string>
#include "equipement.h"
#include "general.h"
#pragma once

class character
{
public:
	character();
	character(std::string ps_name, std::string ps_firstname) ;
	~character();

	void receiveAtk(int pi_nbHp);
	void attack (character &pc_cible);
	void regen (int pi_quantiteHp);
	void changeEquipement (equipement &pe_piece);
	void variablesAttributsCalculation ();
	
	bool dodgeCalculation ( character &pc_cible) ;


	float getFlee(void);
	int getHit(void);


private:
	std::string ms_name;
	std::string ms_firstname;
	
	//base stat
	int mi_str ;//[>> Atk++]
	int mi_dex	;//[>> Hit++, Atk+, Hps+]
	int mi_agi ;//[>> Flee++, Hps++]
	int mi_intel ;//[>> Matk++, Mdef+, mi_mp++]
	int mi_sag ;//[>> Mdef++, mi_mp+]
	int mi_vit ;//[>> Def++, Hp++]

	//calculed stat : base stat + stuff stat //used in damages's calculation
	int mi_hp;
	int mi_mp;
	float mf_flee;
	int mi_hps;
	int mi_hit;
	int mi_def;//[<< DefVit + DefAr]
	int mi_atk;//[<< AtkStr + AtkWp]
	int mi_mAtk; 
	int mi_mDef; 

	//equipement
	equipement me_head;
	equipement me_shoulder;
	equipement me_chest;
	equipement me_hands;
	equipement me_legs;
	equipement me_foot;
	equipement me_primaryWeapon;
	equipement me_secondaryWeapon;
	equipement me_amulet;
	equipement me_leftRing;
	equipement me_rightRing;
	equipement me_backPack;
	equipement me_leftEarring;
	equipement me_rightEarring;

	en_idStatus men_status[MAX_NB_STATUS];

};
