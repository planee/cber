#pragma once
#include "UUaz_Wheel_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUaz_Wheel_FL_C // Size: 0x270
	: public UUaz_Wheel_C // Size: 0x270
{
private:
	typedef UUaz_Wheel_FL_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115050); // id32("BlueprintGeneratedClass Uaz_Wheel_FL.Uaz_Wheel_FL_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUaz_Wheel_FL_C = sizeof(UUaz_Wheel_FL_C); // 624
    static_assert(sizeof(UUaz_Wheel_FL_C) == 0x270, "Size of UUaz_Wheel_FL_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
