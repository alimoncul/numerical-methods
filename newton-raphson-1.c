#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float f(float x) // f fonksiyonunu tanimliyoruz.
{
	float f;
	f=(pow(x,2)-2*x-3);
	return f;
}
float fi(float x) // f'in turevini tanimliyoruz.
{
	float fi;
	fi=(2*x-2);
	return fi;
}
float hatapayi(float x1,float x2) // hatapayini hesaplayan fonksiyonu tanimliyoruz.
{
	float hata=((x1-x2)/x2);
	return hata;
}
int main(int argc, char *argv[]) 
{
	float x1,x2,i;
	printf("Baslangic degerini girin: "); 
	scanf("%f",&x1);
	for(i=0;i<10;i++)
	{
		x2=x1-f(x1)/fi(x1);
		printf("x1:%10f \tx2:%10f \thatapayi:%10f \n",x1,x2,hatapayi(x1,x2));
		x1 = x2;
	}
	return 0;
}
