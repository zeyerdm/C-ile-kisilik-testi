#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Windows.h>


#define MAX_KAYIT 20

int puan = 0;
char isim[50];
char isimlistesi[20][50];
int kayitlar_sonuc[20];

int giris_ekrani()
{
    int secim = 0;


    printf("\033[1;34m---------- KİŞİLİK TESTİNE HOŞ GELDİNİZ :) ----------\n\n\033[0m");
    printf("\033[1;36m-> Lütfen seçim yapiniz: \n1- Teste Başlamak için lütfen 1'i seçiniz. \n2- Geçmiş Kayit Goruntulemek için lütfen 2'yi seçiniz.\n-> Seçiminiz: \033[0m");

    if (scanf_s("%d", &secim) != 1)
    {
        printf("Hatali secim, bir tam sayi giriniz.\n");
        while (getchar() != '\n'); // Temizleme işlemi tekrar başa sarmak için

    }

    scanf_s("%*c"); //İsim yazdırmak için yapıldı

    if (secim == 1)
    {
        printf("\033[1;34mHosgeldiniz, lütfen isminizi giriniz: \n\033[0m");
        scanf_s("%c", &isim[0], 1); // & operatörü kullanarak isim dizisine tek bir karakter al

        soru_sorma();
    }
    else if (secim == 2)
    {
        system("cls");
        son_kayitlari_yazdirma();
    }
    else
    {
        printf("\033[1;31mGeçersiz secim, lütfen 1 veya 2 giriniz.\n\033[0m");
    }


}


char isimlistesi[MAX_KAYIT][50];
int kayitlar_sonuc[MAX_KAYIT];

int isim_ve_puan_kaydet(char isim[], int puan)
{
    for (int i = 0; i < MAX_KAYIT; i++)
    {
        if (kayitlar_sonuc[i] == 0)
        {

            int j = 0;
            while (isim[j] != '\0' && j < sizeof(isimlistesi[i]) - 1)
            {
                isimlistesi[i][j] = isim[j];
                j++;
            }
            isimlistesi[i][j] = '\0'; // Karakter dizisini sonlandır
            kayitlar_sonuc[i] = puan;
            return 1; // Başarıyla eklendiği için 1 döndürüyoruz
        }
    }
    return 0; // Boş yer bulunamadığı için 0 döndürüyoruz
}







int son_kayitlari_yazdirma()
{
    int baslangic = (MAX_KAYIT > 20) ? MAX_KAYIT - 20 : 0;

    for (int i = baslangic; i < MAX_KAYIT; i++)
    {
        int indeks = i % MAX_KAYIT;
        if (kayitlar_sonuc[indeks] != 0)
        {
            printf("%d. %sKİŞİLİK PUANI: %d\n", i + 1, isimlistesi[indeks], kayitlar_sonuc[indeks]);

            if (kayitlar_sonuc[indeks] <= 30 && kayitlar_sonuc[indeks] < 50)
            {
                printf("BEYAZ KİŞİLİK  \033[1;33m- ÇOK TEMİZ KALPLİ BİRİ\n\n\033[0m");
            }
            else if (kayitlar_sonuc[indeks] <= 50 && kayitlar_sonuc[indeks] < 75)
            {
                printf("MAVİ KİŞİLİK \033[1;33m- HAYAT ENERJİSİ DOLU BİRİ\n\n\033[0m");
            }
            else if (kayitlar_sonuc[indeks] <= 75 && kayitlar_sonuc[indeks] < 80)
            {
                printf("MOR KİŞİLİK \033[1;33m- ZEKİ, KENDİNDEN EMİN BİRİ\n\n\033[0m");
            }
            else if (kayitlar_sonuc[indeks] <= 80)
            {
                printf("GRİ KİŞİLİK \033[1;33m- KARARSIZ ARADA KALMIŞ\n\n\033[0m");

            }
            else
            {
                printf("SİYAH KİŞİLİK \033[1;33m- KARAMSAR YORGUN BİRİ\n\n\033[0m");
            }
        }
    }


}

