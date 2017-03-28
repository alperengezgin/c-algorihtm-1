#include <stdio.h>
#include <stdlib.h>

int main()
{
    // pts = pozitif tam say�.
    int pts, i, j, k;
    // pts de�i�kenine klavyeden bir pozitif tam say� de�eri al�yoruz, e�er pts pozitif tam say� de�ilse program uyar� verir ve kapan�r.
    printf("\n\tBir pozitif tam sayi giriniz: ");
    scanf("%d", &pts);
    printf("\n");
    if (pts < 1)
    {
        printf("\tLutfen pozitif tam sayi girin\n");
        return 0;
    }
    printf("\n");
    // pts den k���k olan asal say�lar� diziye aktarmak i�in bir dizi tan�mland�.
    int dizi[pts];
    int index = 0;
    for (i=2;i<pts;i++)
    {
        k = 1;
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {
                k = 0;
                break;
            }
        }

        if (k==1)
        {
            //k == 1 oldu�unda i de�eri asal say�d�r ve bunu olu�turdu�umuz dizinin 0 dan ba�layarak ilgili indexine atad�k.
            dizi[index] = i;
            index++;
        }
    }
    // pts say�s�n�n 3 farkl� asal say�n�n toplam� olup olmad���n� anlamak i�in i� i�e d�ng� ve sorgu kulland�k.
    int a, b, c, ctrl = 0;
    for (a=0;a<index;a++)
    {
        for (b=1;b<index;b++)
        {
            for (c=2;c<index;c++)
            {
                // e�er dizinin ilgili elemanlar�n�n toplam� pts de�i�kenine e�it ise di�er sorguya ge�ilir.
                if (pts == dizi[a] + dizi[b] + dizi[c])
                {
                    // a, b ve c de�erleri aras�nda b�y�kl�k s�ralamas� yapt�r�larak farkl� kombinasyon ve ayn� asal say�n�n 2 ve daha fazla kullan�lmas�n� engelledik.
                    if (dizi[a] < dizi[b] && dizi[b] < dizi[c])
                    {
                        // t�m ko�ullar� sa�layan say�lar�n ekrana yazd�r�lmas� ve ctrl kontrol de�i�keninin de�erinin de�i�tirilmesi ile uyar� yaz�s�n�n yazd�r�lmas� engellendi.
                        printf("\t%d = %d + %d + %d\n\n", pts, dizi[a], dizi[b], dizi[c]);
                        ctrl = 1;
                    }
                }
            }
        }
    }
    // e�er uygun say�lar bulunamaz ise uyar� yaz�s� ctrl kontrol de�i�teni sayesinde yazd�r�l�r.
    if (ctrl == 0)
    {
        printf("\t%d sayisi 3 asal sayinin toplami seklinde yazilamaz\n", pts);
    }
    return 0;
}
