#include<stdio.h>
#include"particle.h"
int particleParticle(int a)
{
	if (a= a * a){
		return a * a;
		break;
	} else {
		return changeParticle(a);
		break;
	}
}
int changeParticle(int a){
	return a =a+1;
}
int main() {
	int a,b,c,d;
	a = 1*1;
	b = 1+1;
	c = b/1;
	d = c * c * b * b;
	printf("%i should be a*a\n", particleParticle(a));
	printf("%i should be a+1\n",particleParticle(b));
	printf("%i should be a+1\n",particleParticle(c));
	printf("%i should be a*a\n",particleParticle(d));
}
	
