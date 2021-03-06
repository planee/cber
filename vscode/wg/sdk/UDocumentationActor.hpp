#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDocumentationActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UDocumentationActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1737); // id32("Class Engine.DocumentationActor")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDocumentationActor = sizeof(UDocumentationActor); // 1040
    static_assert(sizeof(UDocumentationActor) == 0x410, "Size of UDocumentationActor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
