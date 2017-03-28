#include <stdio.h>
#include <stdlib.h>

int main()
{
    // pts = pozitif tam sayý.
    int pts, i, j, k;
    // pts deðiþkenine klavyeden bir pozitif tam sayý deðeri alýyoruz, eðer pts pozitif tam sayý deðilse program uyarý verir ve kapanýr.
    printf("\n\tBir pozitif tam sayi giriniz: ");
    scanf("%d", &pts);
    printf("\n");
    if (pts < 1)
    {
        printf("\tLutfen pozitif tam sayi girin\n");
        return 0;
    }
    printf("\n");
    // pts den küçük olan asal sayýlarý diziye aktarmak için bir dizi tanýmlandý.
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
            //k == 1 olduðunda i deðeri asal sayýdýr ve bunu oluþturduðumuz dizinin 0 dan baþlayarak ilgili indexine atadýk.
            dizi[index] = i;
            index++;
        }
    }
    // pts sayýsýnýn 3 farklý asal sayýnýn toplamý olup olmadýðýný anlamak için iç içe döngü ve sorgu kullandýk.
    int a, b, c, ctrl = 0;
    for (a=0;a<index;a++)
    {
        for (b=1;b<index;b++)
        {
            for (c=2;c<index;c++)
            {
                // eðer dizinin ilgili elemanlarýnýn toplamý pts deðiþkenine eþit ise diðer sorguya geçilir.
                if (pts == dizi[a] + dizi[b] + dizi[c])
                {
                    // a, b ve c deðerleri arasýnda büyüklük sýralamasý yaptýrýlarak farklý kombinasyon ve ayný asal sayýnýn 2 ve daha fazla kullanýlmasýný engelledik.
                    if (dizi[a] < dizi[b] && dizi[b] < dizi[c])
                    {
                        // tüm koþullarý saðlayan sayýlarýn ekrana yazdýrýlmasý ve ctrl kontrol deðiþkeninin deðerinin deðiþtirilmesi ile uyarý yazýsýnýn yazdýrýlmasý engellendi.
                        printf("\t%d = %d + %d + %d\n\n", pts, dizi[a], dizi[b], dizi[c]);
                        ctrl = 1;
                    }
                }
            }
        }
    }
    // eðer uygun sayýlar bulunamaz ise uyarý yazýsý ctrl kontrol deðiþteni sayesinde yazdýrýlýr.
    if (ctrl == 0)
    {
        printf("\t%d sayisi 3 asal sayinin toplami seklinde yazilamaz\n", pts);
    }
    return 0;
}
