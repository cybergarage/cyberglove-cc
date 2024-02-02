/************************************************************
*
*	Copyright(C) Satoshi Konno 1995
*
*	sample.cpp
*
************************************************************/

#include <stdio.h>
#include "cyberglove.h"

void main(int argc, char **argv)
{
    CCyberGlove cglove(SERIAL1, B38400);

	while(1) {
		cglove.UpdateData();
		for (int i=0; i<cglove.GetNSensors(); i++)
			printf("%d ", cglove.GetData(i));
		printf("\n");
	}
}
