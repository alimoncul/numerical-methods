#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	double e = 2.7182818284590455;  //e sayisini tanimliyoruz.
	double x = 42;  //x'in degeri fazla onemli degil
	int i ; // for icin i olusturuyoruz.
	for(i=0;i<100;i++)
	{
		x = pow(e,-x);  // (e^-x)-x denkleminin kokunu buluyoruz 
	}					// eger sol ifade ile sag ifade esit olursa 0'a esitlemiz oluruz.
	printf("%.16f",x);
	return 0;
}
