#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UThumbnailInfo // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UThumbnailInfo t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1251); // id32("Class Engine.ThumbnailInfo")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUThumbnailInfo = sizeof(UThumbnailInfo); // 48
    static_assert(sizeof(UThumbnailInfo) == 0x30, "Size of UThumbnailInfo is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
