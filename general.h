#include <time.h>

#pragma once 
#define MAX_NB_STATUS  20


enum en_idEmplacement 	
{
	head = 0,
	shoulder,
	chest,
	hand,
	legs,
	foot,
	primaryWeapon,
	secondaryWeapon,
	amulet,
	leftRing,
	rightRing,
	backPack,
	leftEarring,
	rightEarring
};

enum en_idBonusEquipement   
{
	
	str = 0 ,//[>> Atk++]
	dex	,//[>> Hit++, Atk+, Hps+]
	agi ,//[>> Flee++, Hps++]
	intel ,//[>> Matk++, Mdef+, mi_mp++]
	sag ,//[>> Mdef++, mi_mp+]
	vit ,//[>> Def++, Hp++]
	hp,
	mp,
	flee,
	hps,
	hit,
	def,//[<< DefVit + DefAr]
	atk ,//[<< AtkStr + AtkWp]
	mAtk, 
	mDef


};

enum en_idStatus
{
	
	powerUp = 0, //[>> Atk++]
	precisionUp, //[>> Hit++]
	blindage, //[>> Def++]
	magicMirror //[return a part of magic attack]
	
};

int fRandomInt (int pi_max);

float fRandomFloat (float pf_max);
