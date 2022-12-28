#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include<stdlib.h>

void KayitVeyaGiris();
 



void HosgeldinizFonksiyonu()//Uygulamamiz calistiginda bizi ilk karsilayacak hosgeldin mesaji.
{
printf("---------- AST Oto Kiralama'ya Hosgeldiniz ----------\n\n"
"      Ust Duzey Konfor Ve Kalitenin Tek Adresi\n\n"
"--------------------   SINCE 2003 -------------------- ");

}

struct araba//araba marka,model,fiyat ve id'sini tuttuğumuz yapı.
{
   char araba_marka[20];
   
   char araba_model[20];
   
   int araba_fiyat;
   
   int araba_id;
};

struct Account//hesap bilgilerimizi tuttuğumuz yapı.
{
   char name[20];
 
   char pass[20];
};

// kiralayacagimiz araclarin araba yapisi icerisine yazdigimiz yapi dizisi.
struct araba dizi_araba[15] = { 
   {" Audi",    "  A4\t\t",           670,     1},
   {" Jaguar",  "  F-PACE\t",       1350,    2},
   {" Fiat"  ,  "  Egea\t\t",         400,     3},
   {" Ford"  ,  "  Focus\t",        550,     4},
   {" Mazda"  , "  CX-5\t",         700,     5},
   {" Maserati","  Levante\t",      1600,    6},
   {" Tata"  ,  "  Xenon\t",        750,     7},
   {" Tesla"  , "  Model-Y\t",      1550,    8},
   {" Volkswagen","Passat\t",       1250,    9},
   {" Renault"  ," Clio\t",         550,     10},
   {" Cadillac"  ,"Escalade\t",     2400,    11},
   {" Dacia"  ,"   Duster\t",       870,     12},
   {" Skoda"  ,"   Superb\t",       650,     13},
   {" Mercedes"  ,"CLS\t",          1250,    14},
   {" BMW"  ,"     i8\t",           1800,    15},
  
};
void BilgiFonksiyonu()// firma ve araclarin durumu hakkinda bilgi iceren metin fonksiyonu.
{
   printf("\n\nOtomobillerimizin tamami aylik rutin bakimlarindan gecmektedir.\nHerhangi bir kazaya karsi hem size gelecek zarari"
          " hem de araclarimizin masraflarini karsilayan bir sigorta sirketiyle anlasmamiz vardir.\n"
          "Otomobillerimiz gunluk temizlenmekte olup ile sizlere daha kaliteli hizmet vermek icin ugrasmaktayiz.\n"
          "Otomobillerimizde HGS(Hizli Gecis Sistemi) bulunmaktadir.\nIyi yolculuklara dileriz.\n\n");
}

void Login()// var olan bir hesaba giris yaptigimizda gerceklesecek islemleri iceren giris fonksiyonu.
{
   char istenecek_isim[20];
  
   char istenecek_parola[20];

   printf("\nKullanici isminizi giriniz: ");
   scanf("%s",&istenecek_isim);

   printf("\n\nSifrenizi giriniz: ");
   scanf("%s",&istenecek_parola);

FILE *sc;
   struct Account acc;
   bool x = true;

   sc = fopen("userInfo.txt","r");

      while(!feof(sc)){
         fscanf(sc,"%s %s",&acc.name,&acc.pass);

            if(strcmp(istenecek_isim,acc.name)==0 && strcmp(istenecek_parola,acc.pass)==0){
            printf("\n\nUygulamamiza tekrar hosgeldiniz %s \n\n",acc.name);
            x = false;
      break;
            }
      }

         if(x){
            printf("\n\nKullanici ismi veya sifreniz hatalidir. Lutfen tekrar deneyiniz.\n\n");
            KayitVeyaGiris();
         }
fclose(sc);


}

void CreateAccount(){  // yeni bir hesap olusturmak icin izleyecegimiz yollari iceren hesap olusturma fonksiyonu.
   
      char istenecek_isim[20];
      char istenecek_parola[20];
      char e_mail[20];                   // hesap olusturmak icin atadigimiz verileri tutacak degiskenler.
                     
      int bakiye = 0;

      printf("\n\nBir kullanici adi giriniz: ");
      scanf("%s",&istenecek_isim);

      printf("\nGiris yapmak icin sifrenizi olusturunuz: ");
      scanf("%s",&istenecek_parola);                               // hesap olusturmak icin kullanicinin verilerini aldimiz scanf'ler.

      printf("\nE mail adresinizi giriniz: ");
      scanf("%s",&e_mail);

     


FILE *fptr;                                  //fptr adinda bir dosya tanimliyoruz.
   fptr = fopen("userInfo.txt","a");         //dosyayi fopen() fonksiyonu ile aciyoruz.

      if(fptr == NULL){                     // dosyanin acilip acilmadigini kontrol ediyoruz.
         
         printf("Error!!!");              
         exit(1);
      }

      fprintf(fptr,"\n%s %s %s %d",istenecek_isim,istenecek_parola,e_mail);  // fptr olarak tanimladigimiz dosyaya kullanici verilerini yazdiriyoruz.
      printf("Hosgeldiniz  %s\t",istenecek_isim);
   fclose(fptr);           // dosya islemlerini tamamladigimiz icin dosyamizi fclose() fonksiyonu yardimi ile kapatiyoruz.
             

}

