#pragma once
#include "UCameraShake.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCS_WeapGun_Sniper_762_Kar98_C // Size: 0x170
	: public UCameraShake // Size: 0x170
{
private:
	typedef UCS_WeapGun_Sniper_762_Kar98_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(101630); // id32("BlueprintGeneratedClass CS_WeapGun_Sniper_762_Kar98.CS_WeapGun_Sniper_762_Kar98_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCS_WeapGun_Sniper_762_Kar98_C = sizeof(UCS_WeapGun_Sniper_762_Kar98_C); // 368
    static_assert(sizeof(UCS_WeapGun_Sniper_762_Kar98_C) == 0x170, "Size of UCS_WeapGun_Sniper_762_Kar98_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
