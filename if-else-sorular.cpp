#include <iostream>
using namespace std;

int main()
{
	// a sayisi 5 e esitse a sayisi 5 e esittir, degilse 5 e esit degildir programini yazin


	/*int A;
	cout << "Bir A sayisi giriniz: ";
	cin >> A;

	if (A == 5)
	{
		cout << "A sayisi 5 e esittir. \n";
	}
	else
	{
		cout << "A sayisi 5 e esit degildir. \n";

	}*/



    // a sayisi 10 dan buyukse a sayisi 10 dan buyuktur, degilse a sayisi 10 dan kucuktur programini yazin

	/*int a;

	cout << "a sayisi giriniz : ";
	cin >> a;

	if (a > 10)
	{
		cout << "a sayisi 10 dan buyuktur";
	}
	else if (10 > a)
	{
		cout << "a sayisi 10 dan kucuktur";
	}
	else
	{
		cout << "a sayisi 10 a esittir.";

	}*/

	// a sayisi 10-100 arasındadır  programini yazin


	/*
	int a;
	 
	cout << "10-100 arasinda bir sayi yaziniz: ";
	cin >> a;

	if (a > 10 && 100 > a)
	{
		cout << "Dogru";
	}
	else
	{
		cout << "Tekrar deneyin.";

	}
	*/

	//  a sayisinin karesini hesaplayan bir program yaziniz.

	/*int a,b;

	cout << "a sayisi giriniz: ";
	cin >> a;

	b = a * a;

		cout << "a sayisinin karesi: " << b;*/


	//  a sayisinin kupunu hesaplayan bir program yaziniz.

		/*int a, b;

		cout << "a sayisi giriniz: ";
		cin >> a;

		b = a * a * a;

		cout << "a sayisinin kubu: " << b;*/


	// Kullacidan sayi alin ve bunun tek veya cift oldugunu bulan program yazin

	/*int a;

	cout << "Bir sayi giriniz; ";
	cin >> a;

	if (a % 2 == 0)
	{
		cout << "Girdiginiz sayi cift ";

	}
	else
	{
		cout << "Girdiginiz sayi tek \n ";

	}*/



	// Bir ucgeninin taban alanini hesaplayan bir program yazin ((Taban * Yukseklik) / 2)

	/*int taban, yukseklik, alan;	
    
	cout << "Taban kac cm: ";
	cin >> taban;
      
	cout << "Yukseklik kac cm: ";
	cin >> yukseklik;

	alan = ((taban * yukseklik) / 2);
	
	cout << "Alan " << alan << " santimetrekare.";*/

	 // Karenin alanini hesaplayan bir program yazin

	/*int kenar,alan;
	cout << "Kenar kac cm: ";
	cin >> kenar;

	alan = kenar * kenar;

	cout << "Alan " << alan << " santimetrekare.";*/ 


	// Dikdortgenin cevrasini hesaplayan bir algoritma yazin


	/*int uzunkenar, kisakenar, cevre;

	cout << "Uzun kenar kac cm: ";
	cin >> uzunkenar;
	cout << "Kisa kenar kac cm: ";
	cin >> kisakenar;

	  
	cevre = (uzunkenar + kisakenar) * 2;

	cout << "Dikdortgenin cevresi "<<cevre<< " santimetredir.";*/


	// Dairenin alanini hesaplayan bir program yaziniz (pi= 3.14)  Daire alanı: pi*r*r

	/*int r, pi = 3.14, alan;

	cout << "yaricap ne kadar ";
	cin >> r ;
	
	alan = pi * r * r;

	cout << "Alan: "<< alan <<" metrekaredir.";*/



	//Programa ucgenin ic acılarından iki tanesini girin ucuncuyu kendi bulsun(180-(a+b))


	/*int a, b;

	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;

	cout<<(180 - (a + b));*/


	// Bir plaka giriniz, girdiğiniz plaka 34 ise Istanbul yazsin değilse bulunamadi yazsin

	/*int Istanbul;
	
	cout << "Bir plaka giriniz: ";
	cin >> Istanbul;

	if (Istanbul == 34)
	{
		cout << "Istanbul \n";
	}
	else
	{
		cout << "Tekrar deneyiniz" << endl;
	}*/


	// Bir acı giriniz, acı degeri 0-90 arasindaysa dar,geniş,dikdoğru,tam seklinde belirtiniz

	/*int aci;

	cout << "Bir aci degeri giriniz: ";
	cin >> aci;

	if (aci > 0 && 89 >= aci)
	{
		cout << "DAR ACI";
	}
	else if (90 < aci && 180>aci)
	{
		cout << "GENIS ACI";
	}
	else if (aci == 90)
	{
		cout << "DIK ACI";

	}
	else if (aci == 360)
	{
		cout << "TAM ACI";

	}*/



	// Iki sayi girin ve ortalamasini yazdirin.

	/*int sayi1, sayi2;

	cout << "Ilk sayiyi giriniz: ";
	cin >> sayi1;
	cout << "Ikinci sayiyi giriniz: ";
	cin >> sayi2;

	cout << (sayi1 + sayi2) / 2;*/


	// Uc sayi girin ve ortalamasini yazdirin.
	/*int sayi1, sayi2,sayi3;

	cout << "Ilk sayiyi giriniz: ";
	cin >> sayi1;
	cout << "Ikinci sayiyi giriniz: ";
	cin >> sayi2;
	cout << "Ucuncu sayiyi giriniz: ";
	cin >> sayi3;


	cout << (sayi1 + sayi2 + sayi3) / 3;*/

	// Kullanici adi ve sifre alan bir program yazin.

	/*string isim,parola;

	cout << "Isim bilgisini giriniz: ";
	cin >> isim;

	cout << "Parola bilgisini giriniz: ";
	cin >> parola;

	if ((isim == "Eren")&&(parola=="eren19"))
	{
		cout << "Basarili :) ";
	}
	else
	{
		cout << "zortlandiniz tekrar deneyin :(( ";
	}*/


	// Arac markalarini girin ve bunlarin hangi ulkeye ait oldugunu gösterin

	/*string arac;


	cout << "Arac markasini giriniz: ";
	cin >> arac;

	if (arac == "toyota")
	{
		cout << endl <<"Japonya araci";

	}
	else if (arac == "togg")
	{
		cout << "Turk araci";
	}
	else
	{
		cout << "Baska dene";
	}*/


	// Bir ay girininiz girilen ayin hangi mevsim oldugunu bulunuz.


	/*string ay;

	cout << "Bir ay yaziniz: ";
	cin >> ay;

	if ((ay == "ocak") || (ay == "subat") || (ay == "aralik"))
	{
		cout << "Mevsiniz kis";

	}
	else if ((ay == "mart") || (ay == "nisan") || (ay == "mayis"))
	{
		cout << "Mevsiniz ilkbahar";

	}
	else if ((ay == "haziran") || (ay == "temmuz") || (ay == "agustos"))
	{
		cout << "Mevsiniz yaz";

	}
	else if ((ay == "eylul") || (ay == "ekim") || (ay == "kasim"))
	{
		cout << "Mevsiniz sonbahar";

	}
	else
	{
		cout << "ay yaz salak";

	}*/









}