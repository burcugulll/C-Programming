#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int faktoriyel=1;
    printf("faktoriyeli hesaplanacak sayiyi giriniz: ");
    scanf("%d",&sayi);
    while(sayi!=0)
    {
        printf("%d\n",sayi);
        faktoriyel=faktoriyel*sayi;
        sayi--;
    }
    printf("faktoriyel:%d",faktoriyel);
    return 0;
}
