# BCD Sayı Üretme ve İkiliye Çevirme  

Bu proje, ondalıklı BCD (Binary Coded Decimal) sayıları ikili (binary) formata dönüştürmek için yazılmış C, IA32 ve x86_64 kodlarını içerir.  

## Özellikler  
- **Maksimum 8 rakamlı ondalıklı sayıları destekler**: Örneğin, 532.13022 gibi sayıları işleyebilir.  
- **C diliyle geliştirilmiş**: Platform bağımsız bir şekilde çalışır.  
- **IA32 ve x86_64 kodları**: Daha düşük seviyeli platformlarda çalışan optimize edilmiş sürümleri içerir.  

## Dosya Yapısı

- **theCode.c: C dili ile yazılmış ana kod.
- **theCode_IA32: IA32 mimarisi için assembly kodu.
- **theCode_x86_64: x86_64 mimarisi için assembly kodu.

## Örnek

Giriş olarak 532.13022 verildiğinde, çıktı şu şekilde olur:
  BCD: 1000010100.0010000101010100110010011000010111110000011
  Binary: (Tam sayı karşılığı)
    
## Kullanım  
1. Projeyi klonlayın:  
   ```bash
   git clone https://github.com/Noraldim/BM_Architecture.git
   cd BM_Architecture
gcc -o theCode theCode.c  
./theCode


![image](https://github.com/user-attachments/assets/03a14516-2637-4d4c-8e4a-c4e38d29c83e)


IA32

![image](https://github.com/user-attachments/assets/6da1bed4-5da6-45c8-b242-a5b6c8cefbdb)


x86

![image](https://github.com/user-attachments/assets/248d4ff4-e759-48ca-b1ac-6d9838e2ddf6)




# Canlı Demo[https://www.binary.alpharesearch.me/]
