#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundEffectPreset // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef USoundEffectPreset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(363); // id32("Class Engine.SoundEffectPreset")
		return ptr;
	}
	uint8_t UnknownData30[0x18];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundEffectPreset = sizeof(USoundEffectPreset); // 72
    static_assert(sizeof(USoundEffectPreset) == 0x48, "Size of USoundEffectPreset is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
