#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnlineSession // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UOnlineSession t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1049); // id32("Class Engine.OnlineSession")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnlineSession = sizeof(UOnlineSession); // 48
    static_assert(sizeof(UOnlineSession) == 0x30, "Size of UOnlineSession is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
