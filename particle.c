#include<stdio.h>
#include<stdint.h>
#include<assert.h>
#include"particle.h"
int particleParticle(int a)
{
	if (a= a * a){
		return a= a*a;
	} else {
		return changeParticle(a);
	}
}
int changeParticle(int a){
	return a=+1;
}
int particleParticles(int a){
	int ab;
	if (a * a) {
		return ab=1;
	}
	else {
		return ab=0;
	}

}
int main() {
	int a,b,c,d;
	a = 4*4;
	b = 1+1;
	c = b/1;
	d = c * c * b * b;
	printf("%i should be a*a\n", particleParticle(a));
	printf("%i should be a+1\n",particleParticle(b));
	printf("%i should be a+1\n",particleParticle(c));
	printf("%i should be a*a\n",particleParticle(d));
	printf("%i should be true\n"  ,particleParticles(particleParticle(a)));
	printf("%i shoulde be false\n",particleParticles(particleParticle(b)));
	printf("%i should be true\n"  ,particleParticles(particleParticle(d)));

	return 0;
}

	
