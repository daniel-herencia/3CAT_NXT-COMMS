/*
 * comms_functions.c
 *
 *  Created on: Nov 17, 2021
 *      Author: Daniel Herencia Ruiz
 */

#include "comms_functions.h"
#include "sx126x.h"
#include "radio.h"
#include "sx126x-hal.h"

void configuration(void){
	//Inicialize power in the antenna and the transceiver => OBC??????????????
	if( GetOperatingMode( ) != STDBY_RC )
	{
		SetStanby(STDBY_RC);
	}





};

void tx_function(void){


};

void rx_function(void){


};

void packaging(void){


};
