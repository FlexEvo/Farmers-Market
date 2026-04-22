//This where u add farmer.h

#pragma once

using namespace System;
using namespace System::Collections::Generic;

ref class Farmer
{
private:
	String^ fName;
	String^ fSurname;
	String^ frmEmail;
	String^ farm_Contact;
	String^ farmAddy;
	double prices;
	List<List<String^>^>^ produce = gcnew List<List<String^>^>();	//This stores the produce and each produce's quantity.

public:
	Farmer();
	Farmer(String^ fn, String^ fSur, String^ em, String^ fCont, String^ fAddy,double pr);
	String^ getFname();
	String^ getFsurName();
	String^ getFemail();
	String^ getF_contact();
	double getF_Price();
	List<List<String^>^>^ getF_Produce();						    //This will get the produces and their quantities.
	bool operator==(String^ searchNm);							    //This will Search for produce based on searched name.
};
