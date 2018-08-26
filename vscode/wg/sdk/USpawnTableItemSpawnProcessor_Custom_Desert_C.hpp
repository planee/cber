#pragma once
#include "USpawnTableItemSpawnProcessor_Desert_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpawnTableItemSpawnProcessor_Custom_Desert_C // Size: 0xF70
	: public USpawnTableItemSpawnProcessor_Desert_C // Size: 0xF70
{
private:
	typedef USpawnTableItemSpawnProcessor_Custom_Desert_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135561); // id32("BlueprintGeneratedClass SpawnTableItemSpawnProcessor_Custom_Desert.SpawnTableItemSpawnProcessor_Custom_Desert_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpawnTableItemSpawnProcessor_Custom_Desert_C = sizeof(USpawnTableItemSpawnProcessor_Custom_Desert_C); // 3952
    static_assert(sizeof(USpawnTableItemSpawnProcessor_Custom_Desert_C) == 0xF70, "Size of USpawnTableItemSpawnProcessor_Custom_Desert_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
