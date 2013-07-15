#include "character.h"
#include "general.h"
#include <string> 
using namespace std;

character::character(void)
{
}


character::character(string ps_name, string ps_firstname) : ms_name(ps_name), ms_firstname(ps_firstname)
{
}


character::~character(void)
{
}

void character::receiveAtk(int pi_nbHp)
{
	mi_hp = mi_hp - pi_nbHp;
	if (mi_hp < 0 )
	{
		mi_hp = 0;
	}

}

void character::attack(character &pc_cible) 
{
	int li_nbHp;

	li_nbHp = 0;
	
	dodgeCalculation(pc_cible);

	pc_cible.receiveAtk(li_nbHp);

}

float character::getFlee(void)
{
	return mf_flee;
}

int character::getHit(void)
{
	return mi_hit;
}

bool character::dodgeCalculation( character &pc_cible)
{
	float lf_cibleFlee;
	int li_thisHit ;
	lf_cibleFlee = pc_cible.getFlee();
	li_thisHit = getHit();
	
	if ( fRandomInt(100) <= ( 100 - (li_thisHit - lf_cibleFlee) ) )
	{
		return true;
	}
	else
	{
		return false ;
	}
}
