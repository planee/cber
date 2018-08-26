#pragma once
#include "UParticleModule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVectorFieldBase // Size: 0x38
	: public UParticleModule // Size: 0x38
{
private:
	typedef UParticleModuleVectorFieldBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1157); // id32("Class Engine.ParticleModuleVectorFieldBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVectorFieldBase = sizeof(UParticleModuleVectorFieldBase); // 56
    static_assert(sizeof(UParticleModuleVectorFieldBase) == 0x38, "Size of UParticleModuleVectorFieldBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
