#pragma once
#include "UTslStaticFence.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStatic_ConcreteWall_Desert_03_C // Size: 0x4B0
	: public UTslStaticFence // Size: 0x4B0
{
private:
	typedef UStatic_ConcreteWall_Desert_03_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(211824); // id32("BlueprintGeneratedClass Static_ConcreteWall_Desert_03.Static_ConcreteWall_Desert_03_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStatic_ConcreteWall_Desert_03_C = sizeof(UStatic_ConcreteWall_Desert_03_C); // 1200
    static_assert(sizeof(UStatic_ConcreteWall_Desert_03_C) == 0x4B0, "Size of UStatic_ConcreteWall_Desert_03_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
