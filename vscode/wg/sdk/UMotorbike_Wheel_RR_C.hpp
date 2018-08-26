#pragma once
#include "UMotorbike_Wheel_R_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMotorbike_Wheel_RR_C // Size: 0x270
	: public UMotorbike_Wheel_R_C // Size: 0x270
{
private:
	typedef UMotorbike_Wheel_RR_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(120109); // id32("BlueprintGeneratedClass Motorbike_Wheel_RR.Motorbike_Wheel_RR_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMotorbike_Wheel_RR_C = sizeof(UMotorbike_Wheel_RR_C); // 624
    static_assert(sizeof(UMotorbike_Wheel_RR_C) == 0x270, "Size of UMotorbike_Wheel_RR_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
