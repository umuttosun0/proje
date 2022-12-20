/*
Umut Tosun 22181616046
Diyar Alma 22181616048*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void bilgisayarakarsi(){ // bilgisayara karsi tas-kagit-makas oyunu fonksiyonu.
/* ustunlukler ;
tas > makas
makas > kagit
kagit > tas
*/
int i,secim,rastgele;
int skorunuz = 0,bilgisayarskoru = 0;
srand(time(NULL)); // srand fonksiyonu ile rastgele sayiyi tek bir sayi olmaktan cikariyoruz.
printf("\n\n");
printf("Tas kagit makas oyununa hosgeldiniz ");
for(i = 0; i < 3;i++){ // dongu ile kac kere oynayacigimiz belirliyoruz.
   printf("\n\n");
   printf("1) Tas\n2) Kagit\n3) Makas\n");
   printf("Seciminizi yapiniz.\n");
   scanf("%d",&secim);

rastgele = (rand()%3) + 1;// rand fonksiyonu ile rastgele adinda rastgele sayilar alan bir int degeri belirliyoruz.
//rastgele sayi 1,2 ve 3 degerlerinden biri olsun diye rastgele secilen sayiyi 3 bolup 1 ile topluyoruz.

if(secim == 1 && rastgele ==1){//kosul ifadeleri ile tercihlere gore kazanani belirliyoruz.
   printf("Ayni secimi yaptiniz. Bu tur berabere.");
}
else if (secim == 1 && rastgele == 2){
   printf("Kagit tasi sarar. Bu turun kazanani bilgisayar.");
   bilgisayarskoru++;
}
else if(secim == 1 && rastgele == 3){
   printf("Tas makasi parcalar. Bu turun kazanani sizsiniz.");
   skorunuz++;
}
else if(secim == 2 && rastgele == 1){
   printf("Kagit tasi sarar. Bu turun kazanani sizsiniz.");
   skorunuz++;
}
else if(secim == 2 && rastgele == 2){
   printf("Ayni secimi yaptiniz. Bu tur berabere.");
}
else if(secim == 2 && rastgele == 3){
   printf("Makas kagiti keser. Bu turun kazanani bilgisayar.");
   bilgisayarskoru++;
} 
else if(secim == 3 && rastgele == 1){
   printf("Tas makasi parcalar. Bu turun kazanani bilgisayar.");
   bilgisayarskoru++;
}
else if (secim == 3 && rastgele == 2){
   printf("Makas kagiti keser. Bu turun kazanani sizsiniz.");
   skorunuz++;
}
else if(secim == 3 && rastgele == 3){
   printf("Ayni secimi yaptiniz. Bu tur berabere.");
  
}
else{
   printf("Tanimlanamayan Komut.");
   
}
  
}


printf("\n\nSkor Tablosu:\nSiz %d-%d Bilgisayar\n",skorunuz,bilgisayarskoru);
}

