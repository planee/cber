#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDebugDrawService // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UDebugDrawService t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(299); // id32("Class Engine.DebugDrawService")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDebugDrawService = sizeof(UDebugDrawService); // 48
    static_assert(sizeof(UDebugDrawService) == 0x30, "Size of UDebugDrawService is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
