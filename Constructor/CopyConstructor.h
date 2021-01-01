#pragma once
using namespace std;

class CopyCons
{
	int m_val;
public:
	CopyCons(int val) :m_val(val)
	{
		cout << "Default Constructor of CopyConstructor" << endl;
	}
	CopyCons(const CopyCons& CObj)
	{
		this->m_val = CObj.m_val;
		cout << "Copy Constructor of CopyConstructor" << endl;
	}
	void Print()
	{
		//this->__vfptr
		//this->__vfptr
		cout << "Print Value : " << m_val << endl;
	}
};

class VirtualCopyCons
{
	int b;
	CopyCons *pcc;
public:
	VirtualCopyCons()
	{
		cout << "VirtualCopyCons Default Constructor " << endl;
	}
	virtual void Print()
	{
		cout << "VirtualCopyCons Print "  << endl;
	}	
};




