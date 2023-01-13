#include <iostream>

using namespace std;

int main()
{
	int i;

	cout << "1 ile 4 arasi bir sayi; ";
	cin >> i;

	switch (i)
	{
	case 1:
		cout << "1 Sayisini girdiniz.";
		break;
	case 2: 
		cout << "2 Sayisini girdiniz.";
		break;
	case 3:
		cout << "3 Sayisini girdiniz.";
		break;
	case 4:
		cout << "4 Sayisini girdiniz.";
		break;

	default:
		cout << "Bulunamadi";
	}






}