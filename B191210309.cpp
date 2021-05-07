/************************************************************************
**
**				ÖĞRENCİ ADI........................:Serhat BİLAL	
**				ÖĞRENCİ NUMARASI...................:B191210309
**				DERS GRUBU.........................:1A
*************************************************************************/

#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;

bool satirKontrol(int satirSayi) //Satir değerleri 5 ile 15 aralığında mı fonksiyonu
{
	if ((satirSayi >= 5) & (satirSayi <= 15))
	{
		return false;
	}
	else
	{
		return true;
	}

}


bool sutunKontrol(int sutunSayi) //Sütun değerleri 5 ile 40 aralığında mı fonksiyonu
{
	if ((sutunSayi >= 5) & (sutunSayi <= 40))
	{
		return false;
	}
	else
	{
		return true;
	}
}


bool ikiKatKontrol(int satirAdedi, int sutunAdedi) //Sütun değeri satır değerinin iki katı mı fonksiyonu
{
	if (2 * satirAdedi == sutunAdedi)
	{
		return false;
	}
	else
	{
		return true;
	}
}


void boslukEkle(int boslukAdedi) // Girilen bosluksayısı kadar boşluk yazan fonksiyon
{
	for (int j = 1; j <= boslukAdedi; ++j)
	{
		cout << " ";
	}

}


void yildizSatiri(int yildizAdedi) //Girilen adet kadar boşluk yazan fonksiyon
{
	for (int j = 1; j <= yildizAdedi; ++j)
	{
		cout << "*";
	}
}



int main()
{
	int satir, sutun, ortaBosluk, aralik, bekletme;  //Satır ve sütun ... için integer deger tanımlandı.

	satir = 1;       // istenen aralıklar dışın olacak şekilde ilk satır değeri atandı.
	sutun = 1;       // istenen aralıklar dışın olacak şekilde ilk sütun değeri atandı.
	ortaBosluk = 2;  // Şekildeki boşluk sayısını.
	aralik = 3;      // Şekildeki boşluk sayısını.
	bekletme = 100;  // Bekleme süresi

	while (ikiKatKontrol(satir, sutun)) // sutun sayısı satir sayısının iki katı mı döngüsü
	{

		while (satirKontrol(satir)) // satir 5 ten küçük veya 15 ten büyük mü döngüsü
		{
			cout << "\nSatir....:";
			cin >> satir;
			if (satir < 5 || satir > 15)
				cout << "\nSatir numarasi hatali.... Tekrar Deneyin.....\n";
		}


		while (sutunKontrol(sutun)) // sutun 5 ten küçük veya 40 ten büyük mü döngüsü
		{
			cout << "\nsutun....:";
			cin >> sutun;
			if (sutun < 5 || sutun > 40)
				cout << "\nSutun numarasi hatali.... Tekrar Deneyin.....\n";
		}


		// Eğer sutun sayısı satir sayısının iki katı ise ekrana uyarı mesajı yaz.
		if (ikiKatKontrol(satir, sutun))
		{
			cout << "\nSutun sayisi satir sayisinin iki kati olmalidir.... Tekrar Deneyin.....\n";
			satir = 1; // Tekrar döngü oluşmasın diye satır değeri tekrar atandı.
			sutun = 1; // Tekrar döngü oluşmasın diye sütun değeri tekrar atandı.
		}



	}


	// Ekrana şekil çiz.
	cout << "\n\n";
	yildizSatiri(sutun);

	for (int j = satir - aralik; j >= 0; --j)
	{
		cout << "\n*";
		boslukEkle(j);
		cout << "*";
		boslukEkle(2 * (satir - ortaBosluk - j));
		cout << "*";
		boslukEkle(j);
		cout << "*";
		Sleep(bekletme);
	}
	cout << "\n";
	yildizSatiri(sutun);



	// Ekrana şeklin tersi çiz.
	cout << "\n\n";
	yildizSatiri(sutun);

	for (int j = 0; j <= satir - aralik; ++j)
	{
		cout << "\n*";
		boslukEkle(j);
		cout << "*";
		boslukEkle(2 * (satir - ortaBosluk - j));
		cout << "*";
		boslukEkle(j);
		cout << "*";
		Sleep(bekletme);
	}
	cout << "\n";
	yildizSatiri(sutun);
	cout << "\n";


	// Ekrana şekil çiz.
	cout << "\n\n";

	return 0;
	
}
