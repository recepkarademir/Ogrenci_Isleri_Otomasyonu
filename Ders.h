// include korumasi
#ifndef Ders  // if not define( bu kütüphane hala tanımlanmadıysa)
#define Ders // Ders kütüphanesini tanımlanır.
// yeni tanımlama yapılırsa bura çalışacak
// main içerisinde mainden önce tanımlanması gerekenler struct veya prototip gibi. buraya yazılmalıdır.

int secimekrani3();// Ders.cpp içindeki bir fonksiyonun prototipi tanımlanmış.
void DersEkleme();// Ders.cpp içindeki bir fonksiyonun prototipi tanımlanmış.
void DersBilgileriGuncelleme();// Ders.cpp içindeki bir fonksiyonun prototipi tanımlanmış.
void DersListeleme();// Ders.cpp içindeki bir fonksiyonun prototipi tanımlanmış.
void DersArama();// (ders adına göre) Ders.cpp içindeki bir fonksiyonun prototipi tanımlanmış. 

#endif // zaten Ders kütüphanesini tanımlıysa endif ile işlem sonlandırılacak.
