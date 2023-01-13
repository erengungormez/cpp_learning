#include <iostream>
#include <cmath> // Matematiksel hesaplar icin kullanilan kutuphane

using namespace std;

void mesaj() // Mesaj adinda bir fonksiyon tanimliyor
{
	cout << "Selamlar \n\n";
}



int main()
{
	mesaj(); // Mainde onceki yaptigini cagiriyorsun


	// Matematiksel Fonksiyonlar

	// Ýnclude ile kod hanesine eklenirler. "cmath" diye tanimlarir genelde double degiskeni kullanilir.


	/*double a;

	cout << "Bir sinus degeri giriniz: ";
	cin >> a;

	cout << "Sonuc; " << sin(a); */// sinus degerini a ile cagiriyoruz




	/*
			-Bazi matematiksel fonksiyonlar-
			
			double sqrt(x) = x'in karekoku
			double pow(x,y) = x'in y'ninci kuvveti
			double fabs(x) = x'in mutlak degeri
			double floor(x) = x'i en kucuk tam sayiya yuvarla  
			double ceil(x) = x'i en buyuk tam sayiya yuvarla
			int rand(x) = rasgele sayi
			double fmod(x,y) = x'in y'ye bolumunden kalan 
			max = Ýki ya da daha cok deger arasindan en buyuk degeri verir.
			min = Ýki ya da daha cok deger arasindan en kucuk degeri verir.

	*/

	// Uslu sayi hesaplamaya yardimci olacak bir program yaziniz.

	/*double taban, us;

	cout << "Bir taban bilgisi giriniz; ";
	cin >> taban;
	cout<< "Bir us bilgisi giriniz; ";
	cin >> us;

	cout << "Girdiniz uslu sayinin degeri: " << pow(taban, us);*/


	/* String Kutuphane Fonksiyonlari

		.lenght() = kac karakter kullanýlgýnýn belirtir (Bosluklarý da sayar)
		.append() = string nesne icersine ekleme yapmaya yarar.
		.asssing() = string icersindeki icerigi bir baskasiyla degistirmeye yarar

	*/


	string a = "Uludag Universitesi";

	cout << a << endl;

	cout << a.append(" cok guzel");






}