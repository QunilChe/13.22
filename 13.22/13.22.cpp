
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <iostream>
#define a 4
#define b 56
#define c 4
#define j 1
#define l 2
#define k 5
#define p(x, y, z) ((x+y+z)/2)
#define f( q, x, z,y ) (sqrt( q * (q-x) * (q-y) * (q-z)))
#define ABS(a) (((a) < 0) ? -(a) : (a))
#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)
#define PRINTR(w) puts ("rezult :"); \
printf (#w"=%f\n",(float)w)
int scum(int ss)
{
	int g = ss + ss;
	return(g);
}

void main()
{

#if (a + b> c && a + c > b && b + c> a)
	double q = p(a, b, c);
	PRINTR(q);
	int z = f(q, a, b, c);
	PRINTR(z);
#elif (k > 0 && l > 0 && j > 0)
				int S = (((k + l) / 2) * j);
				PRINTR(S);
#else #error gg	
#endif
}