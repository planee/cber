#pragma once
#include "UVehicleSeatBase_Moto_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMotorbike_Seat_Passenger_C // Size: 0x4C4
	: public UVehicleSeatBase_Moto_C // Size: 0x4C4
{
private:
	typedef UMotorbike_Seat_Passenger_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(120241); // id32("BlueprintGeneratedClass Motorbike_Seat_Passenger.Motorbike_Seat_Passenger_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMotorbike_Seat_Passenger_C = sizeof(UMotorbike_Seat_Passenger_C); // 1220
    static_assert(sizeof(UMotorbike_Seat_Passenger_C) == 0x4C4, "Size of UMotorbike_Seat_Passenger_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
