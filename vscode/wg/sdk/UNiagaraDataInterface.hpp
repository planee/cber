#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraDataInterface // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UNiagaraDataInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(10); // id32("Class Niagara.NiagaraDataInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraDataInterface = sizeof(UNiagaraDataInterface); // 48
    static_assert(sizeof(UNiagaraDataInterface) == 0x30, "Size of UNiagaraDataInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
