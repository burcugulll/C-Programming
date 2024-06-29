#include <stdio.h>
#include <stdlib.h>
void Bharfi(int boyut)
{
    int i,j;
    for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            if((i==1 && j<boyut) || (i==boyut && j<boyut) || i==(boyut+1)/2 || j==1 || (1<i && i<boyut && j==boyut))

            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void Uharfi(int boyut)
{
    int i,j;
    for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            if(j==1 || j==boyut ||i==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void Rharfi(int boyut)
{
    int i,j;
    for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            if(i==1 || i==(boyut+1)/2 || j==1 || (i<=(boyut+1)/2 && j==boyut) || (i>=(boyut+1)/2 && i==j))
               {
                   printf("*");
               }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void Charfi(int boyut)
{
    int i,j;
    for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            if(i==1 || i==boyut || j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void Gharfi(int boyut)
{
    int i,j;
    for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            if(i==1 || j==1 || i==boyut || i==(boyut+1)/2 || (i>(boyut+1)/2 && j==boyut))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void Lharfi(int boyut)
{
    int i,j;
    for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=boyut;j++)
        {
            if(i==boyut || j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int boyut;
    printf("Boyut giriniz: ");
    scanf("%d",&boyut);
    printf("\n");
    Bharfi(boyut);
    printf("\n\n");
    Uharfi(boyut);
    printf("\n\n");
    Rharfi(boyut);
    printf("\n\n");
    Charfi(boyut);
    printf("\n\n");
    Uharfi(boyut);
    printf("\n\n\n\n\n\n");
    Gharfi(boyut);
    printf("\n\n");
    Uharfi(boyut);
    printf("\n\n");
    Lharfi(boyut);
    return 0;
}
