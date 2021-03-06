#pragma once
#include "UBuggy_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuggy_A_04_C // Size: 0xA00
	: public UBuggy_C // Size: 0xA00
{
private:
	typedef UBuggy_A_04_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124666); // id32("BlueprintGeneratedClass Buggy_A_04.Buggy_A_04_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuggy_A_04_C = sizeof(UBuggy_A_04_C); // 2560
    static_assert(sizeof(UBuggy_A_04_C) == 0xA00, "Size of UBuggy_A_04_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
