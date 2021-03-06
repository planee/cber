#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FIntegralKey // Size: 0x8
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.IntegralKey.Time */
    int32_t Value; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.IntegralKey.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFIntegralKey = sizeof(FIntegralKey); // 8
    static_assert(sizeof(FIntegralKey) == 0x8, "Size of FIntegralKey is not correct.");
	auto constexpr FIntegralKey_Time_Offset = offsetof(FIntegralKey, Time);
	static_assert(FIntegralKey_Time_Offset == 0x0, "FIntegralKey::Time offset is not 0");
	auto constexpr FIntegralKey_Value_Offset = offsetof(FIntegralKey, Value);
	static_assert(FIntegralKey_Value_Offset == 0x4, "FIntegralKey::Value offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
