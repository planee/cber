#pragma once
#include "UNavArea.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavAreaMeta // Size: 0x48
	: public UNavArea // Size: 0x48
{
private:
	typedef UNavAreaMeta t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1032); // id32("Class Engine.NavAreaMeta")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavAreaMeta = sizeof(UNavAreaMeta); // 72
    static_assert(sizeof(UNavAreaMeta) == 0x48, "Size of UNavAreaMeta is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
