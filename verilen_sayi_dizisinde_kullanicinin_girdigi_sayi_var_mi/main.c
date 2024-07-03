#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[15]={11,23,43,55,61,11,21,88,43,54,66,21,4,6,9};
    int aranan_sayi,boyut,i,aranan_sayi_indis=-1;
    printf("Aranacak sayiyi giriniz: ");
    scanf("%d",&aranan_sayi);
    boyut=sizeof(sayilar)/sizeof(sayilar[0]);

    for(i=0; i<boyut; i++)
    {
        if(aranan_sayi==sayilar[i])
        {
            aranan_sayi_indis=i;
            break;
        }
    }
    if(aranan_sayi_indis!=-1)
    {
       printf("dizi icerisindeki %d sayisi %d. indiste bulunmaktadir",aranan_sayi,aranan_sayi_indis);

    }
    else
    {
        printf("dizi icerisinde %d sayisi bulunamadi",aranan_sayi);
    }

    return 0;
}
