#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[30];
    char ters_metin[30];
    int i;
    int boyut=0;
    printf("metin giriniz(bosluk birakmadan): ");
    scanf("%s",&metin);
    for(i=0;metin[i]!='\0';i++)//0b 1u 2r 3c 4u 0u 1c 2r 3u 4b
    {
        boyut++;
    }
    for(i=0;i<boyut;i++)
    {
        ters_metin[i]=metin[boyut-(i+1)];
    }
    printf("%s",ters_metin);
    return 0;
}
