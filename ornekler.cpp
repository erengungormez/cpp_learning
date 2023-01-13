#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	// Ýf-else karar yapilarina sahip bir hesap makinasi tasarlayin
	
	/*int a, b, c,d,e,f,g,h;
	string islem;


	cout << "******************* Hesap makinesýne hos geldiniz *******************"<<endl<<endl<<endl;


	cout << "Yapmak istediginiz islemi secin (4 islem): ";
	cin >> islem;

	if (islem == "toplama")
	{
		cout << "Sayi giriniz; ";
		cin >> a;
		cout << "Sayi giriniz; ";
		cin >> b;

		cout << "Girdiginiz sayilarin toplami: "<<a+b;
	}
	else if(islem == "cýkarma")
	{
		cout << "Sayi giriniz; ";
		cin >> c;
		cout << "Sayi giriniz; ";
		cin >> d;

		cout << "Cýkarma sonucu: " << c - d;
	}
	else if (islem == "bolme")
	{
		cout << "Sayi giriniz; ";
		cin >> e;
		cout << "Sayi giriniz; ";
		cin >> f;

		cout << "Bolme sonucu: " << e / f;
	}
	else if (islem == "carpma")
	{
		cout << "Sayi giriniz; ";
		cin >> g;
		cout << "Sayi giriniz; ";
		cin >> h;

		cout << "Carpma sonucu: " << g * h;
	}
	else
	{
		cout << " 'toplama,cýkarma,carpma,bolme' bunlardan birini yazmalisin... ";

	}*/


	/*
		Matematiksel formullerin bulundugu bir program tasarlayin ve kullanici istedigi formulu
		sectiginde program calýssýn.

		- Ucgenin alani
		- Karenin alani
		- Dairenin alani
	*/		

	/*int taban,r,sonuc,yukseklik,karekenar;



	cout << "******************* Matematik Formullerine  hos geldiniz *******************" << endl << endl << endl;
		
	cout << "Ucgenin alanini ogrenmek istiyorsaniz '1' yazin: " << endl;
	cout << "Karenin alanini ogrenmek istiyorsaniz '2' yazin: " << endl;
	cout << "Dairenin alanini ogrenmek istiyorsaniz '3' yazin: " << endl;
	cin>>sonuc;

	if (sonuc == 1)
	{
		cout << "Taban bilgisi giriniz: ";
		cin >> taban;
		cout << "Yukseklik bilgisi giriniz: ";
		cin >> yukseklik;
		cout << "Alan: "<<(yukseklik*taban)/2;
	}
	else if (sonuc == 2)
	{
		cout << "Kenar bilgisi giriniz: ";
		cin >> karekenar;
		cout << "Alan: " << karekenar*karekenar;

	}
	else if (sonuc == 3)
	{
		cout << "Yaricap bilgisi giriniz: ";
		cin >> r;
		cout << "Alan: " << 3*(r*r);
	}
	else
	{
		cout << "Tanimlanamadi, tekrar deneyiniz...";
	}*/

//---------------------------------------------------------------------------------------------------------------




	/*                                                                 ATM Programlama...
	                       1. PARA YATIRMA MENUSU

	- 4 haneli sifre alma
	- Para yatirma menusu 
	- Para sayiliyor
	- Yatirilan tutari onayliyor musun?
	- Evet ise yatýr, hayir ise ana menuye don

						   2. PARA CEKME MENUSU

	- Cekmek istediginiz tutari giriniz
	- Paranizi ve kartinizi almayi unutmayin

						   3. EFT MENUSU

	- Para gondermek isrediginiz kisininin ÝBAN numarasi giriniz
	- Gondermek istediginiz tutari gir
	- Gönderim ucreti ucretin %1 i kadar olsun 
	- Yatirilan tutari onayliyor musun?
	- Evet ise yatýr, hayir ise ana menuye

	*/

	int sifre,menu,iban,para;
	string mebla,komisyon;


	cout << "******************* Eren Bankaya Hosgeldiniz *******************" << endl << endl << endl;


	cout << "4 haneli sifrenizi giriniz: ";
	cin >> sifre;

	if (sifre == 1907)
	{
		cout << "Ana menuye yonlendiriliyorsunuz..."<<endl << endl << endl;
		
		cout << "Hangi islemi yapmak istersiniz; ";
		cout << "1 Para Yatirma " << endl;
		cout << "2 Para Cekme " << endl;
		cout << "3 IBAN Gonderimi " << endl;
		cin >> menu;

		if (menu==1)
		{
			cout << "Yatirmak istediginiz meblayi yatirin"<<endl<<endl;

			cout << "Yatirilan meblayi onayliyor musunuz: ";
			cin >> mebla;
			
			if (mebla == "evet")
			{
				cout << "Paraniz yatirildi, bizi tercih ettiginiz icin tesekkurler";
			}
			else if (mebla == "hayir")
			{
				cout << "Paraniz yatirilmadi, kart ideade ediliyor...";
			}
		}
		else if (menu == 2)
		{
			cout << "Cekmek istediginiz miktari girin. (Sadece 20,50,100,200 tl çekilebilir)";
			
			cout << "Kartinizi ve kartinizi almayi unutmayin";
		}
		else if (menu == 3)
		{
			cout << "Para yatirmak istediginiz IBAN numarasini girin";
			cin >> iban;

			if (iban==111222333)
			{
				cout << "Yatirmak istediginiz miktari girin. (Yatirdiginizin %1 i komisyon kesilir!!!)";
				cin >> para;

				cout << (para*0.01)<<" TL komisyon kesilecek onayliyor musunuz?";
				cin >> komisyon;

				if (komisyon=="evet")
				{
					cout << "Ýslem basarili, iyi gunler";
				}
				else if (komisyon == "hayir")
				{
					cout << "Ýslem reddedildi, iyi gunler";
				}
				else
				{
					cout << "Ýslem reddedildi, iyi gunler";

				}
			}
			else
			{
				cout << "Ýslem reddedildi, iyi gunler";

			}


		}
		else
		{
			cout << "Ýslem reddedildi, iyi gunler";

		}



	}
	else
	{
		cout << "Hatali sifre, tekrar deneyin...";

	}










	






























}

