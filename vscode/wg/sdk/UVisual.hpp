#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVisual // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UVisual t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(462); // id32("Class UMG.Visual")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVisual = sizeof(UVisual); // 48
    static_assert(sizeof(UVisual) == 0x30, "Size of UVisual is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
