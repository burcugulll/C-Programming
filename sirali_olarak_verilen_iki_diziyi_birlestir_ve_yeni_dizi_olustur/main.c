#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[]={1,5,8,9,10,12};
    int B[]={2,4,7,11};
    int boyutA=sizeof(A)/sizeof(A[0]);
    int boyutB=sizeof(B)/sizeof(B[0]);
    int boyutC=boyutA+boyutB;
    int C[boyutC];
    int i,j,ai=0,bi=0;
    for(i=0;i<boyutA+boyutB;i++)
        {
            if(boyutA<=ai)
            {
                C[i]=B[bi];
                bi++;
            }
            else if(boyutB<=bi)
            {
                C[i]=A[ai];
                ai++;
            }
            else
            {
                if(A[ai]<B[bi])
                {
                    C[i]=A[ai];
                    ai++;
                }
                else
                {
                    C[i]=B[bi];
                    bi++;
                }
            }
        }
        for(j=0;j<boyutA+boyutB;j++)
            printf("%d ",C[j]);

    return 0;
}
