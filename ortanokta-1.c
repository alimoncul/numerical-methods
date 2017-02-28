#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float f(float x) //f fonksiyonunu tanimliyoruz.
{				
	float f;
	f=pow(x,2)-2*x-3;
	return f;
}
int main(int argc, char *argv[]) 
{
	float x1,x2,xr;			
	int i ;	// for icin i olusturuyoruz.
	printf("Ilk deger icin tahmininizi giriniz: ");
	scanf("%f",&x1);
	printf("Ikinci deger icin tahmininizi giriniz: ");
	scanf("%f",&x2);
	if(f(x1)*f(x2)==0)					//eger fonksiyonda x1 veya x2 yazinca goruntu olarak 0 veriyorsa, x1 veya x2 koklerden biridir.
	{
		printf("Girdiginiz degerlerden biri denklemin kokudur.\n");
	}
	else if(f(x1)*f(x2)>0)				//iki tahmininde fonksiyondaki goruntuleri pozitif veya negatifse kok yoktur veya birden cok kok vardir.
	{								
		printf("Girdiginiz aralikta denklemin bir koku yoktur.\n"); //
	}
	else
	{
		for(i=1;i<=100;i++)				//100 adima kadar islemi surduruyor.
		{
			xr=(x1+x2)/2;				//tahminlerin orta noktasini alarak gercek koke yaklasiyor.
				if(f(xr)==0)
					{
						printf("Denklemin koku bulundu : %f - Adim: %d ",xr,i);
						break;
					}
				else if(f(x1)*f(xr)<0)
					{
						x2=xr;
					}
				else
					{
						x1=xr;
					}
				printf("%.16f\n",xr);
		}
	}
	// 0 ve 500 degerlerini girdiginizde cikti olarak:
	//	250.0000000000000000
	//	125.0000000000000000
	//	62.5000000000000000
	//	31.2500000000000000
	//	15.6250000000000000
	//	7.8125000000000000
	//	3.9062500000000000
	//	1.9531250000000000
	//	2.9296875000000000
	//	3.4179687500000000
	//	3.1738281250000000
	//	3.0517578125000000
	//	2.9907226562500000
	//	3.0212402343750000
	//	3.0059814453125000
	//	2.9983520507812500
	//	3.0021667480468750
	//	3.0002593994140625
	//	2.9993057250976563
	//	2.9997825622558594
	//	3.0000209808349609
	//	2.9999017715454102
	//	2.9999613761901855
	//	2.9999911785125732
	//	3.0000061988830566
	//	2.9999985694885254
	//	3.0000023841857910
	//	3.0000004768371582
	//	2.9999995231628418
	//	Denklemin koku bulundu : 3.000000 - Adim: 30
	return 0;
}
