#include"Semantics.h"
#include"DefaultConstructor.h"
#include"CopyConstructor.h"

int main()
{
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

