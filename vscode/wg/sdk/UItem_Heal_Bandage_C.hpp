#pragma once
#include "UHealOverTimeItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Heal_Bandage_C // Size: 0x214
	: public UHealOverTimeItem // Size: 0x210
{
private:
	typedef UItem_Heal_Bandage_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135446); // id32("BlueprintGeneratedClass Item_Heal_Bandage.Item_Heal_Bandage_C")
		return ptr;
	}
	int32_t PrintTime; /* Ofs: 0x210 Size: 0x4 - IntProperty Item_Heal_Bandage.Item_Heal_Bandage_C.PrintTime */


	inline bool SetPrintTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x210, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Heal_Bandage_C = sizeof(UItem_Heal_Bandage_C); // 532
    static_assert(sizeof(UItem_Heal_Bandage_C) == 0x214, "Size of UItem_Heal_Bandage_C is not correct.");
	auto constexpr UItem_Heal_Bandage_C_PrintTime_Offset = offsetof(UItem_Heal_Bandage_C, PrintTime);
	static_assert(UItem_Heal_Bandage_C_PrintTime_Offset == 0x210, "UItem_Heal_Bandage_C::PrintTime offset is not 210");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
