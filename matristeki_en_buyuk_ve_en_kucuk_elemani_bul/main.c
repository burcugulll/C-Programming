#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[4][3]={{10,-6,5},{20,32,-20},{10,56,-20},{10,12,-30}};
    int satirsayisi=sizeof(matris)/sizeof(matris[0]);
    int sutunsayisi=sizeof(matris[0])/sizeof(matris[0][0]);
    int i,j,satir,sutun,satir2,sutun2;
    int en_buyuk=matris[0][0];
    int en_kucuk=matris[0][0];
    for(i=0;i<satirsayisi;i++)
    {
        for(j=0;j<sutunsayisi;j++)
        {
            if(matris[i][j]>en_buyuk)
            {
                en_buyuk=matris[i][j];
                satir=i+1;
                sutun=j+1;
            }
            else if(matris[i][j]<en_kucuk);
            {
                en_kucuk=matris[i][j];
                satir2=i+1;
                sutun2=j+1;
            }
        }
    }
    printf("en buyuk eleman:%d\t%d.satirin%d.sutunu\n",en_buyuk,satir,sutun);
    printf("en kucuk eleman:%d\t%d.satirin%d.sutunu",en_kucuk,satir2,sutun2);
    return 0;
}
