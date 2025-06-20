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

int neurton(int atomicMass, int proton);
int proton(int proton);
int atomicMass(int closesmass);
int electron(int atomicmass, int valentelectron);
int atmoicShielding(int normal_amount);
int atomicCompostion(int neutron, int proton, int electron);
int atomicDecompostion(int atomic_compostion,float glowing,float radius, int temperature, int shoving_nuertons, int shoving_protons, int shoving_electrons);
int cloudStruct( int electron, int valent_shell);
struct Compound hydrogenBonds(struct Atom a,struct Atom a1);
struct Compound colventBonds(struct Atom a, struct Atom a1);
struct Compound ionicBond(struct Atom a,struct Atom a1 );
struct Compound metallicBond(struct Atom a, struct Atom a1);

