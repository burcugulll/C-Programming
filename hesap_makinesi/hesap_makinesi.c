#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("------------------------HESAP MAKINESI------------------------\n");
    printf("**********MENU**********");
    int secim;
    float sayi1,sayi2,sayi,sonuc;
    while(1==1)
    {
        printf("\nBasit ayarlar icin 1\nGelismis ayarlar icin 2\nCikis yapmak icin 0 i seciniz: ");
        scanf("%d",&secim);
        if (secim==1)
        {
            printf("\nToplama icin 1\nCikarma icin 2\nCarpma icin 3\nBolme icin 4 e basiniz: ");
            scanf("%d",&secim);
            switch(secim)
            {
            case 1:
                printf("\nBirinci sayiyi giriniz: ");
                scanf("%f",&sayi1);
                printf("Ikinci sayiyi giriniz: ");
                scanf("%f",&sayi2);
                sonuc=sayi1+sayi2;
                printf("Toplama isleminizin sonucu: %.2f\n",sonuc);
                break;
            case 2:
                printf("\nBirinci sayiyi giriniz: ");
                scanf("%f",&sayi1);
                printf("Ikinci sayiyi giriniz: ");
                scanf("%f",&sayi2);
                sonuc=sayi1-sayi2;
                printf("Cikarma isleminizin sonucu: %.2f\n",sonuc);
                break;
            case 3:
                printf("\nBirinci sayiyi giriniz: ");
                scanf("%f",&sayi1);
                printf("Ikinci sayiyi giriniz: ");
                scanf("%f",&sayi2);
                sonuc=sayi1*sayi2;
                printf("Carpma isleminizin sonucu: %.2f\n",sonuc);
                break;
            case 4:
                printf("\nBirinci sayiyi giriniz: ");
                scanf("%f",&sayi1);
                printf("Ikinci sayiyi giriniz: ");
                scanf("%f",&sayi2);
                sonuc=sayi1/sayi2;
                printf("Bolme isleminizin sonucu: %.2f\n",sonuc);
                break;
            default:
                printf("\nHatali numara girdiniz.Tekrar deneyiniz\n");
            }
        }
        else if(secim==2)
        {
            printf("\nMod alma icin 1\nKarekok icin 2\nUs alma icin 3\nLogaritma icin 4 e basiniz: ");
            scanf("%d",&secim);
            switch(secim)
            {
            case 1:
                printf("\nModu alinacak sayiyi giriniz: ");
                scanf("%f",&sayi1);
                printf("Kaca gore modunu almak istiyorsunuz: ");
                scanf("%f",&sayi2);
                sonuc=(int)sayi1%(int)sayi2;
                printf("Mod alma isleminizin sonucu: %.1f\n",sonuc);
                break;
            case 2:
                printf("\nKarekoku alinacak sayiyi giriniz: ");
                scanf("%f",&sayi);
                sonuc=sqrt(sayi);
                printf("Karekok isleminizin sonucu: %.2f\n",sonuc);
                break;
            case 3:
                printf("\nTaban giriniz: ");
                scanf("%f",&sayi1);
                printf("Us giriniz: ");
                scanf("%f",&sayi2);
                sonuc=pow(sayi1,sayi2);
                printf("Us alma isleminizin sonucu: %.2f\n",sonuc);
                break;
            case 4:
                printf("\nLogaritmasi alinacak sayiyi giriniz: ");
                scanf("%f",&sayi);
                sonuc=log10(sayi);
                printf("Logaritma isleminizin sonucu: %.2f\n",sonuc);
                break;
            default:
                printf("\nHatali numara girdiniz.Tekrar deneyiniz\n");
            }
        }
        else if(secim==0)
        {
            printf("\nCikis yaptiniz");
            return 0;
        }
        else
        {
            printf("\nHatali numara girdiniz.Tekrar deneyiniz\n");
        }
    }
    return 0;
}
