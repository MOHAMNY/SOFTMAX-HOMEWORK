# Toplu Taşıma Hattı Planlaması Projesi

Bu proje, Kırklareli'nin 3 mahallesi için yeni bir toplu taşıma hattı planlaması yapar. *Softmax algoritması* kullanılarak, her mahalle için belirlenen kriterlere (nüfus yoğunluğu, ulaşım altyapısı, maliyet, çevresel etki, sosyal fayda) göre en uygun güzergah belirlenir.

## Proje Detayları
- *Kriterler*: Nüfus yoğunluğu, ulaşım altyapısı, maliyet, çevresel etki, sosyal fayda.
- *Algoritma*: Softmax ile kriterler normalize edilir ve en uygun mahalle seçilir.
- *Kod*: C dili kullanıldı.

## Nasıl Çalıştırılır?
1. Kodu indirin:
   bash
   git clone https://github.com/MOHAMNY/SOFTMAX-HOMEWORK/blob/main/odev.c
   
2. Derleyin ve çalıştırın:
   bash
   gcc main.c -o main -lm
   ./main
   

## Örnek Çıktı

Softmax Puanları:  
Mahalle 1: 0.36  
Mahalle 2: 0.33  
Mahalle 3: 0.31  

En uygun mahalle: Mahalle 1 (Puan: 0.36)
