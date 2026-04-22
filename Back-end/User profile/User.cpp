//THIS IS WHERE U ADD User.cpp


#include "pch.h"
#include "User.h"

User::User() {
	usrName = "";
	usrSurname = "";
	usrCell = "";
	usrEmail = "";
	usrAddress = "";
}

User::User(String^ uNam, String^ uSur, String^ uCel, String^ em, String^ uAddy) {
	
	usrName = uNam;
	usrSurname = uSur;
	usrCell = uCel;
	usrEmail = em;
	usrAddress = uAddy;
}

String^ User::getUserName() {
	return usrName;
}

String^ User::getUserSurname() {
	return usrSurname;
}

String^ User::getUserCell() {
	return usrCell;
}

String^ User::getUserEmail() {
	return usrEmail;
}

String^ User::getUserAddress() {
	return usrAddress;
}
