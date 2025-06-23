/*
 *
 *
 * Author : Saberina Young
 * file :  atom.h
 * license :
                     GNU GENERAL PUBLIC LICENSE

                       Version 3, 29 June 2007

         Copyright © 2007 Free Software Foundation, Inc. <https://fsf.org/>
Everyone is permitted to copy and distribute verbatim copies of this license document, but changing it is not allowed.
 *
 *Description : This is file that will help the main atom.c will include the function in them will be used to dervive they others

 *
 */
struct Atom{char symbol[2];
int currentKnow,atomicMass,proton,neutron,electron,valenceElectron,neutralPosition,boilingPoint,freezingPoint,metal,nonMetal,semiMetal,hydrogenBond;
};
struct Compound{char symbol[4];
	int combinedMass,proton,neurton,electron,valenceElectron,neutralPostion,usedFromA,usedFromA1,boilingPoint,freezingPoint,metal,liqud,gases,nonMetal,semiMetal,salt,hydrogenBond;
};
/*int neurton(int atomicMass, int proton);
int proton(int proton);
int atomicMass(int closesmass);
int electron(int atomicmass, int valentelectron);
int atmoicShielding(int normal_amount);
int atomicCompostion(int neutron, int proton, int electron);
int atomicDecompostion(int atomic_compostion,float glowing,float radius, int temperature, int shoving_nuertons, int shoving_protons, int shoving_electrons);
int cloudStruct( int electron, int valent_shell);
*/
int stoichometry(struct Atom a, struct Atom a1);
int rateLimiting(struct Atom a , struct Atom a1);
//struct Compound hydrogenBonds(struct Compound c1,struct Compound  c2);
//struct Compound colventBonds(struct Atom a, struct Atom a1);
struct Compound ionicBond(struct Atom a,struct Atom a1 );
//struct Compound metallicBond(struct Atom a, struct Atom a1);

