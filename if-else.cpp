#include <iostream>
using namespace std;

int main()
{
	// Kullanicidan bir sayi al ve 100 den buyuk veya kucuk oldugunu yazdir.


	
	int a;

	cout << "Bir sayi yaz: ";
	cin >> a;

	if (a<100)
	{
		cout << "Yazdiginiz sayi 100 den kucuk";
	}
	else
	{
		cout << "Yazdiginiz sayi 100 den buyuk";

	}
	

	//Final ve vize notlari sonrası 50 ve ustundeyse "Gecti" , altindaysa "Kaldi yazdir" (Final:%60 Vize:%40)

	 
	
	int z,b,c;

	cout << "Vize notu: ";
	cin >> z;

	cout << "Final notu: ";
	cin >> b;

	c = (z * 0.4) + (b * 0.6);

	
	if (c >= 50)
	{
		cout << "Donem ortalamasi: " << c <<"  GECTI";
	}
	else
	{
		cout << "Donem ortalamasi: " << c << "  KALDI";
	}
	
	

	// Iki sayin buyuk olani bulma

	
	int sayi1, sayi2;

	cout << "Birinci sayiyi giriniz: ";
	cin >> sayi1;

	cout << "Ikinci sayiyi giriniz: ";
	cin >> sayi2;

	if (sayi1 > sayi2)
	{
		cout << "Birinci sayi daha buyuk";
	}
	else
	{
		cout << "Ikinci sayi daha buyuk";

	}
	


	// if-else karar yapisiyla bir palaka ornegi yapalim

	
	int a;


	cout << "Bir plaka yaziniz: ";
	cin >> a;
	
	if (a==16)
	{
		cout << "Bursa";
	}
	else if (a == 34)
	{
		cout << "Istanbul";
	}
	else if (a == 25)
	{
		cout << "Erzurum";
	}
	else
	{
		cout << "Tekrar deneyiniz";
	}
	



    /*Kullanıcıdan bir not girmesini iste eğer 100 - 90 arasiysa A
                                                90 - 80 arasiysa B
												80 - 70 arasiysa C
												70 - 60 arasiysa D
												60 - .. arasiysa F
     */


	int sinav;

	cout << "Sinav notunuzu giriniz: ";
	cin >> sinav;

	if (sinav>=90 && sinav<=100)
	{
		cout << "A ile gectiniz";
	}
	else if (sinav >= 80 && sinav <= 89)
	{
		cout << "B ile gectiniz";
	}
	else if (sinav >= 70 && sinav <= 79)
	{
		cout << "C ile gectiniz";
	}
	else if (sinav >= 60 && sinav <= 69)
	{
		cout << "D ile gectiniz";
	}
	else
	{
		cout << "F ile gecemediniz";
	}
	





		
	return 0;
}