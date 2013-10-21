// capp1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int num = 110;
int *pi = &num;
*pi =111;

printf("Address of num: %d Value: %d\n",&num, num);
printf("Address of pi decimal: %d Value: %d\n",&pi, pi);
printf("Address of pi octal: %o Value: %o\n",&pi, pi);
printf("Address of pi hex: %x Value: %x\n",&pi, pi);
printf("Address of pi imp: %p Value: %p\n",&pi, pi);


int *pis = &num;
printf("Value of pis: %p\n", pis);
void* pv = pis;
pi = (int*) pv;
printf("Value of pis: %p\n", pis);

	return 0;
}

