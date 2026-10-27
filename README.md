# 🎭 Şiir Öneren Kişilik Testi (C)

> 20 soruluk bir kişilik testi uygulayan, sonuca göre kullanıcıya kişiliğine uygun bir şiir öneren renkli konsol uygulaması.
>
> *A colorful C console app that runs a 20-question personality test and recommends a poem matching the result.*

![Dil](https://img.shields.io/badge/Dil-C-00599C?logo=c&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Windows-0078D6?logo=windows&logoColor=white)
![IDE](https://img.shields.io/badge/IDE-Visual%20Studio%202022-5C2D91?logo=visualstudio&logoColor=white)

## 📌 Proje Hakkında

Bu projenin amacı kodlama ile sanatı bir araya getirmektir. Kullanıcı 20 soruyu yanıtlar, her cevap önceden belirlenmiş bir puana karşılık gelir ve toplam puanın aralığına göre bir kişilik analizi yapılır. Analizin sonunda kullanıcıya kişiliğine uygun bir şiir sunulur.

Sorular, cevap seçenekleri ve puanlama sistemi tamamen tarafımdan hazırlanmıştır; puan aralıkları kişilik tiplerinin genel özellikleri incelenerek belirlenmiştir.

## ✨ Özellikler

- **Menü:** Teste başlama veya geçmiş kayıtları görüntüleme
- **20 soruluk test:** Her cevap için ayrı puanlama
- **Kişilik analizi:** Toplam puanın aralığına göre kişilik tipi ve ona özel şiir önerisi
- **Kayıt geçmişi:** Oturum boyunca en fazla 20 kullanıcının adı ve puanı saklanır ve listelenebilir
- **Görsel deneyim:** ANSI renk kodları, yükleme animasyonu, `Sleep()` / `system("cls")` ile ekran geçişleri

## 🛠️ Kullanılan Teknolojiler

| Alan | Teknoloji |
| --- | --- |
| Dil | C |
| Geliştirme ortamı | Visual Studio 2022 (MSVC) |
| Kütüphaneler | `stdio.h`, `stdlib.h`, `locale.h` (Türkçe karakter desteği), `Windows.h` |
| Arayüz | ANSI escape kodlarıyla renklendirilmiş konsol |

## 📁 Proje Yapısı

```
.
├── KisilikTesti.sln             # Visual Studio çözüm dosyası
└── KisilikTesti/
    ├── KisilikTesti.c           # Uygulamanın kaynak kodu
    ├── KisilikTesti.vcxproj
    └── KisilikTesti.vcxproj.filters
```

| Fonksiyon | Görevi |
| --- | --- |
| `giris_ekrani()` | Ana menü ve kullanıcı seçimi |
| `soru_sorma()` | 20 sorunun sorulması ve puanlanması |
| `karar_verme()` | Puan aralığına göre kişilik analizi ve şiir önerisi |
| `isim_ve_puan_kaydet()` | Sonucun kayıt listesine eklenmesi |
| `son_kayitlari_yazdirma()` | Geçmiş kayıtların listelenmesi |
| `yukleme_ekrani()` | Yükleme animasyonu |

## 🚀 Çalıştırma

1. Depoyu klonlayın.
2. `KisilikTesti.sln` dosyasını Visual Studio 2022 ile açın.
3. **Ctrl + F5** ile derleyip çalıştırın.

> Proje `Windows.h` ve `scanf_s` kullandığı için Windows üzerinde MSVC ile derlenecek şekilde hazırlanmıştır.

## 🖥️ Örnek Ekran

```text
---------- KİŞİLİK TESTİNE HOŞ GELDİNİZ :) ----------

-> Lütfen seçim yapınız:
1- Teste Başlamak için lütfen 1'i seçiniz.
2- Geçmiş Kayıt Görüntülemek için lütfen 2'yi seçiniz.
-> Seçiminiz:
```

## 🔗 İlgili Proje

Aynı testin grafik arayüzlü sürümü: **C# Windows Forms ile Şiir Öneren Kişilik Testi**

## 👩‍💻 Geliştirici

**Zeynep Erdem** — [github.com/zeyerdm](https://github.com/zeyerdm)
