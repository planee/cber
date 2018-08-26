#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCategoryGroupWidget_Gamepad_C // Size: 0x278
	: public UUserWidget // Size: 0x248
{
private:
	typedef UCategoryGroupWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(64241); // id32("WidgetBlueprintGeneratedClass CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> Category; /* Ofs: 0x248 Size: 0x8 - ObjectProperty CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.Category */
	ExternalPtr<struct UVerticalBox> SlotList; /* Ofs: 0x250 Size: 0x8 - ObjectProperty CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.SlotList */
	ExternalPtr<struct UVerticalBox> VerticalBox_1; /* Ofs: 0x258 Size: 0x8 - ObjectProperty CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.VerticalBox_1 */
	FText CategoryName; /* Ofs: 0x260 Size: 0x18 - TextProperty CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.CategoryName */


	inline bool SetCategory(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
	inline bool SetSlotList(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x250, value); }
	inline bool SetVerticalBox_1(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x258, value); }
	inline bool SetCategoryName(t_structHelper inst, FText value) { inst.WriteOffset(0x260, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCategoryGroupWidget_Gamepad_C = sizeof(UCategoryGroupWidget_Gamepad_C); // 632
    static_assert(sizeof(UCategoryGroupWidget_Gamepad_C) == 0x278, "Size of UCategoryGroupWidget_Gamepad_C is not correct.");
	auto constexpr UCategoryGroupWidget_Gamepad_C_Category_Offset = offsetof(UCategoryGroupWidget_Gamepad_C, Category);
	static_assert(UCategoryGroupWidget_Gamepad_C_Category_Offset == 0x248, "UCategoryGroupWidget_Gamepad_C::Category offset is not 248");
	auto constexpr UCategoryGroupWidget_Gamepad_C_SlotList_Offset = offsetof(UCategoryGroupWidget_Gamepad_C, SlotList);
	static_assert(UCategoryGroupWidget_Gamepad_C_SlotList_Offset == 0x250, "UCategoryGroupWidget_Gamepad_C::SlotList offset is not 250");
	auto constexpr UCategoryGroupWidget_Gamepad_C_VerticalBox_1_Offset = offsetof(UCategoryGroupWidget_Gamepad_C, VerticalBox_1);
	static_assert(UCategoryGroupWidget_Gamepad_C_VerticalBox_1_Offset == 0x258, "UCategoryGroupWidget_Gamepad_C::VerticalBox_1 offset is not 258");
	auto constexpr UCategoryGroupWidget_Gamepad_C_CategoryName_Offset = offsetof(UCategoryGroupWidget_Gamepad_C, CategoryName);
	static_assert(UCategoryGroupWidget_Gamepad_C_CategoryName_Offset == 0x260, "UCategoryGroupWidget_Gamepad_C::CategoryName offset is not 260");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
