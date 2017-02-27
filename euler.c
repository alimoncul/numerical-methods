#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double faktoriyel(double a) //özyinelemeli faktoriyel fonksiyonu
{
	if ( a == 0) return 1;
	return (a * faktoriyel(a-1));
}
int main(int argc, char *argv[]) 
{
	double n=0;
	double e=1;
	double e1=0;
	while(e!=e1)
	{
		e  = e1;
		e1 = e1 + (1/faktoriyel(n));
		n  = n + 1;
		printf("%.16g\n",e); //double kullanmamızın sebebi daha hassas hesaplama yapmak.
		//.16 ise noktadan sonra 15 basamak göstermesini için.
		//.16 sonraki basamaga göre 15.basamagı yuvarlar.
		//c'de pythondaki gibi precision kütüphanesi yok yada ben bulamadım.
		//kaynak:http://stackoverflow.com/questions/9213340/how-to-set-precision-of-a-float
	}	//2.7182818284590455   asagida basamak azaldigindan sayiyi yuvarlanmış sekilde yazdiriyor.
		//2.718281828459046 
	
	return 0;
}
