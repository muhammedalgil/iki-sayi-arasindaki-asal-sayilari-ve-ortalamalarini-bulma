#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("**** 2 Sayi Arasindaki Asal Sayilar Ve Ortalamalari ****"); // printf kullanarak baþlýðý koydum.
	printf("\n\n"); // printf kullanarak araya bir satýr boþluk býraktým.
	
	int sayi1,sayi2,i,j; // integerde kullanacaðým deðiþkenleri tanýmladým.
	int sayac;
	int toplam,tane;
	float ort; // ortalama tam gelmez diye ort'u floatta tanýmladým.
	toplam=0; // baþlangýç olarak toplamý 0 kabul ettim.
	
	printf("Birinci sayiyi giriniz: "); // printf kullanarak kullanýcýdan 1.sayýyý girmesini istedim.
	scanf("%d",&sayi1); // scanf kullanarak kullanýcadan 1.sayýyý aldým.
	
	printf("Ikinci sayiyi giriniz: "); // printf kullanarak kullanýcýdan 2.sayýyý girmesini istedim.
	scanf("%d",&sayi2); // scanf kullanarak kullanýcýdan 2.sayýyý aldým.
	
	if(sayi1<sayi2) // ilk durumda sayý1'i sayý2'den küçük kabul ettim.
	{
		for(i=sayi1+1;i<sayi2;i++) // integerde tanýmladýðým i'yi for döngüsü içerisinde küçük olan sayýnýn 1 fazlasýndan baþlatýp büyük olan sayýya kadar birer birer arttýrdým.
		{
			sayac=0; // baþlangýç olarak sayacý 0 kabul ettim.
			for(j=2;j<i;j++) // integerde tanýmladýðým j'yi for döngüsü içerisinde 2'den baþlatýp i'ye kadar birer birer arttýrdým.j'yi 2'den baþlatmamýn nedeni her sayýnýn 1'e tam bölünmesi ve her sayýnýn 0'a bölümünün tanýmsýz olmasaydý.en küçük deðer olarak 2 girebilirdim. 
			{
				if(i%j==0) // if fonksiyonu içerisinde i'nin j'ye göre modunu aldým.sonuçta her ikiside döngü içerisinde sürekli artacaðý için i'nin 1'den baþka sayýlara tam bölünüp bölünmediðine bakabilmek için modunu aldým.
				{
					sayac++; // eðer sayý 1'den baþka bir sayýya tam bölünebiliyorsa sayacý 1 arttýrdým.i'nin modu j'ye göre 0 deðilse sayaç 1 artacak.
				}
			}
			if(sayac==0 && sayi1>=0) // eðer sayaç artmamýþsa sayý asaldýr. 
			{
				printf("%d\n",i); // printf kullanarak iki sayý arasýndaki asal sayýlarý ekrana yazdýrdým.
				toplam=toplam+i; // toplamý 0 kabul etmiþtim.i döngünün içinde olduðu için sadece asal sayýlarý toplayacak.
				tane++; // kaç tane asal olduðunu belirlemek için döngü bitene kadar taneyi birer birer arttýrdým. 
			}
		}
		if(tane>0) // eðer ekrana 0'dan fazla sayý çýkarsa 
		{
			ort=(float) toplam/tane; // ortalamayý ondalýklý çýkar diye float deðiþkeninde yazdým.
			printf("Ortalama= %.2f ",ort); // printf kullanarak ortalamayý ekrana yazdýrdým.
		}
		else
		{
			printf("Aralarinda asal sayi yok."); // eðer aralarýnda asal yoksa diye printf ile aralarýnda asal sayý yok yazdýrdým.
		}
	}
	if(sayi2<sayi1) // yukarýdakilerin aynýsýný sayýlarýn yerlerini deðiþtirerek yaptým.
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
