/*
 *File: organicmole.h
 Author: Saberina Young
License:
                    GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

 Descrpiton: basic untis of life broken down to be used for for the DNA models and futher class down the line

 *
 */


int combined_pydrmidal(int *num1, int *num2, int *value);
int combined_pydrmidal(int *num1, int *num2, ,int *num3 ,int *value);
int phosphate(int *posphorus,int *oxgyen,  int *value);
int carbon(int *totalamountofstuff,int *basepairing, int *nucleizone,int *neutron,
	       	int * proton, int *electron, int *pairone, 
		int *pairtwo, int *pairthree, int *pairfour,
	       	int *value);
int nitrogen(int * totalamountofstuff, int *pairing , int *neutorn, int *proton, 
		int *electron,int *pairone, int *pairtwo, 
		int *pairthree,int value);
int hydrogen(int *totlaamountofstuff, int *single_pair, int *nuclear,int *neutron,
	       	int *proton, int *electron,int *value);
int posphorus(int *totalamountofstuff,int *pairing, int *neutron, int *proton, 
		int *electron,int *pairone, int *pairtwo, 
		int *pairthree, int *pairfour ,int value);
int oxygen(int *totalamountstuff ,int *baspaired, int *nucleizone, int *proton 
		, int *electron, int *neutron, int *pairone,
	       	int *pairtwo, int *onoroff,int value); 
int phosphatechain(*int doubleOneOrZero,int value);
int oxydial(int *hydrogen, int *oxygen, int value);

int sugar(int *hydrogen, int *carbon,int *oxygen ,int value);
int riboussugar(*int singlePhosphatelayer,*int  singleSugar, *int ribousSugar1prime,
		*int ribousSugar2Prime, *int ribousSugar3Prime, *int ribousSugar4Prime, 
		*int ribousSugar5Prime, int value);
int deoxyribous(*int phosphateLayer , *int sugar, *int dexoyusSugar, *int hyrdogenbond, int value);
int ribous(*int sugar,*int ribous,int value);
int fattyAcid(*int carbon, *int hydrogen,*int methylt_termination_end,
	       	*int carboxylic_acid_beginning_end,int value);
int sucrose (*int carbon, *int hydrogen, *int oxygen, int value);
int aminoAcids( *int centeralCarbon, *int amino_group, *int cabroyxlgroup, 
		*int ribousSideChain,int value);
int glycerolipids ( *int fattyacid, *int gylcerol ,int value);
int gycerophosphholipids( *int fattyacid, *int phospocholine , *int spingosine,
	       	int value);
int spingosine(*int carbon,*int hydrogen,*int nitrogen, *int oxydcial,
	       	int value);
int spingolipids( *int fattyAcids,*int cermides, *int phosphastegroup, *int sugarbased,*
		int spinosine,int value);
int sterols (*int oxyical,*int carbonring);
int carbonring( *int carbon, *int hydrgens, int value);
int saccharolipids( *int sugarChain, *int gycerophosolipids, int value);




