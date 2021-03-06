#pragma once
#include "UTslStaticFence.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDesert_Powerline_01_C // Size: 0x4B0
	: public UTslStaticFence // Size: 0x4B0
{
private:
	typedef UDesert_Powerline_01_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(149504); // id32("BlueprintGeneratedClass Desert_Powerline_01.Desert_Powerline_01_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDesert_Powerline_01_C = sizeof(UDesert_Powerline_01_C); // 1200
    static_assert(sizeof(UDesert_Powerline_01_C) == 0x4B0, "Size of UDesert_Powerline_01_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
