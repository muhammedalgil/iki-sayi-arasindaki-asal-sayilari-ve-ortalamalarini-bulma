#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("**** 2 Sayi Arasindaki Asal Sayilar Ve Ortalamalari ****"); // printf kullanarak ba�l��� koydum.
	printf("\n\n"); // printf kullanarak araya bir sat�r bo�luk b�rakt�m.
	
	int sayi1,sayi2,i,j; // integerde kullanaca��m de�i�kenleri tan�mlad�m.
	int sayac;
	int toplam,tane;
	float ort; // ortalama tam gelmez diye ort'u floatta tan�mlad�m.
	toplam=0; // ba�lang�� olarak toplam� 0 kabul ettim.
	
	printf("Birinci sayiyi giriniz: "); // printf kullanarak kullan�c�dan 1.say�y� girmesini istedim.
	scanf("%d",&sayi1); // scanf kullanarak kullan�cadan 1.say�y� ald�m.
	
	printf("Ikinci sayiyi giriniz: "); // printf kullanarak kullan�c�dan 2.say�y� girmesini istedim.
	scanf("%d",&sayi2); // scanf kullanarak kullan�c�dan 2.say�y� ald�m.
	
	if(sayi1<sayi2) // ilk durumda say�1'i say�2'den k���k kabul ettim.
	{
		for(i=sayi1+1;i<sayi2;i++) // integerde tan�mlad���m i'yi for d�ng�s� i�erisinde k���k olan say�n�n 1 fazlas�ndan ba�lat�p b�y�k olan say�ya kadar birer birer artt�rd�m.
		{
			sayac=0; // ba�lang�� olarak sayac� 0 kabul ettim.
			for(j=2;j<i;j++) // integerde tan�mlad���m j'yi for d�ng�s� i�erisinde 2'den ba�lat�p i'ye kadar birer birer artt�rd�m.j'yi 2'den ba�latmam�n nedeni her say�n�n 1'e tam b�l�nmesi ve her say�n�n 0'a b�l�m�n�n tan�ms�z olmasayd�.en k���k de�er olarak 2 girebilirdim. 
			{
				if(i%j==0) // if fonksiyonu i�erisinde i'nin j'ye g�re modunu ald�m.sonu�ta her ikiside d�ng� i�erisinde s�rekli artaca�� i�in i'nin 1'den ba�ka say�lara tam b�l�n�p b�l�nmedi�ine bakabilmek i�in modunu ald�m.
				{
					sayac++; // e�er say� 1'den ba�ka bir say�ya tam b�l�nebiliyorsa sayac� 1 artt�rd�m.i'nin modu j'ye g�re 0 de�ilse saya� 1 artacak.
				}
			}
			if(sayac==0 && sayi1>=0) // e�er saya� artmam��sa say� asald�r. 
			{
				printf("%d\n",i); // printf kullanarak iki say� aras�ndaki asal say�lar� ekrana yazd�rd�m.
				toplam=toplam+i; // toplam� 0 kabul etmi�tim.i d�ng�n�n i�inde oldu�u i�in sadece asal say�lar� toplayacak.
				tane++; // ka� tane asal oldu�unu belirlemek i�in d�ng� bitene kadar taneyi birer birer artt�rd�m. 
			}
		}
		if(tane>0) // e�er ekrana 0'dan fazla say� ��karsa 
		{
			ort=(float) toplam/tane; // ortalamay� ondal�kl� ��kar diye float de�i�keninde yazd�m.
			printf("Ortalama= %.2f ",ort); // printf kullanarak ortalamay� ekrana yazd�rd�m.
		}
		else
		{
			printf("Aralarinda asal sayi yok."); // e�er aralar�nda asal yoksa diye printf ile aralar�nda asal say� yok yazd�rd�m.
		}
	}
	if(sayi2<sayi1) // yukar�dakilerin ayn�s�n� say�lar�n yerlerini de�i�tirerek yapt�m.
	{
		for(i=sayi2+1;i<sayi1;i++)
		{
			sayac=0;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					sayac++;
				}
			}
			if(sayac==0 && sayi2>=1)
			{
				printf("%d\n",i);
				toplam=toplam+i;
				tane++;
			}
		}
		if(tane>0)
		{
		    ort=(float) toplam/tane;
			printf("Ortalama= %.2f",ort);
		}
		else
		{
			printf("Aralarinda asal sayi yok.");
		}
	}
	
	return 0;
}