void kayitlar()
{
    isim_ve_puan_kaydet(isim, puan);
}

int yukleme_ekrani(int sayi)
{
    int i = 0;
    do
    {
        printf("\033[1;31m--> \033[0m");
        Sleep(sayi);
        i++;
        if (i == 10)
        {
            break;
        }

    } while (1);
    printf("\n");
}

int karar_verme()
{

    if (puan > 0 && puan <= 30)
    {
        printf("\033[1;35mKİŞİLİK ANALİZİNİZ: \n\033[0m");
        printf("Sen o kadar iyi bir insansın ki, herkese gereğinden fazla güveniyorsun. Fazlasıyla naif bir insansın. Sen gelecek kötülükleri sezme değil, tecrübe etme yoluyla öğreniyorsun çünkü insanlara fazla güveniyorsun. Zamanla kime güvenip güvenemeyeceğini çözeceksin. Elbette üzüleceksin, kırılacaksın ama sen de artık insanlara güvenmemen gerektiğini öğreneceksin. He tabii ki bu durumu onlara çaktırmadan yapacaksın çünkü sen çok iyisin adeta taçsın bir meleksin . \n\n");
        printf("\033[1;35mSANA ÖNERECEĞİM ŞİİRİ GORMEK ICIN 2 KEZ ENTER'A DOKUN :\n\n\033[0m");
        getch();
        getch();
        printf("\n DİNMEYEN AŞK \n Bakmadan kara,yağmura,\n Göğüs vererek rüzgâra,\n Kayalar içinde ıslak,\n Sisleri aşıp koşarak,\n Sevmek, bıkmamak sevgiden!\n Dinlenmeden, ara vermeden!\n\n\n Ömrün tadını, neşesini\n Taşımadansa boş yere\n Ben ıstırabı, acıyı\n Üstün tuttum sevinçlere,\n O yakınlık duygusunu,\n Gönülden gönüle akışı;\n Ah bir şeye benzemez\n İnsanı yaratır acı!\n\n\n Nereye kaçayım, nereye?\n Ormanlara mı, ırağa mı?\n Boşuna her şey, boşuna!\n Huzura varmayan neşe\n Ey aşk! Her şeyin başı!\n\n Johann Wolfgang Von GOETHE\n\n");
        printf("\033[1;35mDEVAM ETMEK İÇİN 2 KEZ ENTER'A DOKUN \n\n\033[0m");
        getch();
        getch();
    }

    else if (puan > 30 && puan <= 50)
    {
        printf("\033[1;35mKİŞİLİK ANALİZİNİZ: \n\033[0m");
        printf("Seni sen yapan en büyük özelliğinin neşen olduğunu söyleyebiliriz. Hayata karşı büyük bir merakın var ve enerjinle insanlara neşe saçıyorsun. Hayatın sadece keyifli taraflarına değil, diğer noktalarına da önem veriyorsun. Sadece keyif alabileceğin noktaları ön plana çıkarmayı seçiyorsun. Sen enerjisi düşük bir ortamı hemen neşelendirebilir, yeni girdiğin bir ortamda tüm gözleri üzerine çekebilirsin. Etrafındaki insanlar senin mizah yeteneğinin oldukça farkında. Haliyle bu durum senin de hoşuna gidiyor.\n \n");
        printf("\033[1;35mSANA ÖNERECEĞİM ŞİİRİ GORMEK ICIN 2 KEZ ENTER'A DOKUN :\n\n\n\033[0m");
        getch();
        getch();
        printf("\n Umut\n\n Yaşamak ummaktır.\n Yeşil yapraklar umar\n şu beli bükülmüş agaç,\n yelkenler rüzgar umar\n bir kız tanırım, sarışın\n sevgilisini esmer umar.\n\n\n Ummaktır yaşamak.\n Çık bu saatte evinden\n kilitle odanın ve kalbinin kapılarını,\n keder seni evde bulmasın,\n pişmanlık geri dönsün kapından.\n Vehimlerini azat et;\n soyun hatıralarından,\n tazelensin adımlarındaki kuvvet\n dogacak günü yolda karşıla:\n yeni umutlarla başlar yeni gün;\n tahammül umuttan dogar.\n Zaman bizim dostumuzdur, unutma\n en az HÜRRİYET kadar.\n\n\n Ummaktır yaşamak.\n İbret al, ders al geceden\n çevir başını gökyüzüne\n yıldızlara bak.\n Güneşli sabahların umududur yıldızlar.\n\n\n Bir vedalık hükmü var hayatın,\n ölümün vakti saati sorulmaz.\n Serçe kuşu gibidir umut,\n dal yorulur, serçe yorulmaz.\n\n SUAT TAŞER\n\n");
        printf("\033[1;35mDEVAM ETMEK İÇİN 2 KEZ ENTER'A DOKUN \n\n\033[0m");
        getch();
        getch();

    }
    else if (puan > 50 && puan <= 70)
    {
        printf("\033[1;35mKİŞİLİK ANALİZİNİZ: \n\033[0m");
        printf("Sen kendine güveni olan ve kendi kendine yetebilen birisin. Zekan ile hep dikkat çeken insanları aklın ve başarıların ile şaşırtan birisin. Bir işe girişirken hep yüksek motivasyon sahibisin. Senin de kendince çekincelerin, şüphelerin var fakat bunları hiçbir zaman mantığının ve potansiyelinin altında tutmuyorsun! Ve bu duruşun çevrene farklı bir aura saçıyor. Çekicisin, sosyalsin ve bunun farkındasın. Adeta doğuştan bir lider olmakla kalmıyor, bu işte de başarılı oluyorsun!\n\n");
        printf("\033[1;35mSANA ÖNERECEĞİM ŞİİRİ GORMEK ICIN 2 KEZ ENTER'A DOKUN :\n\n\n\033[0m");
        getch();
        getch();
        printf("\n KIZ ÇOCUĞU\n\n Kapıları çalan benim\n kapıları birer birer.\n Gözünüze görünemem\n göze görünmez ölüler.\n\n\n Hiroşima'da öleli\n oluyor bir on yıl kadar.\n Yedi yaşında bir kızım,\n büyümez ölü çocuklar.\n Saçlarım tutuştu önce,\n gözlerim yandı kavruldu.\n Bir avuç kül oluverdim,\n külüm havaya savruldu.\n\n\n Benim sizden kendim için\n hiçbir şey istediğim yok.\n Şeker bile yiyemez ki\n kağıt gibi yanan çocuk.\n\n\n Çalıyorum kapınızı,\n teyze, amca, bir imza ver.\n Çocuklar öldürülmesin\n şeker de yiyebilsinler.\n\n NAZIM HİKMET\n\n");
        printf("\033[1;35mDEVAM ETMEK İÇİN 2 KEZ ENTER'A DOKUN \n\n\033[0m");
        getch();
        getch();

    }

    else if (puan > 70 && puan <= 85)
    {
        printf("\033[1;35mKİŞİLİK ANALİZİNİZ: \n\033[0m");
        printf("Senin kafan çok karışmış. Asla kararlarından emin olamıyorsun aklın seçtiklerinde değil her zaman seçmediklerinde kalıyor. Kararlarına biraz daha güvenip arkasında durman gerekiyor. Rahatına çok düşkün olduğun  için konfor alanının dışına çıkmaktan çok çekiniyorsun. Dışarı çıkıp yeni şeyler denemekten korkma ve hayatına renk kat.\n \n");
        printf("\033[1;35mSANA ÖNERECEĞİM ŞİİRİ GORMEK ICIN 2 KEZ ENTER'A DOKUN :\n\n\n\033[0m");
        getch();
        getch();
        printf("\n Nedir Ki\n\n İsim nedir ki\n Bulutlara yazılır geçer\n\n\n Yüzüm nedir ki\n Akar suya çizilir geçer\n\n Ömür nedir ki\n Kurulur bozulur geçer\n\n\n Sevda nedir ki\n Dokunursun süzülür geçer\n\n\n Şiir nedir ki\n Sezilir geçer\n\n\n İnsan nedir ki\n Bir şeylere sevinir üzülür geçer\n\n Ataol BEHRAMOĞLU\n\n");
        printf("\033[1;35mDEVAM ETMEK İÇİN 2 KEZ ENTER'A DOKUN \n\n\033[0m");
        getch();
        getch();
    }

    else
    {
        printf("\033[1;35mKİŞİLİK ANALİZİNİZ: \n\033[0m");
        printf("Evet senin kalbin taştan. Ne kadar hassas olmaya çalışsan da olamazsın. Çünkü doğanın sana verdiği yapı bu değil, sen sert bir karaktere sahipsin. Herkesin karşısında dik durabiliyor, kimseye boyun eğmiyorsun. Kimse seni istediği gibi incitemez, kıramaz. Çünkü onların senin üzerindeki etkisini dikkate alacak kadar bile önemsemezsin. Hayat seni çok yormuş biraz kafanı boşaltmaya ihtiyacın var.\n\n ");
        printf("\033[1;35mSANA ÖNERECEĞİM ŞİİRİ GORMEK ICIN 2 KEZ ENTER'A DOKUN :\n\n\n\033[0m");
        getch();
        getch();
        printf("\n İNSAN BİR EKSİK SÖZDÜR\n\n Açlık, tanrısını alkışlıyor\n Korku, tanrısını\n Ölüm, tanrısını...\n İnsan döne döne bir kötülükte kayboluyor.\n\n\n Kalbimizde boğucu bir kalabalık\n Aklımızda umutsuz sözlerin acısı\n Baktığımız kadar bir sokak dışarıda\n Bir soğuk, bir üzgün, bir yalnız resim\n Kapanır durur üstümüze bütün uzaklar.\n\n\n İçimizdeki boşluğa tutunarak umut etmeye çalışıyoruz:\n Bizim rüyalarımız olmadan dünya güzel olamaz\n Bizim şarkılarımız olmadan insan sevmeyi bilemez\n Bizim merhametimiz olmadan tanrı kimseyi bağışlayamaz\n Bizim dudaklarımız gülmeden çocuklarımız çiçek açamaz.\n\n\n Bir çürümenin ortasında\n Utancımıza tutunmuş\n İyi şeyler düşünerek\n Yaşamaya çalışıyoruz.\n\n ŞÜKRÜ ERBAŞ\n\n");
        printf("\033[1;35mDEVAM ETMEK İÇİN 2 KEZ ENTER'A DOKUN \n\n\033[0m");
        getch();
        getch();
    }

}

