#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[50];
    char karakter;
    int adet;
    printf("metin giriniz(bosluk birakmadan): ");
    scanf(" %s",metin);
    //gets(metin);
    printf("karakter giriniz: ");
    scanf(" %c",&karakter);
    int i;
    for(i=0;metin[i]!='\0';i++)
    {
        if(metin[i]==karakter)
        adet++;
    }
    printf("%c harfinden %d adet var",karakter,adet);
    return 0;
}
