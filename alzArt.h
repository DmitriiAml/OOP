#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

using namespace std;

#pragma once

class Zakaznik
{
private:
	string nameSurname;
	int age;

public:
	Zakaznik(string nS, int a);

	string GetNameSurname();
	int GetAge();

};

class RegistrirovanyAccount
{
private:
	string ucetNickname;
	int ucetId;
	int age;
	double personalDiscount;

	Zakaznik* client;

public:
	RegistrirovanyAccount(string uN, double pD, int uId, int a, Zakaznik* c);

	string GetUcetNickName();
	double GetPersonalDiscount();
	int GetUcetId();

	Zakaznik* GetNameSurname();
	Zakaznik* GetAge();
};

class NeRegistrirovanyAccount
{
private:
	int levelOfTrust;
	int age;

	Zakaznik* client;

public:
	int GetLevelOfTrust();
	NeRegistrirovanyAccount(Zakaznik* c, int a, int LoT);
		
};

class Produkt
{
private:
	string produktModel;
	int produktPrice;
	double produktDiscount;

public:
	
	Produkt(string pM, int pP, double pD);

	string GetModel();
	int GetPrice();
	double GetProductDiscount();

};

class Notebook
{
private:
	string videoCard;
	string processor;
	string screenResolution;
	string motherboard;
	string ssdInfo;
	string hddInfo;

	Produkt* produkt;

public:
	string GetVideoCard();
	string GetProcessor();
	string GetResolution();
	string GetSSDInfo();
	string GetHDDInfo();

	Notebook(Produkt* prd, string vC, string p, string sR, string m, string sI, string hI);

};

class MobilniTelefon
{
private:
	string bluetoothInfo;
	string internetInfo;
	string screenResolution;

	Produkt* produkt;
	
public:
	string GetBluetoothInfo();
	string GetInternerInfo();
	string GetScreenResolution();

	MobilniTelefon(Produkt* prd, string bI, string iI, string sR);

};

class Tablet
{
private:
	string bluetoothInfo;
	string internetInfo;
	string screenResolution;
	string drawingModInfo;

	Produkt* produkt;

public:
	string GetBluetoothInfo();
	string GetInternerInfo();
	string GetScreenResolution();
	string GetDrawingModInfo();

	Tablet(Produkt* prd, string bI, string iI, string sR, string dMI);

};
