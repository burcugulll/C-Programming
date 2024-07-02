#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,toplam = 0;
    int i;
    printf("Mukkemmel sayilar kendisi haric tum pozitif bolenlerinin toplamina esit olan sayilara denir.\n");

    printf("Sayi giriniz :");
    scanf("%d",&sayi);

    for(i=1;i<sayi;i++)
    {
        if(sayi%i==0)
        {
            toplam +=i;
            printf("%d\n",i);
        }
    }
    if(sayi == toplam)
    {
        printf("%d sayisi bir mukkemmel sayidir\n", sayi);
    }
    else
    {
        printf("%d sayisi bir mukkemmel sayi degildir\n", sayi);
    }
    return 0;
}
