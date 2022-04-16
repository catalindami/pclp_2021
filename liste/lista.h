/*
 * lista.h
 *
 *  Created on: Apr 10, 2022
 *      Author: cdami
 
 updated 16.04
 on Asus
 */

#ifndef LISTA_H_
#define LISTA_H_

struct Nod{
	int val;
	struct Nod *next;
};

typedef struct Nod nod;
nod *start;

void afisare(){
	nod *n = start;
	while(n){
		printf("%d ", n->val);
		fflush(stdout);
		n = n->next;
	}
}

void adauga(int v){
	nod *parcurgere = start;
	nod *curent = (nod*)malloc(sizeof(nod));
	curent->val = v;
	curent->next = NULL;

	if(!start){
		start = curent;
		}
	else{
		while(parcurgere->next){
			parcurgere = parcurgere->next;
		}
		parcurgere->next = curent;
	}
}

void insert(int v){
	nod *curent = (nod*)malloc(sizeof(nod));
	curent->val = v;
	curent->next = start;
	start = curent;
}

void adaugaLa(int poz, int v){
	nod *curent = start;
	int pasi = 0;
	nod *nodNou = (nod*)malloc(sizeof(nod));
	nodNou->val = v;

	while(pasi < poz){
		curent = curent->next;
		//printf("curent = %d\n", curent->val);
		pasi++;
	}



}


#endif /* LISTA_H_ */
