#pragma once
#include "UDefaultRifleSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapSCAR_L_C // Size: 0xFA0
	: public UDefaultRifleSetting_C // Size: 0xFA0
{
private:
	typedef UWeapSCAR_L_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133393); // id32("BlueprintGeneratedClass WeapSCAR-L.WeapSCAR-L_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapSCAR_L_C = sizeof(UWeapSCAR_L_C); // 4000
    static_assert(sizeof(UWeapSCAR_L_C) == 0xFA0, "Size of UWeapSCAR_L_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
