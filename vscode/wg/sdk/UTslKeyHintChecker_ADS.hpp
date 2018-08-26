#pragma once
#include "UTslKeyHintChecker.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker_ADS // Size: 0x38
	: public UTslKeyHintChecker // Size: 0x38
{
private:
	typedef UTslKeyHintChecker_ADS t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1413); // id32("Class TslGame.TslKeyHintChecker_ADS")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker_ADS = sizeof(UTslKeyHintChecker_ADS); // 56
    static_assert(sizeof(UTslKeyHintChecker_ADS) == 0x38, "Size of UTslKeyHintChecker_ADS is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
