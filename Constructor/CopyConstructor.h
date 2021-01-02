#pragma once
#include"Common.h"
using namespace std;

class ZooAnimal {
public:
	ZooAnimal()
	{
		cout << __FUNCTION__ << " : "<<__LINE__ <<endl;
	}
	virtual ~ZooAnimal()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
	}

	virtual void animate()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
	}
	virtual void draw()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
	}
private:
	// data necessary for ZooAnimal's 
	// version of animate() and draw() 
};

void draw(ZooAnimal& zoey) 
{
	zoey.draw();
}


class Bear : public ZooAnimal {
public:
	Bear()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
	}

	void animate()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
	}
	void draw()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
	}
	virtual void dance()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
	}
	// ... 
private:
	// data necessary for Bear's version 
	// of animate(), draw(), and dance() 
};



class CopyCons
{
	int m_val;
public:
	~CopyCons()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
		cout << "Default Destructor of CopyConstructor" << endl;
	}
	CopyCons(int val) :m_val(val)
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
		cout << "Default Constructor of CopyConstructor" << endl;
	}
	CopyCons(const CopyCons& CObj)
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
		this->m_val = CObj.m_val;
		cout << "Copy Constructor of CopyConstructor" << endl;
	}
	void Update(int Val)
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
		m_val = Val;
	}
	void Print()
	{
		//this->__vfptr
		//this->__vfptr
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
		cout << "Print Value : " << m_val << endl;
	}
};

CopyCons* CopyObjFuncPtr()
{
	CopyCons* Obj  = new CopyCons(10);
	Obj->Update(230);
	//return CopyCons(10);
	return Obj;
}

CopyCons CopyObjFunc()
{
	CopyCons Obj(10);
	Obj.Update(230);
	//return CopyCons(10);
	return Obj;
}

class VirtualCopyCons
{
	int b;
	CopyCons *pcc;
public:
	VirtualCopyCons()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
		cout << "VirtualCopyCons Default Constructor " << endl;
	}
	virtual void Print()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
		cout << "VirtualCopyCons Print "  << endl;
	}	
	~VirtualCopyCons()
	{
		cout << __FUNCTION__ << " : " << __LINE__ << endl;
		cout << "Default Destructor of VirtualCopyCons" << endl;
	}
};




void GetRefObj(CopyCons& cpyObj)
{
	cpyObj.Print();
}