void KayitVeyaGiris(){  // giris yap veya kayit ol menusunu iceren ve secim ile yapacagimiz islemin bulundugu fonksiyon.
   
   int secim;
   
   for(;;){
      
      printf("\n\nUygulamamiza giris yapmak icin 1'i tuslayiniz.\n\nEger giris yapacak bir hesabiniz bulunmuyorsa kayit olmak icin 2'yi tuslayiniz.\n\n");
      printf("\t[1] Giris yap\t\t[2] Kayit ol\n");
      scanf("%d",&secim);

         if(secim == 1){
           
            Login();
         break;
         }
         else if(secim ==2){
           
            CreateAccount();
         break;
         }
         else{
        
            printf("Yanlis secim yaptiniz tekrar deneyiniz.\n");
         }
   }
}

void faturakaydet(char marka[20],char model[20],int bakiye){ // kiralanan araclarin kaydini tuttugumuz fatura fonksiyonu.
   
  
   FILE *fptr;
      fptr = fopen("fatura.txt","a");  
   
      if(fptr == NULL){
      
         printf("Error!!!");
         exit(1);
      }

   fprintf(fptr,"Araba Markasi : %s, Kiraladagimiz model: %s Guncel Bakiyeniz: %d\n",marka,model,bakiye);
   fclose(fptr);

}

int main(){
   
   int bakiye = 0;
   int yatirilacakpara;
   char istenecek_isim[20];
   char istenecek_parola[20];
   char e_mail[20];                 // islem gerceklestirecegimiz degiskenlerimizi tanimliyoruz.
   
   int secim;
   int arabasecimi;
   int i;
   
   
  

   HosgeldinizFonksiyonu();
   KayitVeyaGiris();
   
   /*
   baslangic degerini belirlemedigimiz ancak bitis durumlarini kosullar ile olusturdugumuz, para yatirma,arac kiralama, otomobil bilgileri ve cikis 
   islemlerini iceren dongumuz.
   */

  
   for(;;){ 
      
      
      printf("Asagidaki islemlerden yapmak isteginizi seciniz\n\n\n\t\t\t\t\t\t\tMevcut Bakiyeniz: %d tl\n[1] Para Yatirma\n[2] Gunluk Otomobil Kiralama\n[3] Otomobil Bilgileri ve Haklar"
      "\n[4] Uygulamadan Cikis\n\nSeceneklerden birini seciniz: ",bakiye);
      scanf("%d",&secim);

         if(secim == 1){  // secim 1 ile para yatirma islemini gerceklestirdigimiz kosul bolumu.
   
            printf("\nPara Yatirma Islemini Sectiniz.\n\n\nHesabiniza ne kadar yatirmak istersiniz: ");
            scanf("%d",&yatirilacakpara); 
            if (yatirilacakpara > 0) // negatif bir tutar eklememek icin belirledigimiz kosul.
            {
               bakiye += yatirilacakpara;
               printf("\n\nPara yatirma isleminiz basarili bir sekilde tamamlanmistir.\n\nYatirdiginiz miktar: %d tl\n\nMevcut bakiyeniz: %d tl\n\n",yatirilacakpara,bakiye);
            }
            else
            {
               printf("\nGecerli bir sayi giriniz.\n\n");
            }
            
            
            
             }
         else if(secim == 2){   // otomobil kiralama islemlerini gerceklestirdigimiz kosul bolumu.
                          
            printf("\nGunluk Otomobil Kiralama Islemini Sectiniz.\n\n\nKiralamaya uygun durumdaki mevcut arabalarimiz asagida gozukmektedir.\n");
         

            for(i = 0; i < 15; i++){
                // kiralamaya uygun araclarin yazdirilma islemi.
               printf("\n %d %s %s %d ",dizi_araba[i].araba_id,dizi_araba[i].araba_marka,dizi_araba[i].araba_model,dizi_araba[i].araba_fiyat);

             }     
      
         printf("\n\nGuncel bakiyeniz: %d tl\n",bakiye);  // mevcut bakiye bilgisini yazdirma islemi.

         printf("\nLutfen kiralamak istediginiz otomobili seciniz: ");
         scanf("%d",&arabasecimi);
         --arabasecimi;

            if(bakiye >= dizi_araba[arabasecimi].araba_fiyat){  // bakiyenin arac kiralama ucretinden fazla olmasini kontrol eden kosul islemi.
               
               printf("\nSecmis oldugunuz otomobil: %s %s ",dizi_araba[arabasecimi].araba_marka,dizi_araba[arabasecimi].araba_model);
               bakiye = bakiye - dizi_araba[arabasecimi].araba_fiyat;
               printf("\n\nMevcut bakiyeniz: %d tl",bakiye);
          
                                    
               faturakaydet(dizi_araba[arabasecimi].araba_marka,dizi_araba[arabasecimi].araba_model,bakiye); // kiralanan aracin kaydinin tutuldugu islem.
               printf("\n\nKiralama isleminiz basariyla tamamlanmistir.\n\nBizi tercih ettiginiz icin tesekkur ederiz.\n");
      continue;
      }
         else{
            printf("\nHesabinizda yeterli miktarda bakiyeniz yoktur. Baska bir otomobilimizi secebilir ya da hesabiniza yukleme yapabilirsiniz.\n\n\n");
         }


   }
   else if(secim == 3){
      BilgiFonksiyonu();   // 3 numarali secim ile firma ve araclar hakkinda bilgi iceren fonksiyona yonlendirilme islemi.
   }                               
   else if(secim == 4){
      printf("\n\nAraba kiralama konusunda kalitenin adresini sectiginiz icin tesekkur ederiz.\n\nAST Oto Kiralama Iyi Yolculuklar Diler."); // cikis islemi.
   break; 
   } 
   else{
      printf("\n\nYanlis secim yaptiniz tekrar deneyiniz.\n\n");  // sunulan seceneklerden farkli tuslama girildiginde yazdirilan cumle.
   }

   }
   return 0;
}
