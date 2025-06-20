#include<stdio.h>
#include<dbg.h>
#include<organicmole.h>

/*
 *File:organicmole.c
 * Author: Saberina Young
 * Lisence: 
 		     GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

Descrption: this will be how the organic molecules will coalesce and form into a organic molecule that is usable for the process

*/
// this will create orgainic moleucules in which would run
int &val =0
struct Atoms {
	int *abundance;
	int *closeby;
	int *neutron ;
	int *proton;
	int *electrons;
	int *pairs;
	int *hydrogenbond;
};
struct Sugar {
	int *hydrogen;
	int *oxygen;
	int *carbon;
	int *howmanyrings;
};
struct Dna {
	int *posphate;
	int *sugar;
	int *deoxyribous;

};


int combined_prymidal(int *combo0, int *combo1, int *val){
	if (combo0 << combo1){
		val=(combo0 << combo1);
	} else {
		return = 0;
	}
	return val;


}
int ratelimitingstep(int maxresource,int miniumresource){

}


//total amount of resources is r and closeby is how much of the resource is closeby, p is the amount of phorouphors and o is the amount of oxygen and val is the total value in which is combined
int phosphate(struct Atom p, struct Atom *o, int *val){
	int &resource = 6000;
	int &closeby = 5;
	int &num=1;
	int &nu = 4;
		if (resource <= p.abundace && closeby | p.closeby && resource.o >= resource && closeby | o.closeby ){
			p.adbundance % resource | o.abundance % resource
			combined_prymidal(p,o);
		}else{
			return 0
		}
	}else{
		return val = 0;
	}
	return val;
}

int main(void){
	struct Atom oxygen;
       	struct Atom posphoprus;
	oxygen.abundance,oxygen.closeby,oxygen.neutrons,oxygen.protons,oxygen.electrons,oxygen.pairs,oxygen.hydrogenbond=100000,4,8,8,6,2,1;
	posphoprus.abundance,posphoprus.closeby,posphoprus.nuetrons,posphorus.proton,posphoprus.electron,posphopfus.pairs.posphopros.hydrogenbond=200000,3,16,15,13,3,1;

}

