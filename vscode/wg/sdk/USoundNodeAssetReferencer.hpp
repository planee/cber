#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeAssetReferencer // Size: 0x40
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeAssetReferencer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1211); // id32("Class Engine.SoundNodeAssetReferencer")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeAssetReferencer = sizeof(USoundNodeAssetReferencer); // 64
    static_assert(sizeof(USoundNodeAssetReferencer) == 0x40, "Size of USoundNodeAssetReferencer is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
