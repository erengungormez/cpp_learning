# include <iostream>
using namespace std;

int main()
{
	// a++ Once bastir sonra arttir    a--           Arttirma-azaltma operatorleri
 	// ++a Once arttirir sonra bastir. --a


	int a = 50;
	int b = 30;

	cout << a++ << endl;
	cout << ++b << endl;

	// Kod ciktisi:  50 31




	// Kullanicidan iki sayi alin ve sayilarin birer arttirilmis halini ekranda gösterin 


	int sayi1, sayi2;

	cout << "Selamlar, bir sayi girer misin? " << endl;
	cin >> sayi1;
	cout << "Bir sayi daha lutfen..." << endl;
	cin >> sayi2;

	cout <<"Tesekkurler, iste sectigin sayilarin bir arttirilmis hali : " << endl;

	cout << ++sayi1 << endl;
	cout << ++sayi2 << endl;


	//             **DONGULER**   For Dongusu


	// FOR : Tek bir hamlede birden cok olayi yapmak icin kullanabiliriz.
	
	//orn; 100 defa selam yaz
	
	int i;   // integer bir i tanimlandi

	for (i=1;i<=10;i++)   // i'yi 1 den baslat;      i max 10'a kadar gitsin;     i'yi 1 arttir
	{
		cout << ":')"<< endl;
	}
	
  
	// 1 den 10'a kadar olan sayilari yazdirmaya yarayan program

	int sayi;

	for (sayi = 1; sayi<10; sayi++)
	{
		cout << sayi << endl;
	}



	//Bir sayinin tek mi cift mi olduhunu hesaplaan programi 10 kez calistir

	int a;
	int b;

	for (a=1;a<=10;a++)
	{

		cout << "Bir sayi giriniz: " << endl;
		cin >> b;

		if (b%2 == 0)
		{
			cout << "Cift sayi" << endl;

		}
		else
		{
			cout << "Tek sayi" << endl;

		}
	}

	// 1 ile 10 arasindaki sayilarin toplamini yazdiran programi yaziniz


	int x;
	int toplam = 0;

	for (x=1;x<=5;x++)
	{
		toplam = toplam + x;
	}
	cout <<"Toplam: " <<toplam<< endl;












































}