int soru_sorma()
{
    int secim;
    int cevap;
    char sorular[21][500] =
    {
        "\033[1;31m1. Hangi renk sana daha cok hitap ediyor ?\n\033[0m1 : Beyaz ve acık tonları.\n2 : Mavi ve tonlarını severim.\n3 : Mor tonları severim.\n4 : Gri arada ve kalmış tonlar.\n5 : Siyah ve koyu tonları severim. \n",
        "\033[1;31m2. Uzun yol seyhatleri hakkında düsüncen nedir ?\n\033[0m1 : Keyifli ama yorucu.\n2 : En fazla 2 kisi olunca güzel zaman gecirilir.\n3 : Eglenceli aktivitelerle uzun yolculugun tadini alacaksin.\n4 : Çogu zaman cekilmez.\n5 : Huzur verici. \n",
        "\033[1;31m3. Sanat ne icindir ?\n\033[0m 1 : Ruhu renklendirmek icin.\n 2 : Sanat, kendini anlatabilmek bir seylerin sesi olabilmek icindir.\n 3 : Aska inanlar icin. \n 4 : Entellektüel insanmıs gibi olmaK icin. \n 5 : sanat bos is. \n",
        "\033[1;31m4. Dünya barısını asagıdakilerden hangisi getirir ?\n\033[0m 1 : Vicdan ve yardımlasma.\n 2 : Kisilerin kendilerine olan saygısı, sevgisi.\n 3 : İnsanlara gerekli egitimin dogru bir sekilde verildigi takdirde.\n 4 : Dünya ya uzaylıların saldırması.\n 5 : Dünyada insan oldugu sürece barıs gelmez. \n",
        "\033[1;31m5. Birisine güvenmende ki en büyük etken hangisidir ? \n\033[0m 1 : Özel sebeblere gerek yok her türlü güvenirim.\n 2 : Bana ve bir baskasına yalan söylerken yakalamamak.\n 3 : Tüm karakteri cok onemlidir.\n 4 : Her kosulda dürüst haraketler sergilemesi.\n 5 : Birisine hiçbir zaman guvenmem. \n",
        "\033[1;31m6. Bir kisi yağmurlu bir havada seni arabası ile yanından gecerken kasten ıslatırsa tepkin ne olur ?\n \033[0m1 : Kazayla yaptığını düşünüp yoluma bakarım.\n 2 : Sinirden ve şoktan gülme krizine girerim.\n 3 : Plakasını alır ulasmaya calısırım.\n 4 : Akil sagligindan suphe ederim.\n 5 : Sesli hakaretler ederim. \n",
        "\033[1;31m7. Özgüven seviyeni anlatır mısın ? \n\033[0m 1 : Normal bir insan kadar, ortalama.\n 2 : Gayet yeterli, cogu seyi yapabılecegıme inaniyorum.\n 3 : Kendi yapabilecegim ve yapamayacagım seylerin farkındayım ve kendimle barisigim.\n 4 : Duruma göre değişir çoğu zaman dengesiz.\n 5 : Yetersiz, nefes almakta bile basarısızım. \n",
        "\033[1;31m8. Ne tür müzikler dinlersin ? \n\033[0m 1 : Sakin, dinlendirici piano müzikleri. \n 2 : Az bilinen kaliteli müzikler. \n 3 : Türkü, yaşanmışlık içeren müzikler. \n 4 : Kulağıma hoş gelen her şeyi dinlerim. \n 5 : Rock / metal müzikler. \n",
        "\033[1;31m9. Ön yargı seviyen nasıldır ? \n\033[0m 1 : % 10 \n 2 : % 30 \n 3 : % 50 \n 4 : % 70 \n 5 : % 100 \n",
        "\033[1;31m10. İnsanların dış görünüşü senin için ne kadar önemlidir ? \n\033[0m 1 : Hic önemli degil, hepimiz insanız sonuçta. \n 2 : Genelde dikkat ederim ama yargılamam. \n 3 : Ortalama seviyede önemlidir, pek umursamam. \n 4 : Büyük önem tasır,tipi kişiliğini yansıtır . \n 5 : Eh iste ici daha onemli sohbeti sarsın yeter. \n ",
        "\033[1;31m11. Aşağıdakilerden hangisi önceliklerinde birinci sırada ?\n\033[0m 1 : Ailem, sevdiklerim.\n 2 : Sevmek, sevilmek.\n 3 : Basarı, saygınlık.\n 4 : Öncliklerim hep degisir.\n 5 : Güç ve para.\n ",
        "\033[1;31m12. İleride kendini nerede görüyorsun ? \n\033[0m 1 : Kendi ayakları üzerinde durmayı başaran bir kadın / erkek olarak.\n 2 : Bulundugum meslekte basarili ve iyi bir aile kurmuş.\n 3 : Büyük bir sirket sahibi.\n 4 : Bana hiç belli olmaz her seyi yapıyor olabilirim.\n 5 : Çok yasayacagımı dusunmuyorum. \n",
        "\033[1;31m13. Nasıl havalardan hoşlanırsın ? \n\033[0m 1 : Ilkbahar havalarından.Cicekler acsın, kuslar ötsün.\n 2 : Sonbahar havası.Yapraklar dökülsün, yagmur yagsın.\n 3 : Yaz aksamları.Ruzgar efil efil essin.\n 4 : Moduma göre değisir.\n 5 : Kıs aksamı.Kar yagsın,biraz titreyelim. \n",
        "\033[1;31m14. Senin için mükemmel bir zaman hangisi ? \n\033[0m 1 : Sevdiklerim ile vakit gecirirken \n 2 : Özgür olduğumu hissetiğim zamanlar.\n 3 : Arkada bekleyen ısler olmadan hobilerimi yaptıgım zamanlar.\n 4 : Degerlli hissetigim her zaman.\n 5 : Gece yarısı hayatı sorgularken. \n",
        "\033[1;31m15. İleride yasayacagın yer hangisi ?\n\033[0m 1 : Sahil kasabası denize bakan bir evde.\n 2 : Ege de kendi yaptıgım kütükden evde.\n 3 : Nerde oldu önemsiz bahceli bir viilada.\n 4 : Sakin çok karısık olmayan bir sehirde.\n 5 : Bir metropol şehirde. \n ",
        "\033[1;31m16. Para kaygın olmasa hayatının sonuna kadar yaprım dediğin iş hangisi ?\n\033[0m 1 : Hayır sever, gönüllü çalısan.\n 2 : El isleri yapardım.\n 3 : Yazılım, kodsal seyler.\n 4 : Film / Dizi yorumlayıcısı, elestirmen.\n 5 : insanlardan uzakta tarihi öğrenmek ve doğayı gezmek . \n",
        "\033[1;31m17. Boş zamanını hangisi ile değerlendirirsin ?\n\033[0m 1 : Bilgisayar da takılarak.\n 2 : Belgesel,film vs  izleyerek.\n 3 : Yeni seyler ögrenerek.\n 4 : Kendime zaman ayırarak.\n 5 : Yatıp uyuyarak. \n ",
        "\033[1;31m18. Şiir senin için ne ifade ediyor ? \n\033[0m 1 : Anlatamadıklarımızın yansıması, yasantımızdaki yoldasımız.\n 2 : Şiir kendimi bulmama yardım ediyor.\n 3 : Güzel ve herkesin anlayamadığı cümleler ilgimi çekiyor.\n 4 : Hayatımda net bir yeri yok.\n 5 : Yasanilanlarin altindaki hissleri, gercekleri anlatıyor. \n ",
        "\033[1;31m19. Verilecek en güzel hediye hangisi ?\n\033[0m 1 : Manevi anlamı olan seyler.\n 2 : El yapımı hediyeler.\n 3 : Aranızda anısı olan, istediğini bildiğin bir şey.\n 4 : Her sey olabilir.\n 5 : Kendi kaleminden bir mektup. \n",
        "\033[1;31m20. Özel günler hakkında düşüncelerin neler ?\n\033[0m 1 : Asla unutulmamalı.\n 2 : Güzel ama spontane yapılan şeyler daha anlamlı.\n 3 : Her seyin şans eseri tanimlanmis bir gune baglanmasini sacma buluyorum.\n 4 : Bazıları çok gereksiz.\n 5 : Cok abartılmadı sürece kutlanmalı. \n",

    };
    for (int i = 0; i < 20; ++i)
    {
        printf("%s", sorular[i]);
        printf("\033[1;31mCevap: \033[0m");


        if (scanf_s("%d", &cevap) == 1)
        {

            switch (cevap)
            {
            case 1:
                puan++;
                system("cls");
                break;

            case 2:
                puan += 2;
                system("cls");
                break;

            case 3:
                puan += 3;
                system("cls");
                break;

            case 4:
                puan += 4;
                system("cls");
                break;

            case 5:
                puan += 5;
                system("cls");
                break;

            default:
                printf("Hatali cevap lütfen tekrar cevaplayiniz.\n");
                yukleme_ekrani(50);
                system("cls");
                printf("");
                i--;
                break;
            }
        }
        else
        {
            printf("\033[1;31mHatalı giriş lütfen bir sayı giriniz.\033[0m\n");
            yukleme_ekrani(50);
            system("cls");
            printf("");
            i--;
            // Hatalı girişleri temizle
            while (getchar() != '\n');
        }
    }






    karar_verme();
}





int main()
{
    setlocale(LC_ALL, "Turkish");
    while (1)
    {
        giris_ekrani();
        kayitlar();
        giris_ekrani();
    }

}