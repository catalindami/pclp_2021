/*
 * 1.c
 *
 *  Created on: Apr 10, 2022
 *      Author: cdami
 */

#include<stdio.h>
#include<stdlib.h>
#include "lista.h"



int main(){


	adauga(1);
	insert(0);
	adauga(3);
	adauga(2);
	insert(-1);
	adaugaLa(1, 5);
	afisare();

	adaugaLa(0, 6);
	afisare();

	return 0;
}
