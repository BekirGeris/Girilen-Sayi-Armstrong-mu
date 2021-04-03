#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sayi,i=0,dizi[100],a,toplam = 0;
	printf("bir sayi giriniz");
	scanf("%d",&sayi);
	a = sayi;
	while(sayi > 0)
	{
	dizi[i]= sayi % 10;
	sayi = sayi / 10;	
	i = i + 1;	
	}	
	for(i=i-1;i>=0;i--)
	{
		toplam = toplam + dizi[i]*dizi[i]*dizi[i];
	}
	if(toplam == a)
       printf("%d sayisi Armstrong sayidir ",a);
	else
	   printf("%d sayisi Armstrong sayi degildir",a);	
	return 0;
}
