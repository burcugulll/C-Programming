#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[4][5]={{1,2,4,3,4},{5,4,3,3,2},{2,3,2,3,2},{-1,2,3,4,2}};
    int toplam=0,satirtoplam,i,j;
    float ortalama,ortalamalar[4];
    int satirsayisi=sizeof(matris)/sizeof(matris[0]);
    int sutunsayisi=sizeof(matris[0])/sizeof(matris[0][0]);
    for (i=0;i<satirsayisi;i++)
    {
        satirtoplam=0;//burada sýfýrladým cunku her dongüde toplamin deðiþmesi gerekiyor
        for(j=0;j<sutunsayisi;j++)
        {
            toplam+=matris[i][j];
            satirtoplam+=matris[i][j];
        }
        ortalamalar[i]=(float)satirtoplam/sutunsayisi;
    }
    ortalama=(float)toplam/(satirsayisi*sutunsayisi);

    float fark1;
    float fark=fabs(ortalamalar[0]-ortalama);//fabs mutlak degeri gösteriyor standart kutuphanede tanýmlanmýþ
    int enyakinindex=0;
    for(i=0;i<satirsayisi;i++)
    {
        fark1=fabs(ortalamalar[i]-ortalama);
        if(fark1<fark)
        {
            fark=fark1;
            enyakinindex=i;
        }
    }
    for(i=0;i<satirsayisi;i++)
    {
        for(j=0;j<sutunsayisi;j++)
        {
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
    printf("ortalama=%f\nEn yakin ortalama=%f\nEn yakin index=%d",ortalama,ortalamalar[enyakinindex],enyakinindex);


    return 0;
}
