#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDateTime // Size: 0x8
{
public:
    uint8_t UnknownData0[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDateTime = sizeof(FDateTime); // 8
    static_assert(sizeof(FDateTime) == 0x8, "Size of FDateTime is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
