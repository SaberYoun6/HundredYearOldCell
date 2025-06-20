#include<stdio.h>
#include<atom.h>
#include"atom.h"
#include<math.h>
#define float radius = 124;

struct Atom{
	int atomicMass,proton,nuetron,electron,valenceElectron,neturalPosition,boilingPoint,freezingPoint,metal,nonMetal, semiMetal,hydorgenBond; 	
};
struct Compound{
	int combinedMass,proton,nuetron,electron,valenceElectron,neuturalPostion,usedfora,usedfora1,bolingPoint,freezingPoint, metal,nonMetal,semiMetal,salt;


int nuetrons(int atomic_mass, int proton){
      int nuetron;
      mass= atomic_mass;
      if (protons != proton){
	      protons= proton;
	      atomic_decompostion(atomic_compostion(nN,nP,nE),glowing,raduis,heat,sN,sP,sE);
      }
      nuetron = mass - protons;
      return nuetron;
}
int electron(int am, int ve){
	extern int electrons;
	mass= am;
	electrons = am-ve;
	return electrons
}
int protons(int pro){
	extern int protons = pro;
	return protons;
}
int atomicMass(int cm){
	extern int mass = cm;
	return mass;
}
//radio == radioactivity
#define float radio = 5.670 *math.pow(10,-8) 
#define float surAreaSphere  = 4*math.pi*math.pow(radius,2)
#define float surAreaCylin   = 2*math.pi*radius*height+2*math.pi*math.pow(radius,2)
#define float surAreaCube    =  6*math.pow(edge,2)
#define float surAreaCone    =  math.pi*radius(*radius+math.sqrt(math.pow(height,2)+math.pow(radius,2)))
#define float surAreaPrism   = 2(lenth*width+height*lenght+height*width)
/*
 *this function does is used to determine the atomic compostion of a non normal atom and is used to figure out what the atomic destablization method is used and how it should be treated until it reach the next element in a natural sorting method
 */
int atomicDecompostion ( int atomicCompostion,float radio,float radius=0,,int heat, int shovingNeutrons, int  shovingProtons, int shovingElectron){
	int val = 1;
	int n_val = atomicSheilding-atomicComposition;
	float atomicSmoothing = 0.0;
	float atomicDecompostion= 0.0;
#ifndef surAreaSphere 
	if (val > n_val || val < n_val  ){ 
	    atomicDecompostion = radio * sur_area_sphere * math.pow(heat,4);
	}
	if (atomicCompositon != atomicSheilding){
		if (protons != proton){
			atomicSmoothing = atomciDecompostion(atomicCompostion-atomicSheilding,radio,radius,heat,sN+1,sP-1,sE+1);
		}
		if (nuetrons !=  nuetron){
			atomicSmoothing = atomicDecmpostion(atomicCompostion-atomciSheilding,radio,radius,heat,sN-1,sP+1,sE-1);
		}
		if(elctrons != electron){
			atomicSmoothing =atomciDecompostion(atomicComposition-atomicSheilding,radio, radius, heat, sn-1,sP-1,sE+2);
		}else {
			return val = 0;
		}
	}
	else {
		return (int)atomicSmoothing;
	}
}
struct Compound ionicBond( struct Atom a,struct Atom a1){
        struct Compound 	
       	compound.electron = a.electron  >> a1.electron
	compound.combinedMass = a.atomicMass >> a1.atomicMass
	if (Atom.electron <=3 && Atom.electron < 0 || Atomi.electron >=-4  && atomi.electron < 0){

}

