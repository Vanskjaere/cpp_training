#include <iostream>
#include <time.h>    // inclusion des fonctions time
using namespace std;



int fRandomInt (int pi_max)
{
	srand ( (int) time(NULL)); 
	int li_return;

	li_return = rand() % pi_max;

	return li_return;
}


float fRandomFloat (float pf_max)
{
	int li_max;
	float lf_return ;
	
	pf_max = pf_max * 100;
	li_max  = (int) pf_max;

	srand ( (int) time (NULL));
	
	
	lf_return = (float) (rand() % li_max) ;
	
	lf_return = lf_return / 100 ;
	
	return lf_return;
}
