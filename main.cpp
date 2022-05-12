#include "alzArt.h"

int main()
{
	Zakaznik *c1, *c2, *c3;
	RegistrirovanyAccount *ac1, *ac2;
	NeRegistrirovanyAccount *ac3;

	Produkt *pr1, *pr2, *pr3;
	Notebook *n1;
	MobilniTelefon *mb1;
	Tablet *t1;

	c1 = new Zakaznik("Dmitrii Romanov", 20);
	c2 = new Zakaznik("Milos Zeman", 77);
	c3 = new Zakaznik("Anonim Anonimov", 18);

	ac1 = new RegistrirovanyAccount("Dmi20", 2.5, 100066, 20, c1);
	ac2 = new RegistrirovanyAccount("MiloAn", 30, 100001, 77, c2);
	ac3 = new NeRegistrirovanyAccount(c3, 18, 2);

	pr1 = new Produkt("MSI Katana GF66", 21990, 0);
	pr2 = new Produkt("Samsung Galaxy Tab S8", 18790, 5);
	pr3 = new Produkt("iPhone Xr", 9900, 10);

	n1 = new Notebook(pr1, "GeForce RTX 3050", "1920x1080", "Intel Core i5-11400", "Laptop-Motherboard", "512 GB", "1 TB");
	mb1 = new MobilniTelefon(pr2, "Support for the latest Bluetooth version", "Support 3G/4G/5G", "1792×828");
	t1 = new Tablet(pr3, "Support for the latest Bluetooth version", "Support 3G/4G/5G", "Support for drawing mode", "1792x1520");

	cout << endl << "Zakaznik: " << c1->GetNameSurname() << " Osobni sleva: " << ac1->GetPersonalDiscount() << "\nAktualni Objednavka:\n";
	cout << " 1. " << pr1->GetModel() << "\nAktualni cena: " << pr1->GetPrice() << endl << " 2. " << pr3->GetModel() << " Aktualni cena: " << pr3->GetPrice() << endl;

	cout << endl  << "Cena objednavky celkem: " << pr1->GetPrice() + pr3->GetPrice() << endl << "Datum provedeni objednavky: 08:48 05.05.2022" << endl;

	cout << "\nInfo o produktu: \nProdukt: " << pr1->GetModel() << "\nCena: " << pr1->GetPrice() << endl;
	cout << "Video Card: " << n1->GetVideoCard() << "\nProcessor: " << n1->GetProcessor() << "\nResolution: " << n1->GetResolution() << "\nSSD: " << n1->GetSSDInfo();

	cout << endl << "\n\n\nZakaznik: " << c2->GetNameSurname() << " Osobni sleva: " << ac2->GetPersonalDiscount() << "\nAktualni Objednavka:\n";
	cout << " 1. " << pr3->GetModel() << "\nAktualni cena: " << pr3->GetPrice() << endl;

	getchar();
	return 0;
}
