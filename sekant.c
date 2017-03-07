#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float f(float x) // f fonksiyonunu tanimliyoruz 
{
	float f;
	f=(pow(x,2)-2*x-3);
	return f;
}
float hata(float x1,float x2) // hatapayini hesapliyoruz
{
	float hata=((x1-x2)/x2);
	return hata;
}
int main(int argc, char *argv[]) 
{
	float x1,x2,x3,i;
	printf("Birinci sayiyi girin: ");scanf("%f",&x1); // ilk tahmini okuyoruz
	printf("Ikinci sayiyi girin: ");scanf("%f",&x3);  // ikinci tahmini okuyoruz
	for(i=0;i<6;i++)
	{
		x2=x1 - (f(x1)*(x3-x1))/(f(x3)-f(x1));
		printf("x3:%8f \t x1:%8f \t x2:%8f \t hatapayi:%8f \n",x3,x1,x2,hata(x2,x1));
		x1=x3;
		x3=x2;
	}
	return 0;
}
