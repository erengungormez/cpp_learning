#include <iostream>
using namespace std;

int main()
{
	//int a[] = { 2,5,8,12 };  // a dizinin tanimlanmasi

	//cout << a[1]; // birinci index in gosterilmesi

		
	// For dongusuyle diziler


	/*int a[5] = { 1,5,0,6,4};
	int i;

	for (i=0;i<=4;i++)
	{
		cout << a[i];
	}*/
	int z, b, c;

	cout << "Vize notu: ";
	cin >> z;

	cout << "Final notu: ";
	cin >> b;

	c = (z * 0.4) + (b * 0.6);


	if (c >= 50)
	{
		cout << "Donem ortalamasi: " << c << "  GECTI";
	}
	else
	{
		cout << "Donem ortalamasi: " << c << "  KALDI";
	}

	






}