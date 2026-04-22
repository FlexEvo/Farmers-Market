//THIS IS WHERE U ADD Farmer.cpp

#include "pch.h"
#include "Farmer.h"


Farmer::Farmer() {

	fName = "";
	fSurname = "";
	frmEmail = "";
	farm_Contact = "";
	farmAddy = "";
	prices = 0.0;

}

Farmer::Farmer(String^ fn, String^ fSur, String^ em, String^ fCont, String^ fAddy, double pr) {

	fName = fn;
	fSurname = fSur;
	frmEmail = em;
	farm_Contact = fCont;
	farmAddy = fAddy;
	prices = pr;
}

String^ Farmer::getFname() {
	return fName;
}

String^ Farmer::getFsurName() {
	return fSurname;
}

String^ Farmer::getFemail() {
	return frmEmail;
}

String^ Farmer::getF_contact() {
	return farm_Contact;
}

double Farmer::getF_Price() {
	return prices;
}

List<List<String^>^>^ Farmer::getF_Produce() {

	return produce;

}

bool Farmer::operator==(String^ searchNm) {

	for (int a = 0; a < produce[0]->Count; a++) {
		for (int b = 0; b < produce[a]->Count;b++) {

			if (produce[a]->default[b]->Equals(searchNm))
				return true;

		}
	}
	return false;
}
