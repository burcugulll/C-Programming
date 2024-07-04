#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*1-100 arasýnda rastgele bir pozitif tam sayý belirleyin (rand()%100)
    kullaniciya 5 secim hakký vererek onu asagý yukari seklinde yonlendirin
    kullanici sayiyi dogru tahmin ederse tebrikler mesaji tum haklarinni kullnamayip bilemediyse uzgunuz kaybettiniz sayi xx di mesajini ekrana yazdirin
    */
    srand(time(NULL));
    int sayi=(rand()%100)+1;
    int tahmin;
    int hamle=0;
    int hamle_sayisi=5;
    printf("*********Rastgele belirlenen sayi: %d\n*******", sayi);
    while (hamle<hamle_sayisi)
    {
        printf("1 ile 100 arasinda sayi tahmin et: ");
        scanf("%d",&tahmin);
        hamle+=1;

        if(tahmin==sayi)
        {
            printf("tebrikler %d hamlede bildin sayi %d idi",hamle,sayi);
            break;
        }
        else if(sayi<tahmin)
        {
            printf("daha kucuk sayi girin\nkalan hamle sayisi: %d\n",hamle_sayisi-hamle);
        }
        else
        {
            printf("daha buyuk sayi girin\nkalan hamle sayisi: %d\n",hamle_sayisi-hamle);
        }
    }
      if (hamle == hamle_sayisi && tahmin != sayi) {
        printf("Uzgunuz, kaybettiniz. Sayi %d idi.\n", sayi);
    }



    return 0;
}
