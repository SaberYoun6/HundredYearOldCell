parts.o : particle.c particle.h 
	cc -c particle.c

clean :
	rm edit parts.o 

