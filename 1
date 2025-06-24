#include<stdio.h>
//#include<atom.h>
#include"atom.h"
#include<math.h>
#include<string.h>
#include<stdlib.h>
//#define radius 12412345.0


int nuetrons(int atomic_mass, int proton){
      int nuetron;
      int mass= atomic_mass;
      /*if (proton`:: != proton){
	      protons= proton;
	      atomic_decompostion(atomic_compostion(nN,nP,nE),glowing,raduis,heat,sN,sP,sE);
      }*/
      nuetron = mass - proton;
      return nuetron;
}
int electron(int am, int ve){
	int electrons;	
	int mass= am;
	electrons = am-ve;
	return electrons;
}
int protons(int pro){
	int protons = pro;
	return protons;
}
int atomicMass(int cm){
	int mass = cm;
	return mass;
}
//radio == radioactivity
#define radio() (5.670 *math.pow(10,-8)) 
#define surAreaSphere(radius) (4*math.pi*math.pow(radius,2))
#define surAreaCylin(radius,height) (2*math.pi*radius*height+2*math.pi*math.pow(radius,2))
#define surAreaCube(edge)  6*math.pow(edge,2)
#define surAreaCone(radius,height) (math.pi*radius(*radius+math.sqrt(math.pow(height,2)+math.pow(radius,2))))
#define surAreaPrism(lenght,width,height) (2(lenth*width+height*lenght+height*width))
/*
 *this function does is used to determine the atomic compostion of a non normal atom and is used to figure out what the atomic destablization method is used and how it should be treated until it reach the next element in a natural sorting method
 */
