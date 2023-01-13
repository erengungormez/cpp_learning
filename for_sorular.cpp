#include <iostream>

using namespace std;

int main()
{

	// Alt alta 10 defa for dongusuyla "Hello World yazdirin"

	/*int i;

	for (i=1; i<=10; i++)
	{
		cout << "Hello World" << endl;
	}*/



	// 1'den 100'e kadar sayilari alt alta yazdiran programi for kullanarak yazin


	/*int i;
	
	for (i=1; i<100; i++)
	{
		cout << i << endl;
	}*/


	// Ýki sayinin toplamini hesaplayan programi 5 defa tekrar ettiriniz


	/*int i,sayi1,sayi2;

	for (i=1; i<=5; i++)
	{

		cout << "Bir sayi girer misiniz?: ";
		cin >> sayi1;
		cout << "Bir daha lutfen... ";
		cin >> sayi2;

		cout << "Girdiginiz sayilarin toplami: " << sayi1 + sayi2 << endl;
	}*/



	// 1 den 40 a kadar olan sayilarin toplamini bulunuz

	/*int i,toplam = 0;

	for (i=1; i<40; i++)
	{
		toplam += i;
	
	}
	cout << "1 den 40 a kadar olan sayilarin toplami: \n" << toplam << endl;
*/

	// Kullanican sayi alin ve tek mi cift mi oldugunu anlasin 10 kere calissin

	/*int i;
	int sayi;

	for (i=1; i<=10; i++)
	{
		cout << "Bir sayi gir: "<<endl;
		cin >> sayi;

		if (sayi % 2 == 0)  // Ciftse
		{
			cout << "Girdiginiz sayi cift"<<endl;
		}
		else
		{
			cout << "Girdiginiz sayi tek"<<endl;

		}5

	}
	*/


	// Kullanicidan 10 tane sayi alin 

	/*int i, sayi;

	for (i=1; i <= 10; i++)

	{
		cout << "Sayi gir: ";
		cin >> sayi;
	}*/
	



	// 0 dan 10 a kadar olan cift sayilari listeleyin


	/*int i;

	for (i=1; i<10; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}*/



	// 1 den 10 a kadar olan sayilarin kareleri

	/*int i,toplam;
	
	for (i=1; i<=10; i = i + 1)
	{
		cout << i*i<< endl;

	}*/
    

	// For dongusuyle 1 den 10 a kadar sayilari alt alta yazalim eger dongu 5'e esit olursa program durs 

	/*int i;
	
	for (i=1; i<=10; i = i + 1)
	{
		cout << i << endl;

		if (i == 5)
		{
			break; // Donguyu kirmaya yarar.
		}
	}
	*/



	// 1de 10 a kadar sayilar yazdirilsin eger sayi 7 ye esit olursa program sayiyi atlayip yazdirmaya devam etsin

	
	/*int i;

	for(i=1; i<=10; i++)
	{
		if (i == 7)
		{
			continue;	
		}
		cout << i << endl;
	}*/

	
	// 1den 10 a kadar sayilari yazdirin eger program 3. yazisa geliyorsa 3'u atlayarak devam etsin

	/*int i;	

	for (i=1; i<=10; i++)
	{
		if (i == 3)
		{
			continue;
		}
		cout << i;
	}*/



	// 1 den 10a kadar sayilari yazdirin eger 4 e gelirse program durdurulsun


	/*int i;

	for (i = 1; i < 10; i++)
	{
		if (i==4)
		{
			break;
		}

		cout << i<<endl;

	}*/


	// Progrmadan 10 tane sayi alin eger 5e esitse program durdurulsun

	/*int i, sayi;

	for (i=1;i<10; i++)
	{
		cout << "Bir sayi girer misin? ";
		cin >> sayi;

		if (sayi == 5)
		{

			cout << "Elendin dostum";

			break;

		}
	}*/
	
	
	// Program 1den 20 ye kadar sayilari yazdir eger sayi 12 ile 15 arasindaydsa bu sayilari atlayark yazdir.
	

	/*int i;

	for (i=1;i<20;i++)
	{
		

		if (i>12 && 15>i)
		{
			continue;
		}

		cout << i << endl;
	}*/

	
	















}