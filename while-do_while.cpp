#include <iostream>

using namespace std;

int main()
{
	// While

	// 1 den 5 e kadar olan sayilari while dongusuyla yazdirma

	/*int i = 1;

	while (i<=5) // i 5e kadar gitsin
	{
		cout << i << endl; // i'yi yazdir
		i++; // i'yi 1 arttir

	}
	*/

	// Do-While

	// 1 den 5 e kadar olan sayilari do-while dongusuyla yazdirma

	/*
	int i = 1; // i yi 1 tanimla

	do // yap
	{
		cout << i << endl; // i yi yazdir
		i++; // i yi 1 arttir

	} while (i<=5);  // oluncaya kadar 

	*/
	//-----------------------------------------------------------------------------------------------


	// Sorular


	// 5 kez 2 sayi al ve toplamlarini yazdir. (While dongusuyle)


	/*int i = 1;
	int a,b;

	while (i<=5)
	{
		cout << "Bir sayi girermisin: ";
		cin >>a;
		cout << "Bir sayi girermisin: ";
		cin>>b;

		cout << "Sayilarin toplami: "<<a+b;

		i++;

	}*/


	// 5 kez 2 sayi al ve toplamlarini yazdir. (Do-while dongusuyle)

	int i = 1;
	int a, b;

	
	do
	{
		cout << "Bir sayi girermisin: ";
		cin >> a;
		cout << "Bir sayi girermisin: ";
		cin >> b;

		cout << "Sayilarin toplami: " << a + b;
		i++;
	} while (i<=5);


}	