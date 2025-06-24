🎭 KİŞİLİK TESTİ PROJESİ
📌 Projenin Amacı
Bu projenin temel amacı, kodlama ile sanatı birleştirmektir. İlk bakışta yazılım dünyasıyla alakasız gibi görünen şiirin, aslında bilişim alanında da duygu, anlam ve estetik bir araç olarak kullanılabileceğini göstermektedir. Bu test sayesinde kullanıcılar sadece eğlenceli bir kişilik analiziyle karşılaşmakla kalmaz; aynı zamanda kişiliklerine uygun özel olarak seçilmiş şiirlerle de duygusal bir bağ kurarlar.

🧠 Projenin İçeriği
Kullanıcının cevaplarına göre puanlama yapılmakta ve belirli puan aralıklarına göre kişilik tipi analiz edilerek, her kişilik tipi için uygun bir şiir önerisi yapılmaktadır. Projede görsellik için ANSI renk kodları ve Windows konsol efektleri (örneğin Sleep, system("cls")) kullanılmıştır.

📋 Nasıl Çalışır?
Program başlatıldığında kullanıcıdan test başlatma ya da geçmiş sonuçları görüntüleme seçimi istenir.

Kullanıcı testi seçerse ismi alınır ve 20 adet soru ile kişilik testi başlatılır.

Sorulara verilen cevaplara göre puan hesaplanır.

Puan aralığına göre kullanıcının kişilik tipi analiz edilir ve kendisine uygun bir şiir sunulur.

Elde edilen isim ve puan geçmiş kayıtlara eklenir ve daha sonra görüntülenebilir.

🔍 Sorular Hakkında
Tüm sorular, cevap seçenekleri ve her bir seçeneğe verilen puan tarafımca özenle hazırlanmıştır. Cevaplara göre çıkan kişilik analizleri, rastgele değil, kişilik tiplerinin genel özelliklerinin analiz edilmesi sonucu oluşturulmuştur. Yani hangi kişilik tipi ne tür cevaplar verebilir düşünülerek kurgulanmış ve bu doğrultuda bir puanlama sistemi geliştirilmiştir.

🎨 Neden Şiir?
Proje; teknolojiyi yalnızca teknik verilerle sınırlamadan, insan ruhuna ve duygularına hitap eden sanatsal ögeleri de yazılıma dahil etme vizyonuyla oluşturulmuştur. Şiir, her ne kadar yazılımdan uzak bir kavram gibi görünse de; doğru bağlamda ve analiz odaklı kullanıldığında bilişim projelerine anlam katabileceği gösterilmek istenmiştir.

💻 Teknik Detaylar
Program dili: C

Derleyici: Visual Studio / Code::Blocks / Dev-C++ (Windows)

Kullanılan kütüphaneler:

<stdio.h> — giriş/çıkış işlemleri için

<stdlib.h> — sistem işlemleri için

<locale.h> — Türkçe karakter desteği için

<Windows.h> — Sleep() ve system("cls") gibi işlevler için

Renk kodları: ANSI escape kodları ile terminal renklendirme

📁 Örnek Ekranlar
Program çıktıları renkli konsol ekranında aşağıdaki gibi görüntülenmektedir:

rust
Kopyala
Düzenle
---------- KİŞİLİK TESTİNE HOŞ GELDİNİZ :) ----------
-> Lütfen seçim yapınız:
1- Teste Başlamak için lütfen 1'i seçiniz.
2- Geçmiş Kayıt Görüntülemek için lütfen 2'yi seçiniz.
