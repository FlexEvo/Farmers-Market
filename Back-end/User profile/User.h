//This is where u add User.h


#pragma once
using namespace System;
using namespace System::Collections::Generic;

ref class User
{
private:
	String^ usrName;
	String^ usrSurname;
	String^ usrCell;
	String^ usrEmail;
	String^ usrAddress;

public:
	User();
	User(String^ uNam, String^ uSur, String^ uCel, String^ em, String^ uAddy);
	String^ getUserName();
	String^ getUserSurname();
	String^ getUserCell();
	String^ getUserEmail();
	String^ getUserAddress();
};

