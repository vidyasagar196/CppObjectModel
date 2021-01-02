
#include"DefaultConstructor.h"
#include"CopyConstructor.h"
#include"DataSemantics.h"

int main()
{

	DataSemantics();

	auto optr = CopyObjFuncPtr();
	optr->Print();

	auto o = CopyObjFunc();
	o.Print();

	GetRefObj(o);

	Bear yogi;
	Bear winnie = yogi;

	ZooAnimal franny = yogi;

	draw(yogi);   // invoke Bear::draw() 
	draw(franny); // invoke ZooAnimal::draw() 

	VirtualCopyCons VCopyObj;

	VirtualCopyCons V2 = VCopyObj;
	VCopyObj.Print();
	V2.Print();

	CopyCons CopyObj(10);

	CopyCons CopyObj2(CopyObj);

	CopyCons CopyObj23 = CopyObj2;

	CopyObj.Print();
	CopyObj2.Print();
	CopyObj23.Print();

	NoCons NoObj;

	NoCons NoObj2  = NoObj;

	DVirtNoCons nv;

	foo(new A);
	foo(new C);
	nv.print();

	return 0;
}

