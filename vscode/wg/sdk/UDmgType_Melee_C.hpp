#pragma once
#include "UTslDamageType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDmgType_Melee_C // Size: 0xB0
	: public UTslDamageType // Size: 0xB0
{
private:
	typedef UDmgType_Melee_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(52789); // id32("BlueprintGeneratedClass DmgType_Melee.DmgType_Melee_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDmgType_Melee_C = sizeof(UDmgType_Melee_C); // 176
    static_assert(sizeof(UDmgType_Melee_C) == 0xB0, "Size of UDmgType_Melee_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
