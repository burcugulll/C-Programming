#include <stdio.h>       //20010011066
#include <stdlib.h>      //BURCU GÜL
#include <string.h>
#include <locale.h>
typedef struct Motor //Motosikletin sahip olduğu özellikler
{
    int plakakod;
    char marka[25];
    char tur[25];
    char renk[25];
    int model;
    int kilometre;
    int cc;
    int vites;
    int km;
    int yakit;
    int hasar;
    int sepet;
    int boya;
    int fiyat;

}motor;
typedef struct Kisi  //Motosiklet sahibinin bilgileri
{
    char isim[20];
    int motorsayi;
    motor* motorlar;

}kisi;

kisi* kisiler;

int kisisayi=0;

void ekleme(char isim[20],int motorsayi) //Motosiklet ekleme
{
    if(kisisayi==0)
    {
        kisiler=(kisi*)malloc(sizeof(kisi));
    }
    else
    {
        kisiler=(kisi*)realloc(kisiler,sizeof(kisi)*(kisisayi+1));
    }

    strcpy((kisiler+kisisayi)->isim,isim);
    (kisiler+kisisayi)->motorsayi=motorsayi;
    (kisiler+kisisayi)->motorlar=(motor*)malloc(sizeof(motor)*motorsayi);

    for(int i=0;i<motorsayi;i++)  //Motosiklet bilgilerinin alındığı kısım
    {
        printf("%d.Motorun plaka kodu: ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->plakakod);
        printf("%d.Motorun markasi: ",i+1);
        scanf("%s",&((kisiler+kisisayi)->motorlar+i)->marka);
        printf("%d.Motorun turu: ",i+1);
        scanf("%s",&((kisiler+kisisayi)->motorlar+i)->tur);
        printf("%d.Motorun rengi: ",i+1);
        scanf("%s",&((kisiler+kisisayi)->motorlar+i)->renk);
        printf("%d.Motorun modeli: ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->model);
        printf("%d.Motorun kilometresi: ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->kilometre);
        printf("%d.Motorun silindir hacmi: ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->cc);
        printf("%d.Motorun vites sayisi: ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->vites);
        printf("%d.Motorun max ulasabilecegi hiz siniri: ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->km);
        printf("%d.Motorun alabilecegi max yakit: ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->yakit);
        printf("%d.Motorun hasar miktari '1-cok','2-orta','3-az','4-yok': ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->hasar);
        printf("%d.Motorun sepeti var mi '1-var','2-yok': ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->sepet);
        printf("%d.Motor boyali mi '1-evet','2-hayir': ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->boya);
        printf("%d.Motorun fiyati: ",i+1);
        scanf("%d",&((kisiler+kisisayi)->motorlar+i)->fiyat);
        printf("\n");
    }
    kisisayi++;
}

void listeleme()  // Girilen motosiklet bilgilerinin ekranda gösterilmesi
{
    for(int i=0;i<kisisayi;i++)
    {
        printf("%d.Motor sahibinin adi: %s \n",i+1,(kisiler+i)->isim);
        printf("Motor sahibinin motor sayisi: %d \n",(kisiler+i)->motorsayi);
        for(int j=0;j<(kisiler+i)->motorsayi;j++)
        {
        printf("%d.Motorun plaka kodu:%d \n",j+1,((kisiler+i)->motorlar+j)->plakakod);
        printf("%d.Motorun markasi:%s \n",j+1,((kisiler+i)->motorlar+j)->marka);
        printf("%d.Motorun turu:%s \n",j+1,((kisiler+i)->motorlar+j)->tur);
        printf("%d.Motorun rengi:%s \n",j+1,((kisiler+i)->motorlar+j)->renk);
        printf("%d.Motorun modeli:%d \n",j+1,((kisiler+i)->motorlar+j)->model);
        printf("%d.Motorun kilometresi:%d \n",j+1,((kisiler+i)->motorlar+j)->kilometre);
        printf("%d.Motorun silindir hacmi:%d \n",j+1,((kisiler+i)->motorlar+j)->cc);
        printf("%d.Motorun vites sayisi:%d \n",j+1,((kisiler+i)->motorlar+j)->vites);
        printf("%d.Motorun max ulasabilecegi hiz siniri:%d \n",j+1,((kisiler+i)->motorlar+j)->km);
        printf("%d.Motorun alabilecegi max yakit:%d \n",j+1,((kisiler+i)->motorlar+j)->yakit);
        printf("%d.Motorun hasar miktari '1-cok','2-orta','3-az','4-yok':%d \n",j+1,((kisiler+i)->motorlar+j)->hasar);
        printf("%d.Motorun sepeti var mi '1-var','2-yok':%d \n",j+1,((kisiler+i)->motorlar+j)->sepet);
        printf("%d.Motor boyali mi '1-evet','2-hayir':%d \n",j+1,((kisiler+i)->motorlar+j)->boya);
        printf("%d.Motorun fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat);
        printf("\n");
        }
    }
}

void guncelleme(int motorshb)  //Motosiklet bilgilerinin güncelleneceği kısım
{
    if(motorshb<=0|| motorshb>kisisayi)
    {
        printf("Girilen bilgilere gore motor sahibi bulunamadi\n");
    }
    else
    {
        printf("Guncellenecek motor sahibinin bilgileri:\n");

        for(int i=0;i<(kisiler+(motorshb-1))->motorsayi;i++)
        {
            printf("%d.Motorun plaka kodu:%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->plakakod);
            printf("%d.Motorun markasi:%s\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->marka);
            printf("%d.Motorun turu:%s\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->tur);
            printf("%d.Motorun rengi:%s\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->renk);
            printf("%d.Motorun modeli:%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->model);
            printf("%d.Motorun kilometresi:%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->kilometre);
            printf("%d.Motorun silindir hacmi:%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->cc);
            printf("%d.Motorun vites sayisi:%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->vites);
            printf("%d.Motorun max ulasabilecegi hiz siniri:%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->km);
            printf("%d.Motorun alabilecegi max yakit:%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->yakit);
            printf("%d.Motorun hasar miktari '1-cok','2-orta','3-az','4-yok':%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->hasar);
            printf("%d.Motorun sepeti var mi '1-var','2-yok':%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->sepet);
            printf("%d.Motor boyali mi '1-evet','2-hayir':%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->boya);
            printf("%d.Motorun fiyati:%d\n",i+1,(((kisiler+(motorshb-1))->motorlar)+i)->fiyat);
            printf("\n");
        }
        int hmotor;
        printf("Kacinci motoru guncellemek istiyorsunuz: ");
        scanf("%d",&hmotor);
        if(hmotor<=0||hmotor>(kisiler+(motorshb-1))->motorsayi)
        {
            printf("Girilen bilgilere gore motor bulunamadi\n");
        }
        else
        {
            printf("%d.Motorun yeni plaka kodu:",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->plakakod);
            printf("%d.Motorun yeni markasi:",motorshb);
            scanf("%s",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->marka);
            printf("%d.Motorun yeni turu:",motorshb);
            scanf("%s",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->tur);
            printf("%d.Motorun yeni rengi:",motorshb);
            scanf("%s",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->renk);
            printf("%d.Motorun yeni modeli:",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->model);
            printf("%d.Motorun yeni kilometresi:",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->kilometre);
            printf("%d.Motorun yeni silindir hacmi:",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->cc);
            printf("%d.Motorun yeni vites sayisi:",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->vites);
            printf("%d.Motorun yeni ulasabilecegi max hiz siniri:",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->km);
            printf("%d.Motorun yeni alabilecegi max yakit:",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->yakit);
            printf("%d.Motorun yeni hasar miktari '1-cok','2-orta','3-az','4-yok':",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->hasar);
            printf("%d.Motorun yeni sepeti var mi '1-var','2-yok':",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->sepet);
            printf("%d.Motorun yeni boya turu '1-evet','2-hayir':",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->boya);
            printf("%d.Motorun yeni fiyati:",motorshb);
            scanf("%d",&(((kisiler+(motorshb-1))->motorlar)+(hmotor-1))->fiyat);
        }
    }
}

void silme(int motorshb) //Motosiklet sahibi siliniyor
{
     if(motorshb<=0||motorshb>kisisayi)
     {
         printf("Girilen bilgilere gore motor sahibi yok\n");
     }
     else
     {
         for(int i=motorshb;i<kisisayi;i++)
         {
             *(kisiler+(i-1))=*(kisiler+i);
         }
         kisisayi--;
         kisiler=(kisi*)realloc(kisiler,sizeof(kisi)*kisisayi);
     }
}

void piyasa()  //Girilen bilgilere göre bazı sitelerdeki yeni fiyatlar
{
    int cok_hasar,orta_hasar,az_hasar,hasarsiz,boyasiz,boyali,sepetli,sepetsiz;
    cok_hasar=500;
    orta_hasar=250;
    az_hasar=125;
    hasarsiz=0;
    boyasiz=0;
    boyali=150;
    sepetli=250;
    sepetsiz=0;
    int sahibinden=175;
    int arabam=100;
    int letgo=150;
    int komisyon=125;

    for(int i=0;i<kisisayi;i++)
    {
        printf("%d.Motor sahibinin adi:%s \n",i+1,(kisiler+i)->isim);
        printf("Motor sahibinin motor sayisi:%d \n",(kisiler+i)->motorsayi);
        printf("\n");
        for(int j=0;j<(kisiler+i)->motorsayi;j++)
        {
            printf("%d.Motorun cok hasarli,boyasiz,sepetli fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-cok_hasar+sepetli);
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(cok_hasar+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(cok_hasar+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(cok_hasar+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(cok_hasar+komisyon));
            printf("\n");

            printf("%d.Motorun cok hasarli,boyasiz,sepetsiz fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-cok_hasar);
             printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(cok_hasar+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(cok_hasar+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(cok_hasar+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(cok_hasar+komisyon));
            printf("\n");

            printf("%d.Motorun cok hasarli,boyali,sepetli fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(cok_hasar+boyali));
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(cok_hasar+boyali+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(cok_hasar+boyali+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(cok_hasar+boyali+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(cok_hasar+boyali+komisyon));
            printf("\n");

            printf("%d.Motorun cok hasarli,boyali,sepetsiz fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(cok_hasar+boyali));
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(cok_hasar+boyali+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(cok_hasar+boyali+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(cok_hasar+boyali+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(cok_hasar+boyali+komisyon));
            printf("\n");

            printf("%d Motorun orta hasarli,boyasiz,sepetli fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-orta_hasar);
            printf("%d Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(orta_hasar+letgo));
            printf("%d Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(orta_hasar+sahibinden));
            printf("%d Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(orta_hasar+arabam));
            printf("%d Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(orta_hasar+komisyon));
            printf("\n");

            printf("%d.Motorun orta hasarli,boyali,sepetsiz fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(orta_hasar+boyali));
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(orta_hasar+boyali+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(orta_hasar+boyali+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(orta_hasar+boyali+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(orta_hasar+boyali+komisyon));
            printf("\n");

            printf("%d.Motorun orta hasarli,boyali,sepetli fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(orta_hasar+boyali));
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(orta_hasar+boyali+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(orta_hasar+boyali+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(orta_hasar+boyali+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(orta_hasar+boyali+komisyon));
            printf("\n");

            printf("%d.Motorun az hasarli,boyasiz,sepetsiz fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-az_hasar);
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(az_hasar+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(az_hasar+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(az_hasar+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(az_hasar+komisyon));
            printf("\n");

            printf("%d.Motorun az hasarli,boyasiz,sepetli fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-az_hasar);
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(az_hasar+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(az_hasar+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(az_hasar+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(az_hasar+komisyon));
            printf("\n");

            printf("%d.Motorun az hasarli,boyali,sepetsiz fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(az_hasar+boyali));
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(az_hasar+boyali+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(az_hasar+boyali+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(az_hasar+boyali+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(az_hasar+boyali+komisyon));
            printf("\n");

            printf("%d.Motorun az hasarli,boyali,sepetli fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(boyali+az_hasar));
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(boyali+az_hasar+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(boyali+az_hasar+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(boyali+az_hasar+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(boyali+az_hasar+komisyon));
            printf("\n");

            printf("%d.Motorun hasarsiz,boyasiz,sepetsiz fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat);
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-letgo);
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-sahibinden);
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-arabam);
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-komisyon);
            printf("\n");

            printf("%d.Motorun hasarsiz,boyasiz,sepetli fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli);
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-letgo);
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-sahibinden);
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-arabam);
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-komisyon);
            printf("\n");

            printf("%d.Motorun hasarsiz,boyali,sepetsiz fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-boyali);
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(boyali+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(boyali+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(boyali+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat-(boyali+komisyon));
            printf("\n");

            printf("%d.Motorun hasarsiz,boyali,sepetli fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-boyali);
            printf("%d.Motorun letgo.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(boyali+letgo));
            printf("%d.Motorun sahibinden.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(boyali+sahibinden));
            printf("%d.Motorun arabam.com kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(boyali+arabam));
            printf("%d.Motora firmamizin kesintili fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat+sepetli-(boyali+komisyon));
            printf("\n");
        }
    }
}

void kiralama()  //Motor kiralama ve motor sahibinin bilgileri
{
    int gun;
    printf("Motoru kac gunlugune kiralamak istiyorsunuz '1-2-3' :");
    scanf("%d",&gun);
    if(gun==1)
    {
        printf("1 gunluk motor kiralama fiyati 200 tl dir\n");
        for(int i=0;i<kisisayi;i++)
        {
            printf("%d.Motor sahibinin adi:%s \n",i+1,(kisiler+i)->isim);
            printf("Motor sahibinin motorlarinin sayisi:%d \n",(kisiler+i)->motorsayi);
            for(int j=0;j<(kisiler+i)->motorsayi;j++)
            {
                printf("Kiralamak istediginiz %d. aracin orjinal fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat);
            }
        }
    }
    else if(gun==2)
    {
        printf("2 gunlugune motor kiralama fiyati 300 tl dir\n");
        for(int i=0;i<kisisayi;i++)
        {
            printf("%d.Motor sahibinin adi:%s \n",i+1,(kisiler+i)->isim);
            printf("Motor sahibinin motorlarinin sayisi:%d \n",(kisiler+i)->motorsayi);
            for(int j=0;j<(kisiler+i)->motorsayi;j++)
            {
                printf("Kiralamak istediginiz %d. aracin orjinal fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat);
            }
        }
    }
    else if(gun==3)
    {
        printf("3 gunlugune motor kiralama fiyati 400 tl dir\n");
        for(int i=0;i<kisisayi;i++)
        {
            printf("%d.Motor sahibinin adi:%s \n",i+1,(kisiler+i)->isim);
            printf("Motor sahibinin motorlarinin sayisi:%d \n",(kisiler+i)->motorsayi);
            for(int j=0;j<(kisiler+i)->motorsayi;j++)
            {
                printf("Kiralamak istediginiz %d. aracin orjinal fiyati:%d \n",j+1,((kisiler+i)->motorlar+j)->fiyat);
            }
        }
    }
    else
    {
        printf("Hatali numara girdiniz.");
    }
}
int main()
{
    int secim;
    int dongu=1;
    while(dongu) //Menü kullanıcı çıkmak istemediği sürece ekranda gösterilecek
    {
        printf("1.Ekleme\n2.Listeleme\n3.Guncelleme\n4.Silme\n5.Piyasa\n6.Kiralama\n0.Cikis\n");
        printf("islem yapmak istediginiz numarayi giriniz:  ");
        scanf("%d",&secim);
        char isim[20];
        int motorsayi;
        int motorshb;
        switch(secim)
        {
        case 1:
            printf("Eklemek istediginiz motor sahibinin ismi nedir: ");
            scanf("%s",isim);
            printf("%s isimli motor sahibinin kac tane motoru var: ",isim);
            scanf("%d",&motorsayi);
            ekleme(isim,motorsayi);
            break;
        case 2:
            listeleme();
            break;
        case 3:
            printf("Kacinci motor sahibini guncellemek istiyorsunuz: ");
            scanf("%d",&motorshb);
            guncelleme(motorshb);
            break;
        case 4:
            printf("Kacinci motor sahibini silmek istiyorsunuz: ");
            scanf("%d",&motorshb);
            listeleme();
            silme(motorshb);
            break;
        case 5:
            piyasa();
            break;
        case 6:
            kiralama();
            break;
        case 0:
            dongu=0;
            printf("Cikis yaptiniz\n");
            break;
        default:
            printf("Hatali numara girdiniz\n");
        }
        printf("Devam etmek istiyorsaniz herhangi bir tusa basiniz.");
        getch();
        system("cls");
    }
    return 0;
}
