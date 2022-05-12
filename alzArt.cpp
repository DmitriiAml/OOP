#include "alzArt.h"

Zakaznik::Zakaznik(string nS, int a)
{
	this->nameSurname = nS;
	this->age = a;
}

string Zakaznik::GetNameSurname()
{
	return nameSurname;
}

int Zakaznik::GetAge()
{
	return age;
}

string RegistrirovanyAccount::GetUcetNickName()
{
	return ucetNickname;
}

int RegistrirovanyAccount::GetUcetId()
{
	return ucetId;
}

double RegistrirovanyAccount::GetPersonalDiscount()
{
	return personalDiscount;
}

RegistrirovanyAccount::RegistrirovanyAccount(string uN, double pD, int uId, int a, Zakaznik* c)
{
	this->client = c;
	this->ucetNickname = uN;
	this->personalDiscount = pD;
	this->ucetId = uId;
	this->age = a;
}

Zakaznik* RegistrirovanyAccount::GetNameSurname()
{
	return nullptr;
}

Zakaznik* RegistrirovanyAccount::GetAge()
{
	return nullptr;
}

int NeRegistrirovanyAccount::GetLevelOfTrust()
{
	return levelOfTrust;
}

NeRegistrirovanyAccount::NeRegistrirovanyAccount(Zakaznik* c, int a, int LoT)
{
	this->client = c;
	this->age = a;
	this->levelOfTrust = LoT;
}

Produkt::Produkt(string pM, int pP, double pD)
{
	this->produktModel = pM;
	this->produktPrice = pP;
	this->produktDiscount = pD;
}

string Produkt::GetModel()
{
	return produktModel;
}

int Produkt::GetPrice()
{
	return produktPrice;
}

double Produkt::GetProductDiscount()
{
	return produktDiscount;
}

string Notebook::GetVideoCard()
{
	return videoCard;
}

string Notebook::GetProcessor()
{
	return processor;
}

string Notebook::GetResolution()
{
	return screenResolution;
}

string Notebook::GetSSDInfo()
{
	return ssdInfo;
}

string Notebook::GetHDDInfo()
{
	return hddInfo;
}

Notebook::Notebook(Produkt* prd, string vC, string p, string sR, string m, string sI, string hI)
{
	this->produkt = prd;
	this->videoCard = vC;
	this->processor = p;
	this->screenResolution = sR;
	this->motherboard = m;
	this->ssdInfo = sI;
	this->hddInfo = hI;
}

string MobilniTelefon::GetBluetoothInfo()
{
	return bluetoothInfo;
}

string MobilniTelefon::GetInternerInfo()
{
	return internetInfo;
}

string MobilniTelefon::GetScreenResolution()
{
	return screenResolution;
}

MobilniTelefon::MobilniTelefon(Produkt* prd, string bI, string iI, string sR)
{
	this->produkt = prd;
	this->bluetoothInfo = bI;
	this->internetInfo = iI;
	this->screenResolution = sR;
}

string Tablet::GetBluetoothInfo()
{
	return bluetoothInfo;
}

string Tablet::GetInternerInfo()
{
	return internetInfo;
}

string Tablet::GetScreenResolution()
{
	return screenResolution;
}

string Tablet::GetDrawingModInfo()
{
	return drawingModInfo;
}

Tablet::Tablet(Produkt* prd, string bI, string iI, string sR, string dMI)
{
	this->produkt = prd;
	this->bluetoothInfo = bI;
	this->internetInfo = iI;
	this->screenResolution = sR;
	this->drawingModInfo = dMI;
}
