#include <stdio.h>
#include <stdlib.h>

int main()
{//kullanici cift sayi girerse boyut degerini bir arttýr
    int i,j,bosluksayisi,yildizsayisi,boyut;
    printf("boyut sayisini giriniz: ");
    scanf("%d",&boyut);
    if(boyut%2==0)
        boyut++;
    bosluksayisi=boyut/2;
    yildizsayisi=1;
    for(i=0;i<boyut;i++)
    {
        for(j=0;j<bosluksayisi;j++)
            printf(" ");
        for(j=0;j<yildizsayisi;j++)
        {
            if(j==0 || j==yildizsayisi-1)
                printf("*");
            else
                printf(" ");
        }
        if(i<boyut/2)
        {
            bosluksayisi--;
            yildizsayisi+=2;
        }
        else
        {
           bosluksayisi++;
            yildizsayisi-=2;
        }
        printf("\n");
    }

    return 0;
}
