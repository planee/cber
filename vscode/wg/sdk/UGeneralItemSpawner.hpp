#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeneralItemSpawner // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UGeneralItemSpawner t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1867); // id32("Class TslGame.GeneralItemSpawner")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeneralItemSpawner = sizeof(UGeneralItemSpawner); // 48
    static_assert(sizeof(UGeneralItemSpawner) == 0x30, "Size of UGeneralItemSpawner is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