/*
int atomicDecompostion ( int atomicCompostion,float radio,float radius,int heat, int shovingNeutrons, int  shovingProtons, int shovingElectron){
	int val = 1;
	int n_val = atomicSheilding-atomicComposition;
	float atomicSmoothing = 0.0;
	int atomicDecomposition= 0.0;
	if (val > n_val || val < n_val  ){ 
	    atomicDecompostion = radio * surareasphere(radius) * math.pow(heat,4);
	}
	if (atomicCompositon != atomicSheilding){
		if (proton != proton){
			atomicSmoothing = atomciDecompostion(atomicCompostion-atomicSheilding,radio,radius,heat,sN+1,sP-1,sE+1);
		}
		if (nuetron !=  nuetron){
			atomicSmoothing = atomicDecmpostion(atomicCompostion-atomciSheilding,radio,radius,heat,sN-1,sP+1,sE-1);
		}
		if(electron != electron){
			atomicSmoothing =atomciDecompostion(atomicComposition-atomicSheilding,radio, radius, heat, sn-1,sP-1,sE+2);
		}else {
			return val = 0;
		}
	}
	else {
		return (int)atomicSmoothing;
	}
}
*/
struct Compound ionicBond( struct Atom a,struct Atom a1){
        int stanardization = 0; 
	struct Compound c;	
	char combo[4];
	strcat(combo,a.symbol);
	strcat(combo,a1.symbol);
	strcpy(c.symbol,combo);
       	c.electron = a.electron  >> a1.electron;
	c.combinedMass = a.atomicMass >> a1.atomicMass;
	c.usedFromA =(a.currentKnow > a1.currentKnow) ? (rateLimiting(a,a1)) : stanardization ;
	c.usedFromA1 =(a1.currentKnow > a.currentKnow)? (rateLimiting(a1,a)) : stanardization ;
	if (a.electron <=3 && a.electron < 0 || a1.electron >=-4  && a1.electron < 0){
	}
}
int * moleRatio(struct Atom a, int count){
	int mole = 0;
	int stuffLeftOver = a.currentKnow % a.atomicMass;
	int * generator=(int*)malloc(count*sizeof(int));
	double totalAmountOfThatCanGenerate = a.currentKnow / a.atomicMass;
	if (!generator){
		return NULL;
	}
	mole = (totalAmountOfThatCanGenerate > 0) ? totalAmountOfThatCanGenerate*a.valenceElectron : 0 ;
	generator[0]=stuffLeftOver;
	generator[1]=(int)totalAmountOfThatCanGenerate;
	generator[2]=mole;
	generator[3]=0;
	return generator;
}
//this assumes that both struct will combine with an even temperature
int chemicalBonds(struct Atom a, struct Atom a1, int temp){
	int * ratioA = moleRatio(a, 4);
	int * ratioA1 = moleRatio(a1, 4);
	int electroStatics = 0;
	ratioA[3]=2;
	ratioA1[3]=2;
	printf("ratioA[0] of %d: ratioA1[0] of %d\n ratioA[2] :%d, ratioA1[2] : %d\n",ratioA[0],ratioA1[0], ratioA[2],ratioA1[2]); 
	printf("ratio of A: %d :the ratio of A1: %d\n",ratioA[1],ratioA1[1]);
	if (ratioA[1] < ratioA1[1]){
		ratioA[2] << ratioA1[2];
		ratioA1[2] >> ratioA[2];
		printf("ratio A[2] %d :ratio A1[2] %d\n",ratioA[2],ratioA1[2]);
		ratioA1[3] << ratioA[2];
		ratioA[3] >> ratioA1[2];
		printf("How much electrostatic is in ratioA : %d How much electrostatic is in:ratioA1: %d\n",ratioA[3],ratioA1[3]);
		electroStatics = ratioA[3] + ratioA1[3]* temp;
		printf("electroStatics is in : %d\n" ,electroStatics); 
	}else if (ratioA[1] == ratioA1[1]){
		ratioA1[2] >> ratioA[2];
		ratioA1[3] << ratioA[2];
		printf("what is the shift of %d\n" ,ratioA1[3]);
		electroStatics = ratioA1[3] * temp;
	}else {
		ratioA[2] >> 1;
		ratioA1[2] >> 1;
		ratioA[3] >> 2;
		ratioA1[3] << 1;
		electroStatics = ratioA[3] - ratioA1[3] *temp;

	}
	return electroStatics;
	
}
int stoichiometry(struct Atom a, struct Atom a1){
}
int rateLimiting(struct Atom a, struct Atom a1){
	int  rateLimiting=0;
       	if (a.currentKnow <= a1.currentKnow ) {
		rateLimiting = (a.valenceElectron >= a1.valenceElectron) ? (a1.currentKnow * (a1.valenceElectron % a.valenceElectron)) : (a1.currentKnow * (a.valenceElectron % a1.valenceElectron));
	}else{
		rateLimiting =  (a.valenceElectron <= a1.valenceElectron) ? (a.currentKnow *  (a.valenceElectron % a1.valenceElectron)) : (a.currentKnow*(a1.valenceElectron % a.valenceElectron)) ; 
	}
	return rateLimiting;		
}



int main(void){
	struct Atom carbon;
	struct Atom Sodium;
	strcpy(carbon.symbol,"C ");
	strcpy(Sodium.symbol,"NA");
	carbon.currentKnow=121;
	carbon.atomicMass=12;
	carbon.proton=6;
	carbon.neutron=6;
	carbon.electron=6;
	carbon.valenceElectron=-4;
	carbon.neutralPosition=6;
	carbon.boilingPoint=3825;
	carbon.freezingPoint=3824;
	carbon.metal=0;
	carbon.nonMetal=1;
	carbon.semiMetal=0;
	carbon.hydrogenBond= 1;
	Sodium.currentKnow=78;
	Sodium.atomicMass=23;
       	Sodium.proton=11;
       	Sodium.neutron=12;
	Sodium.electron=11;
	Sodium.valenceElectron=-1;
	Sodium.neutralPosition=12;
	Sodium.boilingPoint=883; 
	Sodium.freezingPoint=98;
	Sodium.metal=1;
        Sodium.nonMetal=0;
	Sodium.semiMetal=0;
	Sodium.hydrogenBond=0;
	int * moleRatioCarbon;
	int * moleRatioSoduim;
	if (moleRatioSoduim){
		int chemicalNaC=chemicalBonds(Sodium,carbon,75);
		printf("chemicalNaC is %d\n",chemicalNaC);
	}
	

	return 0 ;

}
