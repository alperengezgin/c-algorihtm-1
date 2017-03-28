#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i, j, k, a, b, c, asal1, asal2, asal3, ctrl1, ctrl2, ctrl3, toplam, ctrlmain=0;
    printf("\tBir sayi girin: ");
    scanf(" %d", &sayi);
    printf("\n");

    for (i=2;i<sayi;i++)
    {
        ctrl1=0;
        for (a=2;a<i;a++)
        {
            if (i%a == 0)
            {
                ctrl1 = 1;
                break;
            }
        }
        if (ctrl1==0)
        {
            for (j=i+1;j<sayi;j++)
                {
                   ctrl2=0;
                   for (b=2;b<j;b++)
                   {
                       if (j%b == 0)
                       {
                           ctrl2 = 1;
                       }
                   }
                   if (ctrl2 == 0)
                   {
                       for (k=j+1;k<sayi;k++)
                       {
                           ctrl3 = 0;
                           for (c=2;c<k;c++)
                           {
                               if (k%c == 0)
                               {
                                   ctrl3 = 1;
                               }
                           }
                           if (ctrl3 == 0)
                           {
                               toplam = i + j + k;
                               if (toplam == sayi)
                               {
                                   if (i<j && j<k)
                                   {
                                       printf("\n\t%d = %d + %d + %d\n",sayi, i, j, k);
                                       ctrlmain=1;
                                   }
                               }
                           }
                       }
                   }
                }
        }
    }

    if (ctrlmain==0)
    {
        printf("\n\t%d sayisi 3 asal sayinin toplami s5eklinde yazilamaz.\n\n", sayi);
    }
    return 0;
}
