#pragma once
#include"Common.h"

class sX {
	//int i;
	//char c;
};
class sY : public virtual sX {
public:
	virtual void print()
	{
		std::cout << __FUNCTION__ << " : " << __LINE__ << endl;
	}
};
class sZ : public virtual sX {
public:
	virtual void print()
	{
		std::cout << __FUNCTION__ << " : " << __LINE__ << endl;
	}
};
class sXYZ : public sY, public sZ {

public:
	virtual void print()
	{
		std::cout << __FUNCTION__ << " : " << __LINE__ << endl;
	}
};

void DataSemantics(void)
{
	class sX      ObjX;
	class sY      ObjY;
	class sZ      ObjZ;
	class sXYZ    ObjXYZ;

	sX a, b;
	if (&a == &b)
	{
		cerr << "yipes!" << endl;
	}
	else
	{
		cerr << "Non!" << endl;
	}

	std::cout << "Size of Object sX   : " << sizeof(ObjX) << endl;
	std::cout << "Size of Object sY   : " << sizeof(ObjY) << endl;
	std::cout << "Size of Object sZ   : " << sizeof(ObjZ) << endl;
	std::cout << "Size of Object sXYZ : " << sizeof(ObjXYZ) << endl;

	ObjY.print();
	ObjZ.print();
	ObjXYZ.sY::print();
	ObjXYZ.sZ::print();
	ObjXYZ.print();

	return;
}