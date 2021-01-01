#pragma once


class X 
{
public: 
	int i; 
};
class A : public virtual X 
{ 
public: 
	int j; 
};
class B : public virtual X 
{ 
public:
	double d; 
};
class C : public A, public B 
{ 
public: 
	int k; 
};
				// cannot resolve location of pa->X::i at compile-time 
void foo(const A* pa)
{ 
	int i = 0;
	i = pa->i; 
	//pa->__vfptr->i = 10;
}


class VirtualNoDefaultCons
{
public:
	virtual void print()
	{

	}
};

class ParamCons
{
	int mVal;
public:
	ParamCons(int Val)
	{
		mVal = Val;
	}
};


class DVirtNoCons : public VirtualNoDefaultCons
{

};


class NoCons :  public ParamCons
{
public:
	//Will throw error if removed 
	NoCons():ParamCons(0){} 
};

class DefaultConstructor
{


};