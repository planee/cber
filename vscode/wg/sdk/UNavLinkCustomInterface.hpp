#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavLinkCustomInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UNavLinkCustomInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1806); // id32("Class Engine.NavLinkCustomInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavLinkCustomInterface = sizeof(UNavLinkCustomInterface); // 48
    static_assert(sizeof(UNavLinkCustomInterface) == 0x30, "Size of UNavLinkCustomInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
