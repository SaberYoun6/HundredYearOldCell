#include<stdio.h>
//#include<atom.h>
#include"atom.h"
#include<math.h>
#include<string.h>
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
int rateLimiting(struct Atom a, struct Atom a1){
	int  rateLimiting=0;
       	if (a.currentKnow < a1.currentKnow ) {
		rateLimiting = (a.valenceElectron >= a1.valenceElectron) ? (a1.currentKnow * (a1.valenceElectron / a.valenceElectron)) : (a1.currentKnow * (a.valenceElectron / a1.valenceElectron));
	}else{
		rateLimiting =  (a.valenceElectron <= a1.valenceElectron) ? (a.currentKnow *  (a.valenceElectron / a1.valenceElectron)) : (a.currentKnow*(a1.valenceElectron / a.valenceElectron)) ; 
	}
	return rateLimiting;		
}



int main(void){
	struct Atom carbon;
	struct Atom Sodium;
	strcpy(carbon.symbol,"C ");
	strcpy(Sodium.symbol,"NA");
	carbon.currentKnow, carbon.atomicMass,carbon.proton,carbon.neutron,carbon.electron,carbon.valenceElectron,carbon.neutralPosition,carbon.boilingPoint,carbon.freezingPoint,carbon.metal,carbon.nonMetal, carbon.semiMetal,carbon.hydrogenBond= 121,12,6,6,6,-4,6,3825,3825,0,1,0,0;
	Sodium.currentKnow, Sodium.atomicMass, Sodium.proton, Sodium.neutron,Sodium.electron,Sodium.valenceElectron,Sodium.neutralPosition,Sodium.boilingPoint, Sodium.freezingPoint,Sodium.metal,Sodium.nonMetal, Sodium.semiMetal,Sodium.hydrogenBond= 69,23,11,11,12,-1,12,883,98,1,0,0,0;
	int rateofCarbontoSodium=rateLimiting(Sodium,carbon);
	printf(" of the rate %d",rateofCarbontoSodium);

}
