#include<math.h>
#include<stdio.h>
#include<stdint.h>
#include<assert.h>
#include"particle.h"
int particleParticle(int a)
{
	if (a == a){
		return a=a*a;
	} else if (a != a) 
	{
		return changeParticle(a);
	}
}
int changeParticle(int a)
{
		return a=a+1;
}
int particleParticles(int a)
{
	int ab;
	if (a == (a +1) ) 
	{
		return ab=0;
	} else {
		return ab=1;
	}

}
float constant(int a, float rate,float constants,int n)
{
	float time1 =60000;
	float time = 0.00001;
	float aw;
	float frps = powf((1-frp(constants,time,time1)),n); 
	if (rate <= constants){
		aw = -constants * time + a;
		return aw;
	}else if (rate == constants * 4 *a ) {
		aw= powf(frps,n) * a;
		return aw;
	}
}
int radioacitveDecay(int b)
{
	double halflife;

}
float frp(float constants,float time,float time1)
{
	float frp = (-constants * (time-time1));
	return frp; 
}
int main() 
{
	int a,b,c,d;
	float rate1;
	float constant1;
	rate1 = 1.23;
	constant1 = 3.12;
	int number  = 23;
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
	printf("%.2f rate in which d:" , constant(particleParticle(d),rate1,constant1,number));
	return 0;
}
