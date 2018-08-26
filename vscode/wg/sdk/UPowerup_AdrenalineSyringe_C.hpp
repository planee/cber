#pragma once
#include "UPowerup_Base_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPowerup_AdrenalineSyringe_C // Size: 0x468
	: public UPowerup_Base_C // Size: 0x458
{
private:
	typedef UPowerup_AdrenalineSyringe_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(93001); // id32("BlueprintGeneratedClass Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.UberGraphFrame */
	FTimerHandle Timer2Handle; /* Ofs: 0x460 Size: 0x8 - StructProperty Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.Timer2Handle */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetTimer2Handle(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPowerup_AdrenalineSyringe_C = sizeof(UPowerup_AdrenalineSyringe_C); // 1128
    static_assert(sizeof(UPowerup_AdrenalineSyringe_C) == 0x468, "Size of UPowerup_AdrenalineSyringe_C is not correct.");
	auto constexpr UPowerup_AdrenalineSyringe_C_UberGraphFrame_Offset = offsetof(UPowerup_AdrenalineSyringe_C, UberGraphFrame);
	static_assert(UPowerup_AdrenalineSyringe_C_UberGraphFrame_Offset == 0x458, "UPowerup_AdrenalineSyringe_C::UberGraphFrame offset is not 458");
	auto constexpr UPowerup_AdrenalineSyringe_C_Timer2Handle_Offset = offsetof(UPowerup_AdrenalineSyringe_C, Timer2Handle);
	static_assert(UPowerup_AdrenalineSyringe_C_Timer2Handle_Offset == 0x460, "UPowerup_AdrenalineSyringe_C::Timer2Handle offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
