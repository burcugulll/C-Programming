#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[4][4]={{1,2,4,3},{5,3,3,2},{3,2,3,2},{2,3,4,2}};
    int toplam=0,i,j;
    int satirsayisi=sizeof(matris)/sizeof(matris[0]);
    int sutunsayisi=sizeof(matris[0])/sizeof(matris[0][0]);
    int A[satirsayisi],B[sutunsayisi];
    for (i=0;i<satirsayisi;i++)
    {
        A[i]=0;
        B[i]=0;
        for(j=0;j<sutunsayisi;j++)
        {
            A[i]+=matris[i][j];
            B[i]+=matris[j][i];
            toplam+=matris[i][j];
        }
       printf("%d.satir toplam:%d %d.sutun toplam:%d\n",i+1,A[i],i+1,B[i]);
    }

        printf("tum sayilarin toplami:%d",toplam);


    return 0;
}
