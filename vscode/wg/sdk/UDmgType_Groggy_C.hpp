#pragma once
#include "UTslDamageType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDmgType_Groggy_C // Size: 0xB0
	: public UTslDamageType // Size: 0xB0
{
private:
	typedef UDmgType_Groggy_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88645); // id32("BlueprintGeneratedClass DmgType_Groggy.DmgType_Groggy_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDmgType_Groggy_C = sizeof(UDmgType_Groggy_C); // 176
    static_assert(sizeof(UDmgType_Groggy_C) == 0xB0, "Size of UDmgType_Groggy_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