int main(){

int islem;


printf("\n\n1)Tas Kagit Makas Oyunu (Bilgisayara Karsi)\n");
printf("2)Kim Milyoner Olmak Ister Yarismasi\n\n");

printf("Oynamak istediginiz oyunu tuslayiniz.\n");
scanf("%d",&islem);

switch (islem){
case 1:
    
  bilgisayarakarsi();

   break;
   
case 2:
   
   printf("Kim milyoner olmak ister yarismasina hosgeldiniz.\n\n\n");

  
    int dizi [12];
    int basla,devam;
    
        printf("Baslamadan once kurallari hatirlatalim.\n A sikki icin 1'e, B sikki icin 2'ye, C sikki icin 3'e, D sikki icin 4'e basicaksiniz.\n");
        printf("Yarismamiza baslamak icin hazirsaniz 1'e basiniz.\n");
        scanf("%d",&basla);

    if (basla == 1)
    {
        printf("1. sorumuz geliyor...\n1-)333'un 3 kati, 333'un 3'te birinden kac fazladir?\nA-) 0\tB-) 222\tC-) 555\tD-) 888\n");
        scanf("%d",&dizi[0]);

        if( dizi[0] == 4)
        {
            printf("Tebrikler dogru cevap verdiniz. 1000 tl kazandiniz.\n");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
        } 
        else 
        {
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }
    }
    
            scanf("%d",&devam);
            

        if (devam == 1)
    {
            printf("2. sorumuz geliyor...\n2-)NBA'in efsanelerinden birisi olan Kobe Bryant'in efsanesi oldugu takim hangisidir ?\nA-) Boston Celtics\tB-) Los Angeles Lakers\tC-) Sixers\tD-) Bulls\n");
            scanf("%d",&dizi[1]);

        if(dizi[1] == 2)
        {
            printf("Tebrikler dogru cevap 2000 tl kazandiniz.\n");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
        } 
        else 
        {
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }    
    }
    else
    {
        printf("1000 tl kazandiniz. Tebrikler");
        break;
    }
    
    
            scanf("%d",&devam);


        if (devam == 1)
    {
            printf("3. sorumuz geliyor...\n3-)Mustafa Kemal ATATURK kac yasinda vefat etmistir ?\nA-) 55\tB-) 59\tC-) 57\tD-) 56\n");
            scanf("%d",&dizi[2]);
    
        if (dizi[2] == 3)
        {
            printf("Tebrikler dogru cevap 3000 tl kazandiniz.");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
        } 
       else
        { 
       
            printf("Yanlis cevap maalesef elendiniz.");
            
            break;
        }    
    }
    else
    {
        printf("2000 tl kazandiniz. Tebrikler");
        break;
    }
            scanf("%d",&devam);

        if (devam == 1)
    {
            printf("4. sorumuz geliyor...\n4-)Dunyanin 7 harikasi olarak bilinen yapilardan son ayakta kalani hangisidir ?\nA-) Keops piramidi\tB-) Babilin Asma Bahceleri\tC-) Artemis tapinagi\tD-) Zeus Heykeli\n");
            scanf("%d",&dizi[3]);

        if(dizi[3] == 1)
        {
            printf("Tebrikler dogru cevap 5000 tl kazandiniz.");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
        } 
        else
        { 
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }    
    }
    else
    {
        printf("3000 tl kazandiniz. Tebrikler");
        break;
    }
            scanf("%d",&devam);

        if (devam == 1)
    {
            printf("5. sorumuz geliyor...\n5-)Yedi renkten olusan gokkusaginin ortasindaki renk hangisidir ?\nA-) Mavi\tB-) Kirmizi\tC-) Yesil\tD-) Mor\n");
            scanf("%d",&dizi[4]);

        if(dizi[4] == 3)
        {
            printf("Tebrikler dogru cevap 7500 tl kazandiniz.");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
        } 
        else 
        {
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }
    }
    else
    {
        printf("5000 tl kazandiniz. Tebrikler");
        break;
    }
            scanf("%d",&devam);

        if (devam == 1)
    {
            printf("6. sorumuz geliyor...\n6-)Hangisi MFO uyeleri Mazhar Alanson, Fuat Guner ve Ozkan Ugur'un birinci ya da ikinci adlarindan biri degildir ?\nA-) Aziz\tB-) Mahmut\tC-) Raif\tD-) Faik\n");
            scanf("%d",&dizi[5]);

        if(dizi[5] == 4)
        {
            printf("Tebrikler dogru cevap 10000 tl kazandiniz.");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
        } 
        else 
        {
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }
    }
    else
    {
        printf("7500 tl kazandiniz. Tebrikler");
        break;
    }
            scanf("%d",&devam);

        if (devam == 1)
    {
            printf("7. sorumuz geliyor...\n7-) I. Dunya Savasi sirasinda cephedeki yaralilarin hastaneye tasinmasinin zor olmasindan dolayi, icinde rontgen cihazi olan araclar tasarlayip hizmete sunan kisi kimdir?\nA-) Edison\tB-) Wilhelm Rontgen\tC-) Nikola Tesla\tD-) Marie Cruie\n");   
            scanf("%d",&dizi[6]);

        if(dizi[6] == 4)
        {
            printf("Tebrikler dogru cevap 30000 tl kazandiniz.");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
        } 
        else
        { 
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }
    }
    else
    {
        printf("10000 tl kazandiniz. Tebrikler");
        break;
    }
            scanf("%d",&devam);

        if (devam == 1)
    {
            printf("8. sorumuz geliyor...\n8-)Hangisi, en iyi film oscar odulunu kazanmistir?\nA-) Pulp Fiction\tB-) No Country for Old Men\tC-) The Wolf of Wall Street\tD-) Saving Pirate Ryan\n ");
            scanf("%d",&dizi[7]);

        if(dizi[7] == 2)
        {
            printf("Tebrikler dogru cevap 50000 tl kazandiniz.");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
        }
        else 
        {
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }
    }
    else
    {
        printf("30000 tl kazandiniz. Tebrikler");
        break;
    }
            scanf("%d",&devam);

        if (devam == 1)
    {
            printf("9. sorumuz geliyor...\n9-)1959'da New York'taki bir sampiyonaya erkek kiliginda katilan Rena Kanogoki, hangi alanda altin madalya kazanmis ve kadin oldugu anlasilinca madalyasini iade etmek zorunda kalmistir ?\nA-) Satranc\tB-) Eskrim\tC-) Judo\tD-) Okculuk\n");
            scanf("%d",&dizi[8]);

        if(dizi[8] == 3)
        {
            printf("Tebrikler dogru cevap 100000tl kazandiniz.");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
        } 
        else 
        {
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }
    }
    else
    {
        printf("50000 tl kazandiniz. Tebrikler");
        break;
    }
            scanf("%d",&devam);

          if (devam == 1)
    {
            printf("10. sorumuz geliyor...\n10-)Dunning-Kruger etkisi, halk arasinda kullanilan hangi ifadenin bilimsel aciklamasini sunar ?\nA-) Acemi Sansi\tB-) Zugurt Tesellisi\tC-) Cahil Cesareti\tD-) Amator Ruh\n ");
            scanf("%d",&dizi[9]);

        if(dizi[9] == 3)
        {
            printf("Tebrikler dogru cevap 200000 tl kazandiniz.");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
 
        } 
        else 
        {
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }
    }
    else
    {
        printf("100000 tl kazandiniz. Tebrikler");
        break;
    }
            scanf("%d",&devam);

          if (devam == 1)
    {
            printf("11. sorumuz geliyor...\n11-)Hangi unlu universite mezunudur ?\nA-) Recep Tayyip Erdogan\tB-) Bulent Ecevit\tC-) Tarkan Tevetoglu\tD-) Kadir Inanir\n");
            scanf("%d",&dizi[10]);

        if(dizi[10] == 4)
        {
            printf("Tebrikler dogru cevap 400000 tl kazandiniz.");
            printf("Sonraki soruyu gormek icin hazirsaniz 1'e basiniz. Cekilmek istiyorsaniz 2'ye basiniz.\n");
 
        } 
        else 
        {
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }
    }
    else
    {
        printf("200000 tl kazandiniz. Tebrikler");
        break;
    }
            scanf("%d",&devam);

        if (devam == 1)
    {
            printf("12. sorumuz geliyor...\n12-)Temmuz 1889'da Istanbul'dan Japonya'ya hareket eden ve donus yolunda batan Ertugrul Firkateyni, 1890 yilinda Japonya'ya ulastiginda Japonya'nin imparatoru kimdir?\nA-) Komei\tB-) Meiji\tC-) Taiso\tD-) Hirahito\n");
            scanf("%d",&dizi[11]);

        if(dizi[11] == 2)
        {
            printf("Tebrikler dogru cevap 1000000 tl kazandiniz.");
           
        } 
        else 
        {
            printf("Yanlis cevap maalesef elendiniz.");

            break;
        }
    }
        else
     {
        printf("400000 tl kazandiniz. Tebrikler");
        break;
     }
            scanf("%d",&devam);
            
            default : 

printf("Tanimlanamayan Islem."); 
break;
}

}
