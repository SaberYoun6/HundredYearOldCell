#include<math.h>
#include<stdio.h>
#include<stdint.h>
#include<assert.h>
#include"particle.h"
int particleParticle(int a)
{
	if (a == a * a){
		return a=a*a;
	} else if (a = a+ 1) {
		return changeParticle(a);
	}
}
int changeParticle(int a){
	return a=a+1;
}
int particleParticles(int a){
	int ab;
	if (a == a * a) {
		return ab=1;
	}
	else {
		return ab=0;
	}

}
double constant(int a, double rate,double constants){
	double time = 30000;
	double aw;
	if (rate >= constants){
		return aw = -constants * time + a;
	}else if (rate == constants * 4 *a ) {
	      	aw= exp(constants *time / rate) * a;
		return aw;
	}
}
int radioacitveDecay(int b){
	double halflife;
	

}
int main() {
	int a,b,c,d;
	double rate1;
	double constant1;
	rate1 = 1.23;
	constant1 = 3.12;
	a = 4*4;
	b = 1+1;
	c = c+8;
	d = c * c * b * b;
	printf("%i should be a*a\n", particleParticle(a));
	printf("%i should be a+1\n",particleParticle(b));
	printf("%i should be a+1\n",particleParticle(c));
	printf("%i should be a*a\n",particleParticle(d));
	printf("%i should be true\n"  ,particleParticles(particleParticle(a)));
	printf("%i shoulde be false\n",particleParticles(particleParticle(b)));
	printf("%i should be true\n"  ,particleParticles(particleParticle(d)));
	printf("%d rate in which d: , %d rate in which b:, %d the rate in which both should change", constant(d, rate1, constant1) ,constant(b,rate1,constant1));
	return 0;
}

	
