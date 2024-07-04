#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char metin[100], aranan[15];
    int uzunluk_metin = 0, uzunluk_aranan = 0, i, j, sayac, toplamsayac = 0;

    printf("Icinde arama yapilacak metni giriniz: ");
    fgets(metin, sizeof(metin), stdin);
    metin[strcspn(metin, "\n")] = '\0'; // fgets ile alýnan metnin sonundaki newline karakterini kaldýrma

    printf("Aranacak metni giriniz: ");
    fgets(aranan, sizeof(aranan), stdin);
    aranan[strcspn(aranan, "\n")] = '\0'; // fgets ile alýnan aranan metnin sonundaki newline karakterini kaldýrma

    uzunluk_metin = strlen(metin);
    uzunluk_aranan = strlen(aranan);

    for (i = 0; i <= uzunluk_metin - uzunluk_aranan; i++)
    {
        j = 0;
        sayac = 0;
        if (metin[i] == aranan[j])
        {
            sayac++;
            for (j = 1; j < uzunluk_aranan; j++)
            {
                if (metin[i + j] == aranan[j])
                {
                    sayac++;
                }
            }
        }
        if (sayac == uzunluk_aranan)
        {
            toplamsayac++;
        }
    }

    printf("\n%s metni icerisinde %s ifadesi %d kez gecmektedir.\n", metin, aranan, toplamsayac);
    return 0;
}
