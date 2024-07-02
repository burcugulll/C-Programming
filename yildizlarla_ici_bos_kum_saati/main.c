#include <stdio.h>
#include <stdlib.h>

int main()
{//boyut tek sayi giriilirse 1 artýrýlaak
    int i,j,bosluksayisi,yildizsayisi,boyut;
    printf("boyut sayisini giriniz: ");
    scanf("%d",&boyut);
    if(boyut%2==0)
        boyut++;
    bosluksayisi=0;
    yildizsayisi=boyut;
    for(i=0;i<boyut;i++)
    {
        for(j=0;j<bosluksayisi;j++)
            printf(" ");
        for(j=0;j<yildizsayisi;j++)
        {
            if(j==0 || j==yildizsayisi-1 || i==0 || i==boyut-1)
                printf("*");
            else
                printf(" ");
        }
        if(i<boyut/2)
        {
            bosluksayisi++;
            yildizsayisi-=2;
        }
        else
        {
            bosluksayisi--;
            yildizsayisi+=2;
        }
        printf("\n");
    }
    return 0;
